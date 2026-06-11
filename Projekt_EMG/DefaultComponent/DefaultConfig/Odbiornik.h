/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Odbiornik
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.h
*********************************************************************/

#ifndef Odbiornik_H
#define Odbiornik_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Odbiornik
class Odbiornik {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOdbiornik;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Odbiornik();
    
    //## auto_generated
    ~Odbiornik();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOdbiornik : virtual public AOMInstance {
    DECLARE_META(Odbiornik, OMAnimatedOdbiornik)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Odbiornik.h
*********************************************************************/
