# README
***Dešimtoji objektinio programavimo užduoties dalis.***

<h2>Ką programa daro?</h2>

Programa leidžia įrašyti studentus, jų pažymius, egzamino rezultatą ir paskaičiuoti galutinį rezultatą bei jį atvaizduoti vidurkio arba medianos pavidalu. Galima duomenis įrašyti savarankiškai arba nuskaityti iš failo. Yra galimybė sugeneruoti failą nuo nulio pagal savo pasirinktus parametrus. Nuskaityto failo atveju rezultatas bus sugeneruojamas naujuose failuose.

<h2>Kaip paleisti šią programą? / Įdiegimo instrukcija (su Makefile)</h2>

(turėkite direktorijoje visus failus!)
(pagrindinėje direktorijoje susikurkite "failai" direktoriją)

<h4>Kad sukurti programos paleidžiamąjį failą su Makefile, terminale įrašykite: (be kabučių)</h4>

* "make"


<h4>Kad paleisti tą failą, terminale įrašykite:</h4>

* "./main_vector"

<h4>Kitos naudingos komandos:</h4>

1) "make clean" (Ištrina programos paleidžiamuosius,objektinius failus)

2) "make rez" (Ištrina pagrindinėje direktorijoje esančius .txt failus (direktorijoje "failai" .txt failai nebus ištrinami) )

<h2>Programos naudojimosi instrukcija</h2>

Paleidus programą  ant ekrano matysite galimas operacijas su numeriu prie kiekvieno. Jūsų bus paprašyta įrašyti numerį, priklausomai kokią operaciją norėsite atlikti. Po pasirinkimo reikia sekti ir vykdyti, kas yra parašyta ekrane. Po kiekvienos operacijos programa išsijungs(išskyrus failų generavimo).

<h4>Ką vertėtų žinoti:</h4>

1) Sugeneruotas naujas failas yra įkeliamas į "failai" direktoriją

2) Failai yra nuskaitomi iš "failai" direktorijos. Programa veikia su .txt failais. Su kitais nebuvo bandoma

3) Po failo nuskaitymo bus sukurti 2-u nauji failai. Jie atsiras pagrindinėje direktorijoje (ne "failai" direktorijoje)

4) Jeigu programa prašo įvesti [random] arba [taip], tuomet turite įrašyti pasirinkimą be kabučių

5) Sugeneruoti nauji failai atsiranda tokiu pavidalu: "studentai" + skaičius .txt (skaičius reiškia kiek studentų faile yra)

6) badBoys.txt - po failų nuskaitymo atsirandantis failas, kur kiekvieno studento galutinis balas yra žemesnis nei 5

6) coolBoys.txt - po failų nuskaitymo atsirandantis failas, kur kiekvieno studento galutinis balas yra didesnis arba lygus 5

7) Norint atlikti unit testing reikės atsisiųsti catch2.hpp failą ir įmesti jį į "testavimas" direktoriją. testas.cpp failą sukompiliuoti kartu su student.cpp

<h2>Visos funkcijos:</h2>

1) Įrašyti n skaičių studentų ( vardas, pavardė )

2) Įvesti savarankiškai m skaičių pažymių ( dešimtbalėje sistemoje )

3) Įvesti savarankiškai egzamino rezultatą ( dešimtbalėje sistemoje )

4) Atsitiktinai sugeneruoti pažymių kiekį, jų rezultatus bei egzamino balą

5) Paskaičiuoti galutinį rezultatą pagal formulę: ***Galutinis  = 0.4 * vidurkis + 0.6 * egzaminas***

5) Atvaizduoti visus duomenis vidurkio pavidalu

6) Atvaizduoti visus duomenis medianos pavidalu

7) Leidžia vartotojui įvedimo metu nuspręsti kada jis nori baigti darbą

8) Vietoj savarankiško duomenų įvedimo galima nuskaityti egzistuojantį failą ir rezultatas atsiras naujuose sugeneruotuose failuose

9) Galimybė generuoti naują studentų failą pagal savo pasirinktus parametrus (pvž. kiek bus studentų ir kiek pažymių jie turės)

10) Galimybė nuskaityti failą pagal norimą strategiją ir implementaciją (šiuo metu yra 2-i strategijos ir 5-ios skirtingos implementacijos)

---

## V2.0

* Įkelta Doxygen dokumentacija

* Paprastas Unit Testing. (Su catch2 biblioteka)

---

## V1.5

* Implementuota abstrakti žmogaus klasė
* Studento klasė tapo išvestinė žmogaus klasei

---

## V1.2

