/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sterownik
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Sterownik.h
*********************************************************************/

#ifndef Sterownik_H
#define Sterownik_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## classInstance itsKlasyfikator
#include "KlasyfikatorML.h"
//## classInstance itsOdbiornik
#include "Odbiornik.h"
//## package Default

//## class Sterownik
class Sterownik : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSterownik;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sterownik(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Sterownik();
    
    ////    Additional operations    ////
    
    //## auto_generated
    StanyGestu getAktualnyGest() const;
    
    //## auto_generated
    void setAktualnyGest(StanyGestu p_aktualnyGest);
    
    //## auto_generated
    KlasyfikatorML* getItsKlasyfikator() const;
    
    //## auto_generated
    Odbiornik* getItsOdbiornik() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    StanyGestu aktualnyGest;		//## attribute aktualnyGest
    
    ////    Relations and components    ////
    
    KlasyfikatorML itsKlasyfikator;		//## classInstance itsKlasyfikator
    
    Odbiornik itsOdbiornik;		//## classInstance itsOdbiornik
    
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
    
    // Uspiony:
    //## statechart_method
    inline bool Uspiony_IN() const;
    
    // Kalibracja:
    //## statechart_method
    inline bool Kalibracja_IN() const;
    
    // Aktywny:
    //## statechart_method
    inline bool Aktywny_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Sterownik_Enum {
        OMNonState = 0,
        Uspiony = 1,
        Kalibracja = 2,
        Aktywny = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSterownik : virtual public AOMInstance {
    DECLARE_REACTIVE_META(Sterownik, OMAnimatedSterownik)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Uspiony_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Kalibracja_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Aktywny_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool Sterownik::rootState_IN() const {
    return true;
}

inline bool Sterownik::Uspiony_IN() const {
    return rootState_subState == Uspiony;
}

inline bool Sterownik::Kalibracja_IN() const {
    return rootState_subState == Kalibracja;
}

inline bool Sterownik::Aktywny_IN() const {
    return rootState_subState == Aktywny;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Sterownik.h
*********************************************************************/
