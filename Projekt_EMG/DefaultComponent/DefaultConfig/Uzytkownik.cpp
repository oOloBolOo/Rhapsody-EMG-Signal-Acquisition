/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Uzytkownik
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Uzytkownik.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Uzytkownik.h"
//#[ ignore
#define Default_Uzytkownik_Uzytkownik_SERIALIZE OM_NO_OP
//#]

//## package Default

//## actor Uzytkownik
Uzytkownik::Uzytkownik() {
    NOTIFY_CONSTRUCTOR(Uzytkownik, Uzytkownik(), 0, Default_Uzytkownik_Uzytkownik_SERIALIZE);
}

Uzytkownik::~Uzytkownik() {
    NOTIFY_DESTRUCTOR(~Uzytkownik, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUzytkownik::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedOperator::serializeAttributes(aomsAttributes);
}

void OMAnimatedUzytkownik::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedOperator::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Uzytkownik, Default, false, Operator, OMAnimatedOperator, OMAnimatedUzytkownik)

OMINIT_SUPERCLASS(Operator, OMAnimatedOperator)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Uzytkownik.cpp
*********************************************************************/
