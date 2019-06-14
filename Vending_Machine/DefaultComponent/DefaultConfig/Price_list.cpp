/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Price_list
//!	Generated Date	: Fri, 14, Jun 2019  
	File Path	: DefaultComponent\DefaultConfig\Price_list.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Price_list.h"
//## link itsVending_Machine
#include "Vending_Machine.h"
//#[ ignore
#define Vending_Machine_ZT_Price_list_Price_list_SERIALIZE OM_NO_OP
//#]

//## package Vending_Machine_ZT

//## class Price_list
Price_list::Price_list(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Price_list, Price_list(), 0, Vending_Machine_ZT_Price_list_Price_list_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsVending_Machine = NULL;
    itsVending_Machine_1 = NULL;
    initStatechart();
}

Price_list::~Price_list() {
    NOTIFY_DESTRUCTOR(~Price_list, true);
    cleanUpRelations();
}

int Price_list::getDrink_price() const {
    return Drink_price;
}

void Price_list::setDrink_price(int p_Drink_price) {
    Drink_price = p_Drink_price;
}

int Price_list::getPrice() const {
    return Price;
}

void Price_list::setPrice(int p_Price) {
    Price = p_Price;
}

Vending_Machine* Price_list::getItsVending_Machine() const {
    return itsVending_Machine;
}

void Price_list::setItsVending_Machine(Vending_Machine* p_Vending_Machine) {
    _setItsVending_Machine(p_Vending_Machine);
}

Vending_Machine* Price_list::getItsVending_Machine_1() const {
    return itsVending_Machine_1;
}

void Price_list::setItsVending_Machine_1(Vending_Machine* p_Vending_Machine) {
    itsVending_Machine_1 = p_Vending_Machine;
    if(p_Vending_Machine != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsVending_Machine_1", p_Vending_Machine, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsVending_Machine_1");
        }
}

bool Price_list::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Price_list::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Pricelist_statechart_subState = OMNonState;
}

void Price_list::cleanUpRelations() {
    if(itsVending_Machine != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsVending_Machine");
            itsVending_Machine = NULL;
        }
    if(itsVending_Machine_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsVending_Machine_1");
            itsVending_Machine_1 = NULL;
        }
}

void Price_list::__setItsVending_Machine(Vending_Machine* p_Vending_Machine) {
    itsVending_Machine = p_Vending_Machine;
    if(p_Vending_Machine != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsVending_Machine", p_Vending_Machine, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsVending_Machine");
        }
}

void Price_list::_setItsVending_Machine(Vending_Machine* p_Vending_Machine) {
    __setItsVending_Machine(p_Vending_Machine);
}

void Price_list::_clearItsVending_Machine() {
    NOTIFY_RELATION_CLEARED("itsVending_Machine");
    itsVending_Machine = NULL;
}

void Price_list::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        Pricelist_statechart_entDef();
    }
}

IOxfReactive::TakeEventStatus Price_list::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Count_price
        case Count_price:
        {
            res = Count_price_handleEvent();
        }
        break;
        // State Pay
        case Pay:
        {
            if(IS_EVENT_TYPE_OF(evPaid_Vending_Machine_ZT_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Pay");
                    NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.Reset_counter");
                    pushNullTransition();
                    Pricelist_statechart_subState = Reset_counter;
                    rootState_active = Reset_counter;
                    //#[ state Pricelist_statechart.Reset_counter.(Entry) 
                       Drink_price=0;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evChange_Vending_Machine_ZT_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Pay");
                    NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.Change");
                    pushNullTransition();
                    Pricelist_statechart_subState = Change;
                    rootState_active = Change;
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
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Change");
                    NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.Reset_counter");
                    pushNullTransition();
                    Pricelist_statechart_subState = Reset_counter;
                    rootState_active = Reset_counter;
                    //#[ state Pricelist_statechart.Reset_counter.(Entry) 
                       Drink_price=0;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Reset_counter
        case Reset_counter:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Reset_counter");
                    NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.Count_price");
                    Pricelist_statechart_subState = Count_price;
                    rootState_active = Count_price;
                    //#[ state Pricelist_statechart.Count_price.(Entry) 
                     Price=Drink_price;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State cola
        case cola:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.cola");
                    NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.Count_price");
                    Pricelist_statechart_subState = Count_price;
                    rootState_active = Count_price;
                    //#[ state Pricelist_statechart.Count_price.(Entry) 
                     Price=Drink_price;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sok
        case sok:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.sok");
                    NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.Count_price");
                    Pricelist_statechart_subState = Count_price;
                    rootState_active = Count_price;
                    //#[ state Pricelist_statechart.Count_price.(Entry) 
                     Price=Drink_price;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State woda
        case woda:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.woda");
                    NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.Count_price");
                    Pricelist_statechart_subState = Count_price;
                    rootState_active = Count_price;
                    //#[ state Pricelist_statechart.Count_price.(Entry) 
                     Price=Drink_price;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void Price_list::Pricelist_statechart_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart");
    rootState_subState = Pricelist_statechart;
    NOTIFY_TRANSITION_STARTED("0");
    NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.Count_price");
    Pricelist_statechart_subState = Count_price;
    rootState_active = Count_price;
    //#[ state Pricelist_statechart.Count_price.(Entry) 
     Price=Drink_price;
    //#]
    NOTIFY_TRANSITION_TERMINATED("0");
}

void Price_list::Pricelist_statechart_exit() {
    switch (Pricelist_statechart_subState) {
        // State Count_price
        case Count_price:
        {
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Count_price");
        }
        break;
        // State Pay
        case Pay:
        {
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Pay");
        }
        break;
        // State Change
        case Change:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Change");
        }
        break;
        // State Reset_counter
        case Reset_counter:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Reset_counter");
        }
        break;
        // State cola
        case cola:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.cola");
        }
        break;
        // State sok
        case sok:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.sok");
        }
        break;
        // State woda
        case woda:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.woda");
        }
        break;
        default:
            break;
    }
    Pricelist_statechart_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart");
}