Implementuotas "rule of five":

* Kopijavimo konstruktorius

* Kopijavimo priskyrimo operatorius

* Destruktorius

* "move" konstruktorius

* "move" priskyrimo operatorius

Atliktas šių implementacijų minimalus testavimas

---

## V1.1

* Studento objektas anksčiau visąlaik buvo implementuotas su "struct", o dabar viskas buvo pakeista į klasę.

* Išimtos praeitos programos implementacijos su skirtingais konteineriais (dekas,listas).


<h2>Programos veikimo laikai: (su 10-imt pažymių ir vektoriaus konteineriu)</h2>

**V1.1 versija su klasėmis**
| Įrašų kiekis  | 1mil.| 10mil.|
| ------------- | ------------- | ------------- |
| Failo nuskaitymo trukmė| 0.206502 s | 1.90675 s  |
| Nuskaityto failo duomenų pertvarkymas(studentų sudėjimas į vektorių)| 8.48424 s | 85.9903 s |
| Studentų rūšiavimas pagal galutinį balą(sort)  | 2.88479 s  | 35.4324 s  |
| Studentų dalijimas į 2-i grupes | 0.664449 s  | 5.84809 s |
| Padalintų studentų išvedimas į 2-u naujus failus | 0.643699 s s  | 6.97501 s |
| Visos programos vykdymo laikas | 13.1538 s  | 138.533 s |

<br>

**V1.0 versija su "struct"**
| Įrašų kiekis  | 1mil.| 10mil.|
| ------------- | ------------- | ------------- |
| Failo nuskaitymo trukmė| 0.290368 s| 2.03781 s  |
| Nuskaityto failo duomenų pertvarkymas(studentų sudėjimas į vektorių)| 5.1748 s | 51.8353 s |
| Studentų rūšiavimas pagal galutinį balą(sort)  | 1.99751 s  | 24.724 s  |
| Studentų dalijimas į 2-i grupes | 0.550983 s  | 5.29916 s  |
| Padalintų studentų išvedimas į 2-u naujus failus | 0.771165 s  | 8.89911 s |
| Visos programos vykdymo laikas | 9.07094 s  | 95.0619 s|

<br>

**V1.1 versija naudojant kompiliatoriaus optimizavimo -O1 flag** (Paleidžiamasis failas užėmė 203,1 kB)
| Įrašų kiekis  | 1mil.| 10mil.|
| ------------- | ------------- | ------------- |
| Failo nuskaitymo trukmė| 0.29269 s | 2.06836 s |
| Nuskaityto failo duomenų pertvarkymas(studentų sudėjimas į vektorių)| 8.32641 s | 85.229 s |
| Studentų rūšiavimas pagal galutinį balą(sort)  | 2.87775 s  | 36.0277 s |
| Studentų dalijimas į 2-i grupes | 0.669798 s  | 5.90443 s  |
| Padalintų studentų išvedimas į 2-u naujus failus | 0.782899 s | 7.05427 s |
| Visos programos vykdymo laikas | 13.211 s  | 138.578 s |

<br>

**V1.1 versija naudojant kompiliatoriaus optimizavimo -O2 flag** (Paleidžiamasis failas užėmė 203,1 kB)
| Įrašų kiekis  | 1mil.| 10mil.|
| ------------- | ------------- | ------------- |
| Failo nuskaitymo trukmė| 0.383481 s | 2.60993 s |
| Nuskaityto failo duomenų pertvarkymas(studentų sudėjimas į vektorių)| 9.9433 s | 87.2325 s  |
| Studentų rūšiavimas pagal galutinį balą(sort)  | 3.31897 s | 35.4203 s |
| Studentų dalijimas į 2-i grupes | 0.785124 s  | 5.86685 s |
| Padalintų studentų išvedimas į 2-u naujus failus | 0.88039 s  | 7.06177 s |
| Visos programos vykdymo laikas | 15.6451 s  | 140.53 s |

<br>

**V1.1 versija naudojant kompiliatoriaus optimizavimo -O3 flag** (Paleidžiamasis failas užėmė 203,1 kB)
| Įrašų kiekis  | 1mil.| 10mil.|
| ------------- | ------------- | ------------- |
| Failo nuskaitymo trukmė| 0.284994 s | 2.09966 s  |
| Nuskaityto failo duomenų pertvarkymas(studentų sudėjimas į vektorių)| 8.26136 s | 85.5558 s  |
| Studentų rūšiavimas pagal galutinį balą(sort)  | 2.83076 s  | 35.4449 s  |
| Studentų dalijimas į 2-i grupes | 0.673455 s  | 5.86814 s  |
| Padalintų studentų išvedimas į 2-u naujus failus | 0.802841 s  | 7.0416 s |
| Visos programos vykdymo laikas | 13.1214 s | 138.363 s |

