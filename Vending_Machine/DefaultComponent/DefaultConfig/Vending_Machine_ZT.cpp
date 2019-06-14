/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Vending_Machine_ZT
//!	Generated Date	: Fri, 14, Jun 2019  
	File Path	: DefaultComponent\DefaultConfig\Vending_Machine_ZT.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Vending_Machine_ZT.h"
//## classInstance itsVending_Machine
#include "Vending_Machine.h"
//## auto_generated
#include "Display.h"
//## auto_generated
#include "Price_list.h"
//#[ ignore
#define evPay_SERIALIZE OM_NO_OP

#define evPay_UNSERIALIZE OM_NO_OP

#define evPay_CONSTRUCTOR evPay()

#define evPaid_SERIALIZE OM_NO_OP

#define evPaid_UNSERIALIZE OM_NO_OP

#define evPaid_CONSTRUCTOR evPaid()

#define evChange_SERIALIZE OM_NO_OP

#define evChange_UNSERIALIZE OM_NO_OP

#define evChange_CONSTRUCTOR evChange()

#define evSelect_opt3_SERIALIZE OM_NO_OP

#define evSelect_opt3_UNSERIALIZE OM_NO_OP

#define evSelect_opt3_CONSTRUCTOR evSelect_opt3()

#define evSelect_opt2_SERIALIZE OM_NO_OP

#define evSelect_opt2_UNSERIALIZE OM_NO_OP

#define evSelect_opt2_CONSTRUCTOR evSelect_opt2()

#define evSelect_opt1_SERIALIZE OM_NO_OP

#define evSelect_opt1_UNSERIALIZE OM_NO_OP

#define evSelect_opt1_CONSTRUCTOR evSelect_opt1()
//#]

//## package Vending_Machine_ZT


//## classInstance itsVending_Machine
Vending_Machine itsVending_Machine;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Vending_Machine_ZT, Vending_Machine_ZT)
#endif // _OMINSTRUMENT

void Vending_Machine_ZT_initRelations() {
    {
        {
            itsVending_Machine.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Vending_Machine_ZT_startBehavior() {
    bool done = true;
    done &= itsVending_Machine.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&itsVending_Machine, Vending_Machine, "itsVending_Machine", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Vending_Machine_ZT_OMInitializer::Vending_Machine_ZT_OMInitializer() {
    Vending_Machine_ZT_initRelations();
    Vending_Machine_ZT_startBehavior();
}

Vending_Machine_ZT_OMInitializer::~Vending_Machine_ZT_OMInitializer() {
}
//#]

//## event evPay()
evPay::evPay() {
    NOTIFY_EVENT_CONSTRUCTOR(evPay)
    setId(evPay_Vending_Machine_ZT_id);
}

bool evPay::isTypeOf(const short id) const {
    return (evPay_Vending_Machine_ZT_id==id);
}

IMPLEMENT_META_EVENT_P(evPay, Vending_Machine_ZT, Vending_Machine_ZT, evPay())

//## event evPaid()
evPaid::evPaid() {
    NOTIFY_EVENT_CONSTRUCTOR(evPaid)
    setId(evPaid_Vending_Machine_ZT_id);
}

bool evPaid::isTypeOf(const short id) const {
    return (evPaid_Vending_Machine_ZT_id==id);
}

IMPLEMENT_META_EVENT_P(evPaid, Vending_Machine_ZT, Vending_Machine_ZT, evPaid())

//## event evChange()
evChange::evChange() {
    NOTIFY_EVENT_CONSTRUCTOR(evChange)
    setId(evChange_Vending_Machine_ZT_id);
}

bool evChange::isTypeOf(const short id) const {
    return (evChange_Vending_Machine_ZT_id==id);
}

IMPLEMENT_META_EVENT_P(evChange, Vending_Machine_ZT, Vending_Machine_ZT, evChange())

//## event evSelect_opt3()
evSelect_opt3::evSelect_opt3() {
    NOTIFY_EVENT_CONSTRUCTOR(evSelect_opt3)
    setId(evSelect_opt3_Vending_Machine_ZT_id);
}

bool evSelect_opt3::isTypeOf(const short id) const {
    return (evSelect_opt3_Vending_Machine_ZT_id==id);
}

IMPLEMENT_META_EVENT_P(evSelect_opt3, Vending_Machine_ZT, Vending_Machine_ZT, evSelect_opt3())

//## event evSelect_opt2()
evSelect_opt2::evSelect_opt2() {
    NOTIFY_EVENT_CONSTRUCTOR(evSelect_opt2)
    setId(evSelect_opt2_Vending_Machine_ZT_id);
}

bool evSelect_opt2::isTypeOf(const short id) const {
    return (evSelect_opt2_Vending_Machine_ZT_id==id);
}

IMPLEMENT_META_EVENT_P(evSelect_opt2, Vending_Machine_ZT, Vending_Machine_ZT, evSelect_opt2())

//## event evSelect_opt1()
evSelect_opt1::evSelect_opt1() {
    NOTIFY_EVENT_CONSTRUCTOR(evSelect_opt1)
    setId(evSelect_opt1_Vending_Machine_ZT_id);
}

bool evSelect_opt1::isTypeOf(const short id) const {
    return (evSelect_opt1_Vending_Machine_ZT_id==id);
}

IMPLEMENT_META_EVENT_P(evSelect_opt1, Vending_Machine_ZT, Vending_Machine_ZT, evSelect_opt1())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Vending_Machine_ZT.cpp
*********************************************************************/
