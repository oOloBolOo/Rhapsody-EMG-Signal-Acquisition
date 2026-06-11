/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Technik
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Technik.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Technik.h"
//#[ ignore
#define Default_Technik_Technik_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Technik
Technik::Technik() {
    NOTIFY_CONSTRUCTOR(Technik, Technik(), 0, Default_Technik_Technik_SERIALIZE);
}

Technik::~Technik() {
    NOTIFY_DESTRUCTOR(~Technik, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTechnik::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedOperator::serializeAttributes(aomsAttributes);
}

void OMAnimatedTechnik::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedOperator::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Technik, Default, false, Operator, OMAnimatedOperator, OMAnimatedTechnik)

OMINIT_SUPERCLASS(Operator, OMAnimatedOperator)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Technik.cpp
*********************************************************************/