---

## V1.0

Visuose konteineriuose(vektorius,dekas, listas) buvo įdiegta nauja studentų rūšiavimo strategija, kad patikrinti, kuri strategija yra efektyvesnė. Konteineryje su vektoriais papildomai buvo realizuoti skirtingi algoritmai, kad paspartinti programos veikimą.

* 1-a strategija(buvusi iš anksčiau) - bendrą studentų konteinerį išskirstyti į du naujus konteinerius(studentai tuo pačiu metu bus 2-uose skirtinguose konteineriuose)

* 2-a strategija(nauja) - bendro studentų konteinerio išskaidymas pasitelkiant tik vieną naują konteinerį(studentas arba paliekamas konteineryje arba perkeliamas ir ištrinamas).

<h2>Programos veikimo laikai: (su 10-imt pažymių) (rodomas tik studentų rūšiavimo į konteinerius laikas)</h2>

**1-a strategija (bendro konteinerio skaidymas į du naujus to paties tipo konteinerius)**
| Įrašų kiekis  | 1tūkst.| 10tūkst.| 100tūkst.| 1mil.| 10mil.
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| std::vector| 0.000812s | 0.00502s  | 0.0598433s | 0.529551s | 5.59538s  |
| std::list | 0.000818s | 0.0084s  | 0.09638s  | 0.980273s  | 9.90474s |
| std::deque  | 0.00487s  | 0.0155516s  |0.148766s |1.61614s  | 51.9328s  |

<br>

**2-a strategija (bendro studentų konteinerio skaidymas panaudojant tik vieną naują konteinerį)**
| Įrašų kiekis  | 1tūkst.| 10tūkst.| 100tūkst.| 1mil.| 10mil.
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| std::vector | 0.0215823 s | 1.17699 s  | 95.8339 s | N/A | N/A  |
| std::list | 0.001009s | 0.0076s  | 0.09008s  | 1.22083s  | 18.1588s |
| std::deque | 0.00295632 s  | 0.00590665 s  |0.068846 s |0.567148 s | 15.4428s  |

**std::vector skirtingų STL algoritmų realizavimo laikai:**
| Įrašų kiekis  | 1tūkst.| 10tūkst.| 100tūkst.| 1mil.| 10mil.
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| 1-a strategija paprasta realizacija be STL algoritmo| 0.000812s | 0.00502s  | 0.0598433s | 0.529551s | 5.59538s  |
| 1-a strategija std::copy_if algoritmas | 0.00260008 s | 0.00420784 s  | 0.0578393 s  | 0.561193 s  | 5.57795 s |
| 2-a strategija paprasta realizacija be STL algoritmo | 0.0215823 s | 1.17699 s  | 95.8339 s | N/A | N/A  |
| 2-a strategija std::partition algoritmas | 0.000520954 s  | 0.00309476 s  |0.019568 s |0.23746 s  | 2.38795 s  |
| 2-a strategija std::remove_if algoritmas | 0.000445644 s  | 0.00327482 s |0.0266557 s |0.241444 s  | 2.38315 s  |


---

## V0.5

Programa veikia lygiai taip pat kaip ir V0.4 versijoje, jokių naujų funkcijų neatsirado. Pagrindinis pasikeitimas, kad atsirado 3-ys skirtingi projektai (main_vector.cpp main_list.cpp ir main_deque.cpp), kad būtų galimybė ištestuoti programos vykdymo laiką, kai yra naudojami skirtingi konteineriai. Vienose versijose kodas gali truputį skirtis nuo kitų, tai buvo reikalinga padaryti, kad būtų galimybė naudoti būtent tą konteinerį arba, kad paoptimizuoti kodą.

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

---
## V0.4

1) Įdėta galimybė sugeneruoti naują studentų failą pagal norimą dydį
(Sugeneruos atsitiktinius pažymius, egzamino balą, vardai prasidės vardas1, vardas2 ir t.t.)

2) Patobulintas Makefile(su "make rez" komanda terminale ištrins direktorijoje visus .txt failus)

3) Įdėtas funkcijų veikimo laikas
(Generuojant naują failą vartotojui bus matyti kiek laiko užtruko kiekviena operacija, pvž. naujo failo sukūrimo, jo apdorojimas ir t.t.)

