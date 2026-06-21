/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sterownik
//!	Generated Date	: Sun, 21, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/Sterownik.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Sterownik.h"
//#[ ignore
#define Default_Sterownik_Sterownik_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Sterownik
Sterownik::Sterownik(IOxfActive* theActiveContext) : aktualnyGest(BRAK) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Sterownik, Sterownik(), 0, Default_Sterownik_Sterownik_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsKlasyfikator.setShouldDelete(false);
        }
    }
    initStatechart();
}

Sterownik::~Sterownik() {
    NOTIFY_DESTRUCTOR(~Sterownik, true);
}

StanyGestu Sterownik::getAktualnyGest() const {
    return aktualnyGest;
}

void Sterownik::setAktualnyGest(StanyGestu p_aktualnyGest) {
    aktualnyGest = p_aktualnyGest;
}

KlasyfikatorML* Sterownik::getItsKlasyfikator() const {
    return (KlasyfikatorML*) &itsKlasyfikator;
}

Odbiornik* Sterownik::getItsOdbiornik() const {
    return (Odbiornik*) &itsOdbiornik;
}

bool Sterownik::startBehavior() {
    bool done = true;
    done &= itsKlasyfikator.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void Sterownik::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Sterownik::setActiveContext(IOxfActive* theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsKlasyfikator.setActiveContext(theActiveContext, false);
    }
}

void Sterownik::destroy() {
    itsKlasyfikator.destroy();
    OMReactive::destroy();
}

