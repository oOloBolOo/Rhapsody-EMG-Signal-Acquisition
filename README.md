# System sterowania urządzeniem bionicznym oparty na sygnałach sEMG

Repozytorium zawiera projekt prototypu systemu akwizycji i analizy sygnałów elektromiograficznych (sEMG) przeznaczonego do sterowania aktywnymi protezami dłoni oraz urządzeniami wspomagającymi (egzoszkielety). 

Projekt został zrealizowany zgodnie z paradygmatem **Model-Driven Architecture (MDA)**. Całość logiki aplikacyjnej, przepływu sterowania oraz struktury obiektowej została zdefiniowana na poziomie modeli UML, z których automatycznie wygenerowano kod źródłowy w języku C++.

---

## Zakres funkcjonalny systemu

Model odwzorowuje kompletny potok przetwarzania biosygnałów i obejmuje następujące scenariusze:

1. **Kalibracja profilu mięśniowego:** Proces wyznaczania poziomu szumu spoczynkowego oraz maksymalnego skurczu izometrycznego w celu adaptacji progów decyzyjnych dla konkretnego użytkownika.
2. **Filtracja i przetwarzanie sygnału:** Implementacja metod cyfrowego przetwarzania sygnałów (DSP), w tym filtracji pasmowo-przepustowej i usuwania zakłóceń sieciowych (50 Hz).
3. **Klasyfikacja gestów (Machine Learning):** Ekstrakcja cech sygnału w dziedzinie częstotliwości (FFT) oraz przekazywanie danych do modułu klasyfikatora w celu rozpoznawania wzorców ruchowych (np. chwyt pęsetowy, chwyt cylindryczny).
4. **Zarządzanie stanami systemowymi:** Deterministyczna kontrola bezpieczeństwa realizowana przez maszynę stanową, automatycznie przełączająca układ w tryb uśpienia (Safe/Sleep Mode) w okresie braku aktywności mięśniowej.
5. **Rejestracja danych (Data Logging):** Moduł zapisu surowych oraz przetworzonych danych telemetrycznych do celów dalszej analizy diagnostycznej.

---

## Architektura i Modelowanie UML

System zaprojektowano w oparciu o strukturę klasy złożonej (**Composite Class**), gdzie główny komponent zarządzający (Sterownik) agreguje instancje wykonawcze:
* **Odbiornik:** Odpowiada za warstwę sprzętową i interfejs akwizycji danych.
* **KlasyfikatorML:** Realizuje zadania z zakresu analizy widmowej i wnioskowania.

### Wykorzystane diagramy strukturalne i dynamiczne:
* **Use Case Diagram:** Mapowanie granic systemu, ról aktorów (Użytkownik, Technik, UrządzenieBioniczne) oraz relacji funkcjonalnych.
* **Sequence Diagram (Design Mode):** Modelowanie interakcji wewnątrz potoku przetwarzania, z uwzględnieniem pętli samowywołania (*Message to Self*) dla algorytmów filtracji oraz ramek warunkowych `alt` do obsługi decyzji klasyfikatora.
* **Object Model Diagram:** Definicja statycznej architektury i kompozycji obiektów w pamięci systemu.
* **Statechart (Maszyna Stanowa):** Asynchroniczny model zachowania sterownika reagujący na zdarzenia systemowe (`evAktywuj`, `evSkurczMiesnia`, `evRozpocznijKalibracje`).

---

## Specyfikacja Techniczna

* **Środowisko CASE:** IBM Engineering Systems Design Rhapsody (Developer for C++) **w wersji 10.0.1**
* **Język implementacji:** C++ (kod generowany automatycznie z modelu)
* **Środowisko uruchomieniowe symulacji:** Cygwin / MSVC z włączonym modułem instrumentacji i animacji kodu (Instrumentation Mode: Animation)

---

## Instrukcja Uruchomienia i Symulacji

Model wspiera pełną weryfikację behawioralną w czasie rzeczywistym z poziomu środowiska Rhapsody:

1. Otwórz projekt w środowisku **IBM Rhapsody 10.0.1**.
2. Zweryfikuj, czy w ustawieniach konfiguracji `DefaultConfig` (zakładka *Settings*) włączony jest tryb **`Animation`**.
3. Przeprowadź generowanie oraz kompilację kodu źródłowego poprzez komendę **Code -> Build**.
4. Uruchom aplikację (**Code -> Run**).
5. Otwórz diagram maszyny stanowej sterownika i zainicjalizuj tryb animacji graficznej (**F4**). Stan `Uspiony` zostanie wyróżniony podświetleniem.
6. Wykorzystaj narzędzie **Event Generator** (ikona niebieskiej chorągiewki) do wstrzykiwania zdarzeń asynchronicznych (np. `evAktywuj`) bezpośrednio do instancji `itsSterownik`, aby monitorować tranzycje stanów i wykonanie przypisanych akcji C++.
