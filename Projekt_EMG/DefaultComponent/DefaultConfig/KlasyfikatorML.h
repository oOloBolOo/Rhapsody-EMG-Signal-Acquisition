/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: KlasyfikatorML
//!	Generated Date	: Sun, 21, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/KlasyfikatorML.h
*********************************************************************/

#ifndef KlasyfikatorML_H
#define KlasyfikatorML_H

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
//## package Default

//## class KlasyfikatorML
class KlasyfikatorML : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedKlasyfikatorML;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    KlasyfikatorML(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~KlasyfikatorML();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Oczekiwanie:
    //## statechart_method
    inline bool Oczekiwanie_IN() const;
    
    // AnalizaFFT:
    //## statechart_method
    inline bool AnalizaFFT_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum KlasyfikatorML_Enum {
        OMNonState = 0,
        Oczekiwanie = 1,
        AnalizaFFT = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedKlasyfikatorML : virtual public AOMInstance {
    DECLARE_REACTIVE_META(KlasyfikatorML, OMAnimatedKlasyfikatorML)
    
    ////    Framework operations    ////
    
public :

    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Oczekiwanie_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AnalizaFFT_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool KlasyfikatorML::rootState_IN() const {
    return true;
}

inline bool KlasyfikatorML::Oczekiwanie_IN() const {
    return rootState_subState == Oczekiwanie;
}

inline bool KlasyfikatorML::AnalizaFFT_IN() const {
    return rootState_subState == AnalizaFFT;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/KlasyfikatorML.h
*********************************************************************/
