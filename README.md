# Versija v0.5
***Penktoji objektinio programavimo užduoties versija.***

<h2>Ką programa daro?</h2>

Programa leidžia įrašyti studentus, jų gautus pažymius, egzamino rezultatą ir paskaičiuoti galutinį rezultatą bei jį atvaizduoti vidurkio arba medianos pavidalu. Galima duomenis įrašyti savarankiškai arba nuskaityti iš failo. Yra galimybė sugeneruoti failą nuo nulio pagal savo pasirinktus parametrus.

<h2>Kaip programa pasikeitė nuo praeitos versijos?(v0.4 -> v0.5)</h2>

Programa veikia lygiai taip pat kaip ir V0.4 versijoje, jokių naujų funkcijų neatsirado. Pagrindinis pasikeitimas, kad atsirado 3-ys skirtingi projektai (main_vector.cpp main_list.cpp ir main_deque.cpp), kad būtų galimybė ištestuoti programos vykdymo laiką, kai yra naudojami skirtingi
konteineriai. Vienose versijose kodas gali truputį skirtis nuo kitų, tai buvo reikalinga padaryti, kad būtų galimybė naudoti  būtent tą konteinerį arba, kad paoptimizuoti kodą.


<h2>Kaip paleisti šią programą?</h2>

Kad sukurti programos paleidžiamąjį failą su makeFile terminale įrašykite: (pagal pasirinkimą)

1) make (versija su vektoriais)
2) make list (versija su list'ais)
3) make deque (versija su dekais)

Kad paleisti tą failą, terminale įrašykite: (pagal pasirinkimą)

1) ./main_vector (versija su vektoriais)
2) ./main_list (versija su list'ais)
3) ./main_deque (versija su dekais)

<h2>Visos funkcijos:</h2>

1) Įrašyti n skaičių studentų ( vardas, pavardė )

2) Įvesti savarankiškai m skaičių pažymių ( dešimtbalėje sistemoje )

3) Įvesti savarankiškai egzamino rezultatą ( dešimtbalėje sistemoje )

4) Atsitiktinai sugeneruoti pažymių kiekį, jų rezultatus bei egzamino balą

5) Paskaičiuoti galutinį rezultatą pagal formulę: ***Galutinis  = 0.4 * vidurkis + 0.6 * egzaminas***

5) Atvaizduoti visus duomenis vidurkio pavidalu

6) Atvaizduoti visus duomenis medianos pavidalu

7) Leidžia vartotojui įvedimo metu nuspręsti kada jis nori baigti darbą

8) Vietoj savarankiško duomenų įvedimo galima nuskaityti egzistuojantį failą ir rezultatas atsiras naujame sugeneruotame faile

9) Galimybė generuoti naują studentų failą pagal savo pasirinktus parametrus (pvž. kiek bus studentų ir kiek pažymių jie turės)

<h2>Patirti sunkumai šioje versijoje:</h2>

Sunkumų didelių nepatyriau, reikėjo pasidomėti apie std::list, kad galėčiau tinkamai implementuoti vietoj std::vector konteinerio. Buvo nesklandumų su std::deque, nes  vykdymo laikas truko labai daug laiko, reikėjo truputį paoptimizuoti kodą, bet ir galutiniame rezultate jis yra lėčiausias ir nelabai efektyvus.

<h2>Ką išmokau šioje versijoje:</h2>

1) Išmokau apie std::list bei apie list'us apskritai, gavau bazinį supratimą kaip jie veikia ir kaip tinkamai naudoti, kuom jų implementacija skiriasi nuo std::vector.

2) Su std::deque versija ir dideliu įrašų kiekiu programa kartais nulūždavo. Teko daugiau pagalvoti apie optimizavimą, kaip mano kompiuterio resursai yra naudojami, kodėl taip atsitinka.

<br>

<h2>Mano kompiuterio specifikacijos:</h2>

Procesorius: Intel® Core™ i7-8550U ; Branduoliai: 4 (loginių 8) ; 1.80 GHz

Operatyvioji atmintis: 16GB RAM ( 2x8GB ) DDR4

Kietasis diskas: 512GB SSD bendrai (Dual-boot operacinėje sistemoje, kurioje ir vykdžiau testavimą esu skyręs tik 40GB vietos)

<h2>Programos veikimo laikai: (su 10-imt pažymių)</h2>

**std::vector versija:**
| Įrašų kiekis  | 1tūkst.| 10tūkst.| 100tūkst.| 1mil.| 10mil.
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| Nuskaityto failo duomenų pertvarkymas| 0.01029s | 0.14728s  | 0.46259s | 4.1899s | 29.313s  |
| Studentų rūšiavimas pagal galutinį balą(sort) | 0.00188s | 0.0169179s  | 0.17058s  | 2.06811s  | 25.6781s |
| Studentų dalijimas į 2-i grupes  | 0.000812s  | 0.00502s  |0.0598433s |0.529551s  | 5.59538  |

<br>

**std::list versija:**
| Įrašų kiekis  | 1tūkst.| 10tūkst.| 100tūkst.| 1mil.| 10mil.
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| Nuskaityto failo duomenų pertvarkymas| 0.01253s | 0.15464s  | 0.56027s | 5.14107s | 52.539s  |
| Studentų rūšiavimas pagal galutinį balą(sort) | 0.001009s | 0.0076s  | 0.09008s  | 1.22083s  | 18.1588s |
| Studentų dalijimas į 2-i grupes  | 0.000818s  | 0.0084s  |0.09638s |0.980273s  | 9.90474s  |

**std::deque versija:**
| Įrašų kiekis  | 1tūkst.| 10tūkst.| 100tūkst.| 1mil.| 10mil.
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| Nuskaityto failo duomenų pertvarkymas| 0.03221s | 0.15544s  | 0.57529s | 5.70709s | 54.7563  |
| Studentų rūšiavimas pagal galutinį balą(sort) | 0.01259s | 0.03736s  | 0.329958s  | 4.3188s  | 104.521s |
| Studentų dalijimas į 2-i grupes  | 0.00487s  | 0.0155516s  |0.148766s |1.61614s  | 51.9328s  |