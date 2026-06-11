/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: KlasyfikatorML
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/KlasyfikatorML.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "KlasyfikatorML.h"
//#[ ignore
#define Default_KlasyfikatorML_KlasyfikatorML_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class KlasyfikatorML
KlasyfikatorML::KlasyfikatorML(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(KlasyfikatorML, KlasyfikatorML(), 0, Default_KlasyfikatorML_KlasyfikatorML_SERIALIZE);
    setActiveContext(theActiveContext, false);
}

KlasyfikatorML::~KlasyfikatorML() {
    NOTIFY_DESTRUCTOR(~KlasyfikatorML, true);
}

bool KlasyfikatorML::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
IMPLEMENT_REACTIVE_META_SIMPLE_P(KlasyfikatorML, Default, Default, false, OMAnimatedKlasyfikatorML)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/KlasyfikatorML.cpp
*********************************************************************/
