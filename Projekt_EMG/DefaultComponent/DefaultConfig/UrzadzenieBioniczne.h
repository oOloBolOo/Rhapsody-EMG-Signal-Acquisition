/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UrzadzenieBioniczne
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/UrzadzenieBioniczne.h
*********************************************************************/

#ifndef UrzadzenieBioniczne_H
#define UrzadzenieBioniczne_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## actor UrzadzenieBioniczne
class UrzadzenieBioniczne {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUrzadzenieBioniczne;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UrzadzenieBioniczne();
    
    //## auto_generated
    ~UrzadzenieBioniczne();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUrzadzenieBioniczne : virtual public AOMInstance {
    DECLARE_META(UrzadzenieBioniczne, OMAnimatedUrzadzenieBioniczne)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/UrzadzenieBioniczne.h
*********************************************************************/
