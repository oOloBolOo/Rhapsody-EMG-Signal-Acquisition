/********************************************************************
	Rhapsody	: 10.0.1 
	Login		: LabPOIO-82
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: KlasyfikatorML
//!	Generated Date	: Sun, 21, Jun 2026  
	File Path	: DefaultComponent/DefaultConfig/KlasyfikatorML.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "KlasyfikatorML.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <cstdlib>
//#[ ignore
#define Default_KlasyfikatorML_KlasyfikatorML_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class KlasyfikatorML
KlasyfikatorML::KlasyfikatorML(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(KlasyfikatorML, KlasyfikatorML(), 0, Default_KlasyfikatorML_KlasyfikatorML_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

KlasyfikatorML::~KlasyfikatorML() {
    NOTIFY_DESTRUCTOR(~KlasyfikatorML, true);
}

bool KlasyfikatorML::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void KlasyfikatorML::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void KlasyfikatorML::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
        rootState_subState = Oczekiwanie;
        rootState_active = Oczekiwanie;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus KlasyfikatorML::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Oczekiwanie
        case Oczekiwanie:
        {
            if(IS_EVENT_TYPE_OF(evAnalizujWidmo_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Oczekiwanie");
                    NOTIFY_STATE_ENTERED("ROOT.AnalizaFFT");
                    pushNullTransition();
                    rootState_subState = AnalizaFFT;
                    rootState_active = AnalizaFFT;
                    //#[ state AnalizaFFT.(Entry) 
                    std::cout << "\n=== [MODUL KLASYFIKATORA ML] ===" << std::endl;
                    std::cout << "[FFT] Odebrano paczke danych. Obliczanie transformaty Fouriera..." << std::endl;
                    
                    // Symulacja ekstrakcji cech widmowych (np. dominujaca czestotliwosc w Hz)
                    int dominujacaCzestotliwosc = (rand() % 150) + 20; 
                    std::cout << "[FFT] Wyodrebniono cechy. Dominujace pasmo: " << dominujacaCzestotliwosc << " Hz." << std::endl;
                    
                    std::cout << "[ML] Ladowanie wektora cech do modelu klasyfikatora..." << std::endl;
                    
                    // Prosta symulacja dzialania algorytmu wnioskujacego (3 rozne gesty)
                    int wynikKlasyfikacji = rand() % 3;
                    
                    std::cout << "[ML] Decyzja modelu: ";
                    switch(wynikKlasyfikacji) {
                        case 0:
                            std::cout << "CHWYT CYLINDRYCZNY (Power Grip)" << std::endl;
                            break;
                        case 1:
                            std::cout << "CHWYT PESETOWY (Pinch Grip)" << std::endl;
                            break;
                        case 2:
                            std::cout << "OTWARCIE DLONI (Hand Open)" << std::endl;
                            break;
                    }
                    
                    std::cout << "[ML] Generowanie ramki sterujacej dla silnikow protezy." << std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State AnalizaFFT
        case AnalizaFFT:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    //#[ state AnalizaFFT.(Exit) 
                    std::cout << "[KLASYFIKATOR] Widmo przeliczone, gest sklasyfikowany." << std::endl;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.AnalizaFFT");
                    NOTIFY_STATE_ENTERED("ROOT.Oczekiwanie");
                    rootState_subState = Oczekiwanie;
                    rootState_active = Oczekiwanie;
                    NOTIFY_TRANSITION_TERMINATED("2");
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
void OMAnimatedKlasyfikatorML::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case KlasyfikatorML::Oczekiwanie:
        {
            Oczekiwanie_serializeStates(aomsState);
        }
        break;
        case KlasyfikatorML::AnalizaFFT:
        {
            AnalizaFFT_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedKlasyfikatorML::Oczekiwanie_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Oczekiwanie");
}

void OMAnimatedKlasyfikatorML::AnalizaFFT_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AnalizaFFT");
}
//#]

IMPLEMENT_REACTIVE_META_P(KlasyfikatorML, Default, Default, false, OMAnimatedKlasyfikatorML)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/KlasyfikatorML.cpp
*********************************************************************/
