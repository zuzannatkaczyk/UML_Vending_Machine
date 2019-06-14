/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Fri, 14, Jun 2019  
	File Path	: DefaultComponent\DefaultConfig\Display.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Display.h"
//## link itsVending_Machine
#include "Vending_Machine.h"
//#[ ignore
#define Vending_Machine_ZT_Display_Display_SERIALIZE OM_NO_OP

#define Vending_Machine_ZT_Display_setPrintMessage_SERIALIZE OM_NO_OP
//#]

//## package Vending_Machine_ZT

//## class Display
Display::Display(IOxfActive* theActiveContext) : Text("Wybierz napoj") {
    NOTIFY_REACTIVE_CONSTRUCTOR(Display, Display(), 0, Vending_Machine_ZT_Display_Display_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsVending_Machine = NULL;
    itsVending_Machine_1 = NULL;
    initStatechart();
}

Display::~Display() {
    NOTIFY_DESTRUCTOR(~Display, true);
    cleanUpRelations();
    cancelTimeouts();
}

void Display::setPrintMessage() {
    NOTIFY_OPERATION(setPrintMessage, setPrintMessage(), 0, Vending_Machine_ZT_Display_setPrintMessage_SERIALIZE);
    //#[ operation setPrintMessage()
    Text="Wydawanie napoju..." ;
    //#]
}

OMString Display::getText() const {
    return Text;
}

void Display::setText(OMString p_Text) {
    Text = p_Text;
    NOTIFY_SET_OPERATION;
}

Vending_Machine* Display::getItsVending_Machine() const {
    return itsVending_Machine;
}

void Display::setItsVending_Machine(Vending_Machine* p_Vending_Machine) {
    _setItsVending_Machine(p_Vending_Machine);
}

Vending_Machine* Display::getItsVending_Machine_1() const {
    return itsVending_Machine_1;
}

void Display::setItsVending_Machine_1(Vending_Machine* p_Vending_Machine) {
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

bool Display::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Display::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Display_statechart_subState = OMNonState;
    Display_statechart_timeout = NULL;
}

void Display::cleanUpRelations() {
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

void Display::cancelTimeouts() {
    cancel(Display_statechart_timeout);
}

bool Display::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(Display_statechart_timeout == arg)
        {
            Display_statechart_timeout = NULL;
            res = true;
        }
    return res;
}

void Display::__setItsVending_Machine(Vending_Machine* p_Vending_Machine) {
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

void Display::_setItsVending_Machine(Vending_Machine* p_Vending_Machine) {
    __setItsVending_Machine(p_Vending_Machine);
}

void Display::_clearItsVending_Machine() {
    NOTIFY_RELATION_CLEARED("itsVending_Machine");
    itsVending_Machine = NULL;
}

void Display::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        Display_statechart_entDef();
    }
}

IOxfReactive::TakeEventStatus Display::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Start
        case Start:
        {
            if(IS_EVENT_TYPE_OF(evPay_Vending_Machine_ZT_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    NOTIFY_STATE_EXITED("ROOT.Display_statechart.Start");
                    NOTIFY_STATE_ENTERED("ROOT.Display_statechart.Pay");
                    Display_statechart_subState = Pay;
                    rootState_active = Pay;
                    //#[ state Display_statechart.Pay.(Entry) 
                     Text="Wrzuc monety";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Pay
        case Pay:
        {
            if(IS_EVENT_TYPE_OF(evPaid_Vending_Machine_ZT_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Display_statechart.Pay");
                    NOTIFY_STATE_ENTERED("ROOT.Display_statechart.Start");
                    Display_statechart_subState = Start;
                    rootState_active = Start;
                    //#[ state Display_statechart.Start.(Entry) 
                            Text="Wybierz napoj";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evChange_Vending_Machine_ZT_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Display_statechart.Pay");
                    NOTIFY_STATE_ENTERED("ROOT.Display_statechart.Change");
                    Display_statechart_subState = Change;
                    rootState_active = Change;
                    //#[ state Display_statechart.Change.(Entry) 
                       Text="Wydawanie reszty";
                    //#]
                    Display_statechart_timeout = scheduleTimeout(2000, "ROOT.Display_statechart.Change");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Change
        case Change:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == Display_statechart_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(Display_statechart_timeout);
                            NOTIFY_STATE_EXITED("ROOT.Display_statechart.Change");
                            NOTIFY_STATE_ENTERED("ROOT.Display_statechart.Start");
                            Display_statechart_subState = Start;
                            rootState_active = Start;
                            //#[ state Display_statechart.Start.(Entry) 
                                    Text="Wybierz napoj";
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
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

void Display::Display_statechart_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Display_statechart");
    rootState_subState = Display_statechart;
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.Display_statechart.Start");
    Display_statechart_subState = Start;
    rootState_active = Start;
    //#[ state Display_statechart.Start.(Entry) 
            Text="Wybierz napoj";
    //#]
    NOTIFY_TRANSITION_TERMINATED("4");
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDisplay::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Text", x2String(myReal->Text));
}

void OMAnimatedDisplay::serializeRelations(AOMSRelations* aomsRelations) const {
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

void OMAnimatedDisplay::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Display::Display_statechart)
        {
            Display_statechart_serializeStates(aomsState);
        }
}

void OMAnimatedDisplay::Display_statechart_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Display_statechart");
    switch (myReal->Display_statechart_subState) {
        case Display::Start:
        {
            Start_serializeStates(aomsState);
        }
        break;
        case Display::Pay:
        {
            Pay_serializeStates(aomsState);
        }
        break;
        case Display::Change:
        {
            Change_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedDisplay::Start_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Display_statechart.Start");
}

void OMAnimatedDisplay::Pay_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Display_statechart.Pay");
}

void OMAnimatedDisplay::Change_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Display_statechart.Change");
}
//#]

IMPLEMENT_REACTIVE_META_P(Display, Vending_Machine_ZT, Vending_Machine_ZT, false, OMAnimatedDisplay)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Display.cpp
*********************************************************************/
