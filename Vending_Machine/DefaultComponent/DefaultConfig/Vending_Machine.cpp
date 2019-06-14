/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Vending_Machine
//!	Generated Date	: Fri, 14, Jun 2019  
	File Path	: DefaultComponent\DefaultConfig\Vending_Machine.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Vending_Machine.h"
//#[ ignore
#define Vending_Machine_ZT_Vending_Machine_Vending_Machine_SERIALIZE OM_NO_OP
//#]

//## package Vending_Machine_ZT

//## class Vending_Machine
Vending_Machine::Vending_Machine(IOxfActive* theActiveContext) : Coins(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Vending_Machine, Vending_Machine(), 0, Vending_Machine_ZT_Vending_Machine_Vending_Machine_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsDisplay.setShouldDelete(false);
        }
        {
            itsPrice_list.setShouldDelete(false);
        }
    }
    initRelations();
    initStatechart();
}

Vending_Machine::~Vending_Machine() {
    NOTIFY_DESTRUCTOR(~Vending_Machine, true);
    cancelTimeouts();
}

int Vending_Machine::getCoins() const {
    return Coins;
}

void Vending_Machine::setCoins(int p_Coins) {
    Coins = p_Coins;
}

int Vending_Machine::getCountCoins() const {
    return countCoins;
}

void Vending_Machine::setCountCoins(int p_countCoins) {
    countCoins = p_countCoins;
    NOTIFY_SET_OPERATION;
}

Display* Vending_Machine::getItsDisplay() const {
    return (Display*) &itsDisplay;
}

Price_list* Vending_Machine::getItsPrice_list() const {
    return (Price_list*) &itsPrice_list;
}

bool Vending_Machine::startBehavior() {
    bool done = true;
    done &= itsDisplay.startBehavior();
    done &= itsPrice_list.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Vending_Machine::initRelations() {
    itsDisplay._setItsVending_Machine(this);
    itsPrice_list._setItsVending_Machine(this);
}

void Vending_Machine::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    VendingMachine_statechart_subState = OMNonState;
    VendingMachine_statechart_timeout = NULL;
}

void Vending_Machine::cancelTimeouts() {
    cancel(VendingMachine_statechart_timeout);
}

bool Vending_Machine::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(VendingMachine_statechart_timeout == arg)
        {
            VendingMachine_statechart_timeout = NULL;
            res = true;
        }
    return res;
}

void Vending_Machine::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsDisplay.setActiveContext(theActiveContext, false);
        itsPrice_list.setActiveContext(theActiveContext, false);
    }
}

void Vending_Machine::destroy() {
    itsDisplay.destroy();
    itsPrice_list.destroy();
    OMReactive::destroy();
}

void Vending_Machine::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        VendingMachine_statechart_entDef();
    }
}

IOxfReactive::TakeEventStatus Vending_Machine::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Value
        case Value:
        {
            res = Value_handleEvent();
        }
        break;
        // State Check
        case Check:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 2 
                    if(countCoins>0)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Check");
                            NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Insert_coin");
                            pushNullTransition();
                            VendingMachine_statechart_subState = Insert_coin;
                            rootState_active = Insert_coin;
                            //#[ state VendingMachine_statechart.Insert_coin.(Entry) 
                            Coins=Coins++;
                            itsDisplay.GEN(evPay());
                            itsPrice_list.GEN(evPay());
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 4 
                            if(countCoins==0)
                                {
                                    NOTIFY_TRANSITION_STARTED("4");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Check");
                                    NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Value");
                                    pushNullTransition();
                                    VendingMachine_statechart_subState = Value;
                                    rootState_active = Value;
                                    //#[ state VendingMachine_statechart.Value.(Entry) 
                                     countCoins=itsPrice_list.getPrice()-Coins;
                                    //#]
                                    VendingMachine_statechart_timeout = scheduleTimeout(200, "ROOT.VendingMachine_statechart.Value");
                                    NOTIFY_TRANSITION_TERMINATED("4");
                                    res = eventConsumed;
                                }
                        }
                }
            
            
        }
        break;
        // State Insert_coin
        case Insert_coin:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Insert_coin");
                    NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Value");
                    pushNullTransition();
                    VendingMachine_statechart_subState = Value;
                    rootState_active = Value;
                    //#[ state VendingMachine_statechart.Value.(Entry) 
                     countCoins=itsPrice_list.getPrice()-Coins;
                    //#]
                    VendingMachine_statechart_timeout = scheduleTimeout(200, "ROOT.VendingMachine_statechart.Value");
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Change
        case Change:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Change");
                    NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Value");
                    pushNullTransition();
                    VendingMachine_statechart_subState = Value;
                    rootState_active = Value;
                    //#[ state VendingMachine_statechart.Value.(Entry) 
                     countCoins=itsPrice_list.getPrice()-Coins;
                    //#]
                    VendingMachine_statechart_timeout = scheduleTimeout(200, "ROOT.VendingMachine_statechart.Value");
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Enough
        case Enough:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Enough");
                    NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Value");
                    pushNullTransition();
                    VendingMachine_statechart_subState = Value;
                    rootState_active = Value;
                    //#[ state VendingMachine_statechart.Value.(Entry) 
                     countCoins=itsPrice_list.getPrice()-Coins;
                    //#]
                    VendingMachine_statechart_timeout = scheduleTimeout(200, "ROOT.VendingMachine_statechart.Value");
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Giving_drink
        case Giving_drink:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == VendingMachine_statechart_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("8");
                            cancel(VendingMachine_statechart_timeout);
                            NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Giving_drink");
                            NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Enough");
                            pushNullTransition();
                            VendingMachine_statechart_subState = Enough;
                            rootState_active = Enough;
                            //#[ state VendingMachine_statechart.Enough.(Entry) 
                            itsDisplay.GEN(evPaid());
                            itsPrice_list.GEN(evPaid());
                            Coins=0;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("8");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Vending_Machine::VendingMachine_statechart_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart");
    rootState_subState = VendingMachine_statechart;
    NOTIFY_TRANSITION_STARTED("0");
    NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Value");
    pushNullTransition();
    VendingMachine_statechart_subState = Value;
    rootState_active = Value;
    //#[ state VendingMachine_statechart.Value.(Entry) 
     countCoins=itsPrice_list.getPrice()-Coins;
    //#]
    VendingMachine_statechart_timeout = scheduleTimeout(200, "ROOT.VendingMachine_statechart.Value");
    NOTIFY_TRANSITION_TERMINATED("0");
}

