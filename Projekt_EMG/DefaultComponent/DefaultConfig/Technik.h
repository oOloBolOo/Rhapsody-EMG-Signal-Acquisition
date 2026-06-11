/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Technik
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Technik.h
*********************************************************************/

#ifndef Technik_H
#define Technik_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## actor Technik
#include "Operator.h"
//## package Default

//## actor Technik
class Technik : public Operator {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTechnik;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Technik();
    
    //## auto_generated
    ~Technik();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTechnik : public OMAnimatedOperator {
    DECLARE_META(Technik, OMAnimatedTechnik)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Technik.h
*********************************************************************/
