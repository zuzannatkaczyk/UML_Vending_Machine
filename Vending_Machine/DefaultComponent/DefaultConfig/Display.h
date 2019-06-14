/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Fri, 14, Jun 2019  
	File Path	: DefaultComponent\DefaultConfig\Display.h
*********************************************************************/

#ifndef Display_H
#define Display_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Vending_Machine_ZT.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\omthread.h>
//## link itsVending_Machine
class Vending_Machine;

//## package Vending_Machine_ZT

//## class Display
class Display : public OMReactive {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDisplay;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Display(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Display();
    
    ////    Operations    ////
    
    //## operation setPrintMessage()
    void setPrintMessage();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMString getText() const;
    
    //## auto_generated
    void setText(OMString p_Text);
    
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
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    OMString Text;		//## attribute Text
    
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
    
    ////    Framework    ////
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Display_statechart:
    //## statechart_method
    inline bool Display_statechart_IN() const;
    
    //## statechart_method
    void Display_statechart_entDef();
    
    // Start:
    //## statechart_method
    inline bool Start_IN() const;
    
    // Pay:
    //## statechart_method
    inline bool Pay_IN() const;
    
    // Change:
    //## statechart_method
    inline bool Change_IN() const;

protected :

//#[ ignore
    enum Display_Enum {
        OMNonState = 0,
        Display_statechart = 1,
        Start = 2,
        Pay = 3,
        Change = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int Display_statechart_subState;
    
    IOxfTimeout* Display_statechart_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDisplay : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Display, OMAnimatedDisplay)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Display_statechart_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Start_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Pay_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Change_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Display::rootState_IN() const {
    return true;
}

inline bool Display::Display_statechart_IN() const {
    return rootState_subState == Display_statechart;
}

inline bool Display::Start_IN() const {
    return Display_statechart_subState == Start;
}

inline bool Display::Pay_IN() const {
    return Display_statechart_subState == Pay;
}

inline bool Display::Change_IN() const {
    return Display_statechart_subState == Change;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Display.h
*********************************************************************/