void Sterownik::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Uspiony");
        rootState_subState = Uspiony;
        rootState_active = Uspiony;
        //#[ state Uspiony.(Entry) 
        std::cout << "Uspienie" << std::endl;
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Sterownik::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Uspiony
        case Uspiony:
        {
            if(IS_EVENT_TYPE_OF(evAktywuj_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    //#[ state Uspiony.(Exit) 
                    std::cout << "Wake up" << std::endl;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Uspiony");
                    NOTIFY_STATE_ENTERED("ROOT.Aktywny");
                    rootState_subState = Aktywny;
                    rootState_active = Aktywny;
                    //#[ state Aktywny.(Entry) 
                    std::cout << "\n=== [STEROWNIK sEMG] ===" << std::endl;
                    std::cout << "[INIT] Przejœcie w tryb AKTYWNY." << std::endl;
                    std::cout << "[HARDWARE] Konfiguracja przetwornika ADC na g³ównym interfejsie (RPi 5)..." << std::endl;
                    std::cout << "[MEM] Alokacja buforów pamiêci dla okna czasowego sygna³u." << std::endl;
                    
                    // Resetowanie aktualnego gestu zabezpieczaj¹ce przed b³êdami pamiêci
                    this->aktualnyGest = BRAK; 
                    
                    std::cout << "[SYS] Bufory wyczyszczone. Nas³uchiwanie na aktywnoœæ elektrod..." << std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Aktywny
        case Aktywny:
        {
            if(IS_EVENT_TYPE_OF(evUspij_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Aktywny");
                    NOTIFY_STATE_ENTERED("ROOT.Uspiony");
                    rootState_subState = Uspiony;
                    rootState_active = Uspiony;
                    //#[ state Uspiony.(Entry) 
                    std::cout << "Uspienie" << std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evSkurczMiesnia_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.Aktywny");
                    //#[ transition 5 
                    itsKlasyfikator.GEN(evAnalizujWidmo());
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Aktywny");
                    rootState_subState = Aktywny;
                    rootState_active = Aktywny;
                    //#[ state Aktywny.(Entry) 
                    std::cout << "\n=== [STEROWNIK sEMG] ===" << std::endl;
                    std::cout << "[INIT] Przejœcie w tryb AKTYWNY." << std::endl;
                    std::cout << "[HARDWARE] Konfiguracja przetwornika ADC na g³ównym interfejsie (RPi 5)..." << std::endl;
                    std::cout << "[MEM] Alokacja buforów pamiêci dla okna czasowego sygna³u." << std::endl;
                    
                    // Resetowanie aktualnego gestu zabezpieczaj¹ce przed b³êdami pamiêci
                    this->aktualnyGest = BRAK; 
                    
                    std::cout << "[SYS] Bufory wyczyszczone. Nas³uchiwanie na aktywnoœæ elektrod..." << std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evRozpocznijKalibracje_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.Aktywny");
                    NOTIFY_STATE_ENTERED("ROOT.Kalibracja");
                    pushNullTransition();
                    rootState_subState = Kalibracja;
                    rootState_active = Kalibracja;
                    //#[ state Kalibracja.(Entry) 
                    std::cout << "\n=== [MODUL KALIBRACJI sEMG] ===" << std::endl;
                    std::cout << "[CALIB] Rozpoczecie procedury profilowania elektrod." << std::endl;
                    
                    // Symulacja pomiaru szumu bazowego (spoczynkowego)
                    std::cout << "[CALIB] Faza 1: Akwizycja szumu spoczynkowego (Relaxation Phase)..." << std::endl;
                    int baselineNoise = (rand() % 40) + 15;
                    std::cout << "[CALIB] Wyznaczony poziom szumu: " << baselineNoise << " uV." << std::endl;
                    
                    // Symulacja pomiaru maksymalnego skurczu (MVC)
                    std::cout << "[CALIB] Faza 2: Akwizycja maksymalnego skurczu (MVC Phase)..." << std::endl;
                    int maxContraction = (rand() % 400) + 600;
                    std::cout << "[CALIB] Wyznaczone MVC: " << maxContraction << " uV." << std::endl;
                    
                    std::cout << "[CALIB] Adaptacja wag i progow decyzyjnych algorytmu na podstawie MVC." << std::endl;
                    std::cout << "[CALIB] Kalibracja zakonczona. Wyzwalanie powrotu do trybu sterowania." << std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State Kalibracja
        case Kalibracja:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    //#[ state Kalibracja.(Exit) 
                    std::cout << "[CALIB] Kalibracja zakonczona. Wyzwalanie powrotu do trybu sterowania." << std::endl;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.Kalibracja");
                    //#[ transition 4 
                    this->aktualnyGest = BRAK;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Aktywny");
                    rootState_subState = Aktywny;
                    rootState_active = Aktywny;
                    //#[ state Aktywny.(Entry) 
                    std::cout << "\n=== [STEROWNIK sEMG] ===" << std::endl;
                    std::cout << "[INIT] Przejœcie w tryb AKTYWNY." << std::endl;
                    std::cout << "[HARDWARE] Konfiguracja przetwornika ADC na g³ównym interfejsie (RPi 5)..." << std::endl;
                    std::cout << "[MEM] Alokacja buforów pamiêci dla okna czasowego sygna³u." << std::endl;
                    
                    // Resetowanie aktualnego gestu zabezpieczaj¹ce przed b³êdami pamiêci
                    this->aktualnyGest = BRAK; 
                    
                    std::cout << "[SYS] Bufory wyczyszczone. Nas³uchiwanie na aktywnoœæ elektrod..." << std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSterownik::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("aktualnyGest", x2String((int)myReal->aktualnyGest));
}

void OMAnimatedSterownik::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsOdbiornik", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsOdbiornik);
    aomsRelations->addRelation("itsKlasyfikator", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsKlasyfikator);
}

void OMAnimatedSterownik::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case Sterownik::Uspiony:
        {
            Uspiony_serializeStates(aomsState);
        }
        break;
        case Sterownik::Aktywny:
        {
            Aktywny_serializeStates(aomsState);
        }
        break;
        case Sterownik::Kalibracja:
        {
            Kalibracja_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedSterownik::Uspiony_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Uspiony");
}

void OMAnimatedSterownik::Kalibracja_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Kalibracja");
}

void OMAnimatedSterownik::Aktywny_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Aktywny");
}
//#]

IMPLEMENT_REACTIVE_META_P(Sterownik, Default, Default, false, OMAnimatedSterownik)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Sterownik.cpp
*********************************************************************/
