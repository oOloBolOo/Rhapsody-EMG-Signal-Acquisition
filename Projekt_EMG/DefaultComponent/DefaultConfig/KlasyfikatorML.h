/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: KlasyfikatorML
//!	Generated Date	: Thu, 11, Jun 2026  
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
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedKlasyfikatorML : virtual public AOMInstance {
    DECLARE_META(KlasyfikatorML, OMAnimatedKlasyfikatorML)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/KlasyfikatorML.h
*********************************************************************/
