/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Price_list
//!	Generated Date	: Fri, 14, Jun 2019  
	File Path	: DefaultComponent\DefaultConfig\Price_list.h
*********************************************************************/

#ifndef Price_list_H
#define Price_list_H

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
//## link itsVending_Machine
class Vending_Machine;

//## package Vending_Machine_ZT

//## class Price_list
class Price_list : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPrice_list;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Price_list(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Price_list();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getDrink_price() const;
    
    //## auto_generated
    void setDrink_price(int p_Drink_price);
    
    //## auto_generated
    int getPrice() const;
    
    //## auto_generated
    void setPrice(int p_Price);
    
    //## auto_generated
    Vending_Machine* getItsVending_Machine() const;
    
    //## auto_generated
    void setItsVending_Machine(Vending_Machine* p_Vending_Machine);
    
    //## auto_generated
    Vending_Machine* getItsVending_Machine_1() const;
    
    //## auto_generated
    void setItsVending_Machine_1(Vending_Machine* p_Vending_Machine);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Drink_price;		//## attribute Drink_price
    
    int Price;		//## attribute Price
    
    ////    Relations and components    ////
    
    Vending_Machine* itsVending_Machine;		//## link itsVending_Machine
    
    Vending_Machine* itsVending_Machine_1;		//## link itsVending_Machine_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsVending_Machine(Vending_Machine* p_Vending_Machine);
    
    //## auto_generated
    void _setItsVending_Machine(Vending_Machine* p_Vending_Machine);
    
    //## auto_generated
    void _clearItsVending_Machine();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Pricelist_statechart:
    //## statechart_method
    inline bool Pricelist_statechart_IN() const;
    
    //## statechart_method
    void Pricelist_statechart_entDef();
    
    //## statechart_method
    void Pricelist_statechart_exit();
    
    // woda:
    //## statechart_method
    inline bool woda_IN() const;
    
    // sok:
    //## statechart_method
    inline bool sok_IN() const;
    
    // Reset_counter:
    //## statechart_method
    inline bool Reset_counter_IN() const;
    
    // Pay:
    //## statechart_method
    inline bool Pay_IN() const;
    
    // Count_price:
    //## statechart_method
    inline bool Count_price_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Count_price_handleEvent();
    
    // cola:
    //## statechart_method
    inline bool cola_IN() const;
    
    // Change:
    //## statechart_method
    inline bool Change_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Price_list_Enum {
        OMNonState = 0,
        Pricelist_statechart = 1,
        woda = 2,
        sok = 3,
        Reset_counter = 4,
        Pay = 5,
        Count_price = 6,
        cola = 7,
        Change = 8
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int Pricelist_statechart_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPrice_list : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Price_list, OMAnimatedPrice_list)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Pricelist_statechart_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void woda_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sok_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Reset_counter_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Pay_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Count_price_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void cola_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Change_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Price_list::rootState_IN() const {
    return true;
}

inline bool Price_list::Pricelist_statechart_IN() const {
    return rootState_subState == Pricelist_statechart;
}

inline bool Price_list::woda_IN() const {
    return Pricelist_statechart_subState == woda;
}

inline bool Price_list::sok_IN() const {
    return Pricelist_statechart_subState == sok;
}

inline bool Price_list::Reset_counter_IN() const {
    return Pricelist_statechart_subState == Reset_counter;
}

inline bool Price_list::Pay_IN() const {
    return Pricelist_statechart_subState == Pay;
}

inline bool Price_list::Count_price_IN() const {
    return Pricelist_statechart_subState == Count_price;
}

inline bool Price_list::cola_IN() const {
    return Pricelist_statechart_subState == cola;
}

inline bool Price_list::Change_IN() const {
    return Pricelist_statechart_subState == Change;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Price_list.h
*********************************************************************/
