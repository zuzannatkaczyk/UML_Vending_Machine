/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Vending_Machine
//!	Generated Date	: Fri, 14, Jun 2019  
	File Path	: DefaultComponent\DefaultConfig\Vending_Machine.h
*********************************************************************/

#ifndef Vending_Machine_H
#define Vending_Machine_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Vending_Machine_ZT.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## classInstance itsDisplay
#include "Display.h"
//## classInstance itsPrice_list
#include "Price_list.h"
//## package Vending_Machine_ZT

//## class Vending_Machine
class Vending_Machine : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedVending_Machine;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Vending_Machine(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Vending_Machine();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCoins() const;
    
    //## auto_generated
    void setCoins(int p_Coins);
    
    //## auto_generated
    int getCountCoins() const;
    
    //## auto_generated
    void setCountCoins(int p_countCoins);
    
    //## auto_generated
    Display* getItsDisplay() const;
    
    //## auto_generated
    Price_list* getItsPrice_list() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int Coins;		//## attribute Coins
    
    int countCoins;		//## attribute countCoins
    
    ////    Relations and components    ////
    
    Display itsDisplay;		//## classInstance itsDisplay
    
    Price_list itsPrice_list;		//## classInstance itsPrice_list
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void setActiveContext(IOxfActive* theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // VendingMachine_statechart:
    //## statechart_method
    inline bool VendingMachine_statechart_IN() const;
    
    //## statechart_method
    void VendingMachine_statechart_entDef();
    
    //## statechart_method
    void VendingMachine_statechart_exit();
    
    // Value:
    //## statechart_method
    inline bool Value_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Value_handleEvent();
    
    // Insert_coin:
    //## statechart_method
    inline bool Insert_coin_IN() const;
    
    // Giving_drink:
    //## statechart_method
    inline bool Giving_drink_IN() const;
    
    // Enough:
    //## statechart_method
    inline bool Enough_IN() const;
    
    // Check:
    //## statechart_method
    inline bool Check_IN() const;
    
    // Change:
    //## statechart_method
    inline bool Change_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Vending_Machine_Enum {
        OMNonState = 0,
        VendingMachine_statechart = 1,
        Value = 2,
        Insert_coin = 3,
        Giving_drink = 4,
        Enough = 5,
        Check = 6,
        Change = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int VendingMachine_statechart_subState;
    
    IOxfTimeout* VendingMachine_statechart_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedVending_Machine : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Vending_Machine, OMAnimatedVending_Machine)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void VendingMachine_statechart_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Value_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Insert_coin_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Giving_drink_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Enough_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Check_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Change_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Vending_Machine::rootState_IN() const {
    return true;
}

inline bool Vending_Machine::VendingMachine_statechart_IN() const {
    return rootState_subState == VendingMachine_statechart;
}

inline bool Vending_Machine::Value_IN() const {
    return VendingMachine_statechart_subState == Value;
}

inline bool Vending_Machine::Insert_coin_IN() const {
    return VendingMachine_statechart_subState == Insert_coin;
}

inline bool Vending_Machine::Giving_drink_IN() const {
    return VendingMachine_statechart_subState == Giving_drink;
}

inline bool Vending_Machine::Enough_IN() const {
    return VendingMachine_statechart_subState == Enough;
}

inline bool Vending_Machine::Check_IN() const {
    return VendingMachine_statechart_subState == Check;
}

inline bool Vending_Machine::Change_IN() const {
    return VendingMachine_statechart_subState == Change;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Vending_Machine.h
*********************************************************************/