void Vending_Machine::VendingMachine_statechart_exit() {
    switch (VendingMachine_statechart_subState) {
        // State Value
        case Value:
        {
            popNullTransition();
            cancel(VendingMachine_statechart_timeout);
            NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Value");
        }
        break;
        // State Check
        case Check:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Check");
        }
        break;
        // State Insert_coin
        case Insert_coin:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Insert_coin");
        }
        break;
        // State Change
        case Change:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Change");
        }
        break;
        // State Enough
        case Enough:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Enough");
        }
        break;
        // State Giving_drink
        case Giving_drink:
        {
            cancel(VendingMachine_statechart_timeout);
            NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Giving_drink");
        }
        break;
        default:
            break;
    }
    VendingMachine_statechart_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart");
}

IOxfReactive::TakeEventStatus Vending_Machine::Value_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evPay_Vending_Machine_ZT_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            popNullTransition();
            cancel(VendingMachine_statechart_timeout);
            NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Value");
            NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Check");
            pushNullTransition();
            VendingMachine_statechart_subState = Check;
            rootState_active = Check;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == VendingMachine_statechart_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    cancel(VendingMachine_statechart_timeout);
                    NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Value");
                    NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Value");
                    pushNullTransition();
                    VendingMachine_statechart_subState = Value;
                    rootState_active = Value;
                    //#[ state VendingMachine_statechart.Value.(Entry) 
                     countCoins=itsPrice_list.getPrice()-Coins;
                    //#]
                    VendingMachine_statechart_timeout = scheduleTimeout(200, "ROOT.VendingMachine_statechart.Value");
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 10 
            if(countCoins==0 && itsPrice_list.getPrice() != 0)
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    cancel(VendingMachine_statechart_timeout);
                    NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Value");
                    NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Giving_drink");
                    VendingMachine_statechart_subState = Giving_drink;
                    rootState_active = Giving_drink;
                    //#[ state VendingMachine_statechart.Giving_drink.(Entry) 
                     itsDisplay.setPrintMessage();
                    //#]
                    VendingMachine_statechart_timeout = scheduleTimeout(5000, "ROOT.VendingMachine_statechart.Giving_drink");
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evChange_Vending_Machine_ZT_id))
        {
            NOTIFY_TRANSITION_STARTED("5");
            popNullTransition();
            cancel(VendingMachine_statechart_timeout);
            NOTIFY_STATE_EXITED("ROOT.VendingMachine_statechart.Value");
            NOTIFY_STATE_ENTERED("ROOT.VendingMachine_statechart.Change");
            pushNullTransition();
            VendingMachine_statechart_subState = Change;
            rootState_active = Change;
            //#[ state VendingMachine_statechart.Change.(Entry) 
              Coins=0;
              countCoins=0;
              itsDisplay.GEN(evChange());
              itsPrice_list.GEN(evChange());
            //#]
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedVending_Machine::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Coins", x2String(myReal->Coins));
    aomsAttributes->addAttribute("countCoins", x2String(myReal->countCoins));
}

void OMAnimatedVending_Machine::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDisplay", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsDisplay);
    aomsRelations->addRelation("itsPrice_list", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsPrice_list);
}

void OMAnimatedVending_Machine::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Vending_Machine::VendingMachine_statechart)
        {
            VendingMachine_statechart_serializeStates(aomsState);
        }
}

void OMAnimatedVending_Machine::VendingMachine_statechart_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.VendingMachine_statechart");
    switch (myReal->VendingMachine_statechart_subState) {
        case Vending_Machine::Value:
        {
            Value_serializeStates(aomsState);
        }
        break;
        case Vending_Machine::Check:
        {
            Check_serializeStates(aomsState);
        }
        break;
        case Vending_Machine::Insert_coin:
        {
            Insert_coin_serializeStates(aomsState);
        }
        break;
        case Vending_Machine::Change:
        {
            Change_serializeStates(aomsState);
        }
        break;
        case Vending_Machine::Enough:
        {
            Enough_serializeStates(aomsState);
        }
        break;
        case Vending_Machine::Giving_drink:
        {
            Giving_drink_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedVending_Machine::Value_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.VendingMachine_statechart.Value");
}

void OMAnimatedVending_Machine::Insert_coin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.VendingMachine_statechart.Insert_coin");
}

void OMAnimatedVending_Machine::Giving_drink_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.VendingMachine_statechart.Giving_drink");
}

void OMAnimatedVending_Machine::Enough_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.VendingMachine_statechart.Enough");
}

void OMAnimatedVending_Machine::Check_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.VendingMachine_statechart.Check");
}

void OMAnimatedVending_Machine::Change_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.VendingMachine_statechart.Change");
}
//#]

IMPLEMENT_REACTIVE_META_P(Vending_Machine, Vending_Machine_ZT, Vending_Machine_ZT, false, OMAnimatedVending_Machine)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Vending_Machine.cpp
*********************************************************************/