IOxfReactive::TakeEventStatus Price_list::Count_price_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evSelect_opt2_Vending_Machine_ZT_id))
        {
            NOTIFY_TRANSITION_STARTED("8");
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Count_price");
            NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.sok");
            pushNullTransition();
            Pricelist_statechart_subState = sok;
            rootState_active = sok;
            //#[ state Pricelist_statechart.sok.(Entry) 
            Drink_price=4;
            //#]
            NOTIFY_TRANSITION_TERMINATED("8");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evSelect_opt3_Vending_Machine_ZT_id))
        {
            NOTIFY_TRANSITION_STARTED("6");
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Count_price");
            NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.woda");
            pushNullTransition();
            Pricelist_statechart_subState = woda;
            rootState_active = woda;
            //#[ state Pricelist_statechart.woda.(Entry) 
               Drink_price=3;
            //#]
            NOTIFY_TRANSITION_TERMINATED("6");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evPay_Vending_Machine_ZT_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Count_price");
            NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.Pay");
            Pricelist_statechart_subState = Pay;
            rootState_active = Pay;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evSelect_opt1_Vending_Machine_ZT_id))
        {
            NOTIFY_TRANSITION_STARTED("10");
            NOTIFY_STATE_EXITED("ROOT.Pricelist_statechart.Count_price");
            NOTIFY_STATE_ENTERED("ROOT.Pricelist_statechart.cola");
            pushNullTransition();
            Pricelist_statechart_subState = cola;
            rootState_active = cola;
            //#[ state Pricelist_statechart.cola.(Entry) 
            Drink_price=5;
            //#]
            NOTIFY_TRANSITION_TERMINATED("10");
            res = eventConsumed;
        }
    
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPrice_list::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Price", x2String(myReal->Price));
    aomsAttributes->addAttribute("Drink_price", x2String(myReal->Drink_price));
}

void OMAnimatedPrice_list::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsVending_Machine_1", false, true);
    if(myReal->itsVending_Machine_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsVending_Machine_1);
        }
    aomsRelations->addRelation("itsVending_Machine", false, true);
    if(myReal->itsVending_Machine)
        {
            aomsRelations->ADD_ITEM(myReal->itsVending_Machine);
        }
}

void OMAnimatedPrice_list::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Price_list::Pricelist_statechart)
        {
            Pricelist_statechart_serializeStates(aomsState);
        }
}

void OMAnimatedPrice_list::Pricelist_statechart_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pricelist_statechart");
    switch (myReal->Pricelist_statechart_subState) {
        case Price_list::Count_price:
        {
            Count_price_serializeStates(aomsState);
        }
        break;
        case Price_list::Pay:
        {
            Pay_serializeStates(aomsState);
        }
        break;
        case Price_list::Change:
        {
            Change_serializeStates(aomsState);
        }
        break;
        case Price_list::Reset_counter:
        {
            Reset_counter_serializeStates(aomsState);
        }
        break;
        case Price_list::cola:
        {
            cola_serializeStates(aomsState);
        }
        break;
        case Price_list::sok:
        {
            sok_serializeStates(aomsState);
        }
        break;
        case Price_list::woda:
        {
            woda_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPrice_list::woda_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pricelist_statechart.woda");
}

void OMAnimatedPrice_list::sok_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pricelist_statechart.sok");
}

void OMAnimatedPrice_list::Reset_counter_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pricelist_statechart.Reset_counter");
}

void OMAnimatedPrice_list::Pay_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pricelist_statechart.Pay");
}

void OMAnimatedPrice_list::Count_price_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pricelist_statechart.Count_price");
}

void OMAnimatedPrice_list::cola_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pricelist_statechart.cola");
}

void OMAnimatedPrice_list::Change_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Pricelist_statechart.Change");
}
//#]

IMPLEMENT_REACTIVE_META_P(Price_list, Vending_Machine_ZT, Vending_Machine_ZT, false, OMAnimatedPrice_list)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Price_list.cpp
*********************************************************************/