4) Su nauju sugeneruotu failu studentai pagal galutinį pažymį bus padalinami į dvi grupes ir išvedami į 2 naujus atskirus failus. Tuose failuose jie yra surūšiuoti diėjimo tvarka pagal pažymį

5) Duomenų nuskaitymui iš failo ir savarankiškam įvedinėjimui žymių pakitimų nebuvo. Tik truputį optimizuotas kodas.

<h2>Programos veikimo laikai:</h2>



| Įrašų kiekis  | 1tūkst.(10paž.) | 10tūkst.(10paž.) | 100tūkst.(10paž.)  | 100tūkst.(20paž.) | 1mil.(10paž.)  | 1mil.(20paž.) | 10mil.(10paž.)
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |------------- |
| Naujo failo sukūrimo laikas  | 0.00812s  |0.09327s  | 0.21541s  | 0.33624s  | 1.15105s |2.83936s | 14.525s |
| Failo nuskaitymo trukmė  | 0.00071s  | 0.00678s  | 0.02385s  | 0.03053s  | 0.20240s  | 0.22819s  | 1.73662s |
| Nuskaityto failo duomenų pertvarkymas| 0.02281s | 0.08398s  | 0.50214s | 0.79016s | 4.27163s  | 7.40528s  | 43.12s  |
| Studentų rūšiavimas pagal galutinį balą(sort) | 0.00657s | 0.01996s  | 0.18515s  | 0.177451  | 2.0181s | 1.9569s  | 24.9s  |
| Studentų dalijimas į 2-i grupes  | 0.00226s  | 0.00605s  |0.06192s |0.06624s  | 0.54718s  | 0.57527s  | 5.27099s  |
| Padalintų studentų išvedimas į 2-u naujus failus | 0.00611s   | 0.01322s | 0.140638s  | 0.130227s  | 0.73620s  | 0.87743s | 9.82542s  |
| **Visos programos veikimo laikas**  | 0.04807s  | 0.22691s  | 1.15993s  | 1.57964s  | 9.5939s  | 14.3081s | 101.754s  |

---

## V0.3


1) Įvykdytas refactoring'as

1.1) Įdėti apsisaugojimai(try/catch blokai) skaitant failus bei jų turinį

1.2) Funkcijos, duomenų tipai, bibliotekos perkeltos į antraštinius failus

1.3) Sukurtas Makefile paprastesniam programos kompiliavimui

Papildomų funkcijų nepridėta

---

## V0.2

1) Atsirado galimybė vartotojui nuskaityti bet kokį failą, vietoj savarankiško įvedimo

2) Failo nuskaitymo atveju nėra svarbu kiek pažymių vienoje eilutėje bus

3) Programa failo nuskaitymo atveju sugeneruos naują failą (rezultatas.txt)

4) Failo nuskaitymo atveju bus matomas galutinis vidurkio rezultatas bei mediana

5) Pasirinkus savarankišką įvedimą, programa veiks kaip ir V0.1 versijoje

6) Liko programa versija tik su vektoriais

---

## V0.1

**Ši versija buvo atlikta dviem būdais:**
1) naudojant vektorius  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    ( main_vector.cpp )

2) naudojant tik C masyvus &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ( main.cpp )

**Ką programa daro?**

Apibendrintai ši programa leidžia įrašyti studentus, jų gautus pažymius, egzamino rezultatą ir paskaičiuoti galutinį rezultatą bei jį atvaizduoti vidurkio arba medianos pavidalu

**Visos funkcijos:**

1) Įrašyti n skaičių studentų ( vardas, pavardė )

2) Įvesti savarankiškai m skaičių pažymių ( dešimtbalėje sistemoje )

3) Įvesti savarankiškai egzamino rezultatą ( dešimtbalėje sistemoje )

4) Atsitiktinai sugeneruoti pažymių kiekį, jų rezultatus bei egzamino balą

5) Paskaičiuoti galutinį rezultatą pagal formulę: ***Galutinis  = 0.4 * vidurkis + 0.6 * egzaminas***

5) Atvaizduoti visus duomenis vidurkio pavidalu

6) Atvaizduoti visus duomenis medianos pavidalu

7) Leidžia vartotojui įvedimo metu nuspręsti kada jis nori baigti darbą

---

## Kompiuterio specifikacijos (su kuriuo atliktas testavimas)

* Operacinė sistema: Linux (Ubuntu)

* Procesorius: Intel® Core™ i7-8550U ; Branduoliai: 4 (loginių 8) ; 1.80 GHz

* Operatyvioji atmintis: 16GB RAM ( 2x8GB ) DDR4

* Kietasis diskas: 512GB SSD