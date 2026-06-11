/*********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <aom/aom.h>
//## auto_generated
#include <oxf/event.h>
//## auto_generated
class KlasyfikatorML;

//## auto_generated
class Odbiornik;

//## auto_generated
class Sterownik;

//#[ ignore
#define evSkurczMiesnia_Default_id 18601

#define filtrujSygnal_Default_id 18602

#define eventmessage_0_Default_id 18603

#define evAnalizujWidmo_Default_id 18604

#define evAktywuj_Default_id 18605

#define evUspij_Default_id 18606

#define evRozpocznijKalibracje_Default_id 18607
//#]

//## package Default


//## type StanyGestu
enum StanyGestu {
    BRAK = 0,
    CHWYT_PESETOWY = 1,
    CHWYT_CYLINDRYCZNY = 2
};

//## event evSkurczMiesnia()
class evSkurczMiesnia : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSkurczMiesnia;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSkurczMiesnia();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSkurczMiesnia : virtual public AOMEvent {
    DECLARE_META_EVENT(evSkurczMiesnia)
};
//#]
#endif // _OMINSTRUMENT

//## event filtrujSygnal()
class filtrujSygnal : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedfiltrujSygnal;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    filtrujSygnal();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedfiltrujSygnal : virtual public AOMEvent {
    DECLARE_META_EVENT(filtrujSygnal)
};
//#]
#endif // _OMINSTRUMENT

//## event eventmessage_0()
class eventmessage_0 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedeventmessage_0;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    eventmessage_0();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedeventmessage_0 : virtual public AOMEvent {
    DECLARE_META_EVENT(eventmessage_0)
};
//#]
#endif // _OMINSTRUMENT

//## event evAnalizujWidmo()
class evAnalizujWidmo : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAnalizujWidmo;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAnalizujWidmo();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAnalizujWidmo : virtual public AOMEvent {
    DECLARE_META_EVENT(evAnalizujWidmo)
};
//#]
#endif // _OMINSTRUMENT

//## event evAktywuj()
class evAktywuj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevAktywuj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evAktywuj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevAktywuj : virtual public AOMEvent {
    DECLARE_META_EVENT(evAktywuj)
};
//#]
#endif // _OMINSTRUMENT

//## event evUspij()
class evUspij : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevUspij;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evUspij();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevUspij : virtual public AOMEvent {
    DECLARE_META_EVENT(evUspij)
};
//#]
#endif // _OMINSTRUMENT

//## event evRozpocznijKalibracje()
class evRozpocznijKalibracje : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRozpocznijKalibracje;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRozpocznijKalibracje();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRozpocznijKalibracje : virtual public AOMEvent {
    DECLARE_META_EVENT(evRozpocznijKalibracje)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.h
*********************************************************************/
