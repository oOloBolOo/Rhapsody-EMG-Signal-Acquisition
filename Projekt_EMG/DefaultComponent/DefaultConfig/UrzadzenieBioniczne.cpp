/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UrzadzenieBioniczne
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/UrzadzenieBioniczne.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UrzadzenieBioniczne.h"
//#[ ignore
#define Default_UrzadzenieBioniczne_UrzadzenieBioniczne_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor UrzadzenieBioniczne
UrzadzenieBioniczne::UrzadzenieBioniczne() {
    NOTIFY_CONSTRUCTOR(UrzadzenieBioniczne, UrzadzenieBioniczne(), 0, Default_UrzadzenieBioniczne_UrzadzenieBioniczne_SERIALIZE);
}

UrzadzenieBioniczne::~UrzadzenieBioniczne() {
    NOTIFY_DESTRUCTOR(~UrzadzenieBioniczne, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUrzadzenieBioniczne::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(UrzadzenieBioniczne, Default, Default, false, OMAnimatedUrzadzenieBioniczne)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/UrzadzenieBioniczne.cpp
*********************************************************************/
