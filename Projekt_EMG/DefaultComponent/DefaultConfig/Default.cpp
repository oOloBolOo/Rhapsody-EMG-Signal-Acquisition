/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Thu, 11, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "KlasyfikatorML.h"
//## auto_generated
#include "Odbiornik.h"
//## auto_generated
#include "Sterownik.h"
//#[ ignore
#define evSkurczMiesnia_SERIALIZE OM_NO_OP

#define evSkurczMiesnia_UNSERIALIZE OM_NO_OP

#define evSkurczMiesnia_CONSTRUCTOR evSkurczMiesnia()

#define filtrujSygnal_SERIALIZE OM_NO_OP

#define filtrujSygnal_UNSERIALIZE OM_NO_OP

#define filtrujSygnal_CONSTRUCTOR filtrujSygnal()

#define eventmessage_0_SERIALIZE OM_NO_OP

#define eventmessage_0_UNSERIALIZE OM_NO_OP

#define eventmessage_0_CONSTRUCTOR eventmessage_0()

#define evAnalizujWidmo_SERIALIZE OM_NO_OP

#define evAnalizujWidmo_UNSERIALIZE OM_NO_OP

#define evAnalizujWidmo_CONSTRUCTOR evAnalizujWidmo()

#define evAktywuj_SERIALIZE OM_NO_OP

#define evAktywuj_UNSERIALIZE OM_NO_OP

#define evAktywuj_CONSTRUCTOR evAktywuj()

#define evUspij_SERIALIZE OM_NO_OP

#define evUspij_UNSERIALIZE OM_NO_OP

#define evUspij_CONSTRUCTOR evUspij()

#define evRozpocznijKalibracje_SERIALIZE OM_NO_OP

#define evRozpocznijKalibracje_UNSERIALIZE OM_NO_OP

#define evRozpocznijKalibracje_CONSTRUCTOR evRozpocznijKalibracje()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evSkurczMiesnia()
evSkurczMiesnia::evSkurczMiesnia() {
    NOTIFY_EVENT_CONSTRUCTOR(evSkurczMiesnia)
    setId(evSkurczMiesnia_Default_id);
}

bool evSkurczMiesnia::isTypeOf(const short id) const {
    return (evSkurczMiesnia_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evSkurczMiesnia, Default, Default, evSkurczMiesnia())

//## event filtrujSygnal()
filtrujSygnal::filtrujSygnal() {
    NOTIFY_EVENT_CONSTRUCTOR(filtrujSygnal)
    setId(filtrujSygnal_Default_id);
}

bool filtrujSygnal::isTypeOf(const short id) const {
    return (filtrujSygnal_Default_id==id);
}

IMPLEMENT_META_EVENT_P(filtrujSygnal, Default, Default, filtrujSygnal())

//## event eventmessage_0()
eventmessage_0::eventmessage_0() {
    NOTIFY_EVENT_CONSTRUCTOR(eventmessage_0)
    setId(eventmessage_0_Default_id);
}

bool eventmessage_0::isTypeOf(const short id) const {
    return (eventmessage_0_Default_id==id);
}

IMPLEMENT_META_EVENT_P(eventmessage_0, Default, Default, eventmessage_0())

//## event evAnalizujWidmo()
evAnalizujWidmo::evAnalizujWidmo() {
    NOTIFY_EVENT_CONSTRUCTOR(evAnalizujWidmo)
    setId(evAnalizujWidmo_Default_id);
}

bool evAnalizujWidmo::isTypeOf(const short id) const {
    return (evAnalizujWidmo_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evAnalizujWidmo, Default, Default, evAnalizujWidmo())

//## event evAktywuj()
evAktywuj::evAktywuj() {
    NOTIFY_EVENT_CONSTRUCTOR(evAktywuj)
    setId(evAktywuj_Default_id);
}

bool evAktywuj::isTypeOf(const short id) const {
    return (evAktywuj_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evAktywuj, Default, Default, evAktywuj())

//## event evUspij()
evUspij::evUspij() {
    NOTIFY_EVENT_CONSTRUCTOR(evUspij)
    setId(evUspij_Default_id);
}

bool evUspij::isTypeOf(const short id) const {
    return (evUspij_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evUspij, Default, Default, evUspij())

//## event evRozpocznijKalibracje()
evRozpocznijKalibracje::evRozpocznijKalibracje() {
    NOTIFY_EVENT_CONSTRUCTOR(evRozpocznijKalibracje)
    setId(evRozpocznijKalibracje_Default_id);
}

bool evRozpocznijKalibracje::isTypeOf(const short id) const {
    return (evRozpocznijKalibracje_Default_id==id);
}

IMPLEMENT_META_EVENT_P(evRozpocznijKalibracje, Default, Default, evRozpocznijKalibracje())

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Default.cpp
*********************************************************************/
