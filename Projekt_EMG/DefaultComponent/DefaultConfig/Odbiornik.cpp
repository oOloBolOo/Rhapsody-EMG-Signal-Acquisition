/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Odbiornik
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Odbiornik.h"
//#[ ignore
#define Default_Odbiornik_Odbiornik_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Odbiornik
Odbiornik::Odbiornik() {
    NOTIFY_CONSTRUCTOR(Odbiornik, Odbiornik(), 0, Default_Odbiornik_Odbiornik_SERIALIZE);
}

Odbiornik::~Odbiornik() {
    NOTIFY_DESTRUCTOR(~Odbiornik, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Odbiornik, Default, Default, false, OMAnimatedOdbiornik)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.cpp
*********************************************************************/
