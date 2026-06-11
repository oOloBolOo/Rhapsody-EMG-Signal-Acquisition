/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Uzytkownik
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Uzytkownik.h
*********************************************************************/

#ifndef Uzytkownik_H
#define Uzytkownik_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## actor Uzytkownik
#include "Operator.h"
//## package Default

//## actor Uzytkownik
class Uzytkownik : public Operator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUzytkownik;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Uzytkownik();
    
    //## auto_generated
    ~Uzytkownik();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUzytkownik : public OMAnimatedOperator {
    DECLARE_META(Uzytkownik, OMAnimatedUzytkownik)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Uzytkownik.h
*********************************************************************/
