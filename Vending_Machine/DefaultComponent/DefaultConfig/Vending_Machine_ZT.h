/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Vending_Machine_ZT
//!	Generated Date	: Fri, 14, Jun 2019  
	File Path	: DefaultComponent\DefaultConfig\Vending_Machine_ZT.h
*********************************************************************/

#ifndef Vending_Machine_ZT_H
#define Vending_Machine_ZT_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class Display;

//## auto_generated
class Price_list;

//## classInstance itsVending_Machine
class Vending_Machine;

//#[ ignore
#define evPay_Vending_Machine_ZT_id 23001

#define evPaid_Vending_Machine_ZT_id 23002

#define evChange_Vending_Machine_ZT_id 23003

#define evSelect_opt3_Vending_Machine_ZT_id 23004

#define evSelect_opt2_Vending_Machine_ZT_id 23005

#define evSelect_opt1_Vending_Machine_ZT_id 23006
//#]

//## package Vending_Machine_ZT


//## classInstance itsVending_Machine
extern Vending_Machine itsVending_Machine;

//## auto_generated
void Vending_Machine_ZT_initRelations();

//## auto_generated
bool Vending_Machine_ZT_startBehavior();

//#[ ignore
class Vending_Machine_ZT_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Vending_Machine_ZT_OMInitializer();
    
    //## auto_generated
    ~Vending_Machine_ZT_OMInitializer();
};
//#]

//## event evPay()
class evPay : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPay;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPay();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPay : virtual public AOMEvent {
    DECLARE_META_EVENT(evPay)
};
//#]
#endif // _OMINSTRUMENT

//## event evPaid()
class evPaid : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevPaid;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evPaid();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevPaid : virtual public AOMEvent {
    DECLARE_META_EVENT(evPaid)
};
//#]
#endif // _OMINSTRUMENT

//## event evChange()
class evChange : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevChange;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evChange();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevChange : virtual public AOMEvent {
    DECLARE_META_EVENT(evChange)
};
//#]
#endif // _OMINSTRUMENT

//## event evSelect_opt3()
class evSelect_opt3 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSelect_opt3;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSelect_opt3();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSelect_opt3 : virtual public AOMEvent {
    DECLARE_META_EVENT(evSelect_opt3)
};
//#]
#endif // _OMINSTRUMENT

//## event evSelect_opt2()
class evSelect_opt2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSelect_opt2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSelect_opt2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSelect_opt2 : virtual public AOMEvent {
    DECLARE_META_EVENT(evSelect_opt2)
};
//#]
#endif // _OMINSTRUMENT

//## event evSelect_opt1()
class evSelect_opt1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSelect_opt1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSelect_opt1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSelect_opt1 : virtual public AOMEvent {
    DECLARE_META_EVENT(evSelect_opt1)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Vending_Machine_ZT.h
*********************************************************************/
