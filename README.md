# Versija V1.1
***Septintoji objektinio programavimo užduoties dalis.***

<h2>Ką programa daro?</h2>

Programa leidžia įrašyti studentus, jų pažymius, egzamino rezultatą ir paskaičiuoti galutinį rezultatą bei jį atvaizduoti vidurkio arba medianos pavidalu. Galima duomenis įrašyti savarankiškai arba nuskaityti iš failo. Yra galimybė sugeneruoti failą nuo nulio pagal savo pasirinktus parametrus. Nuskaityto failo atveju rezultatas bus sugeneruojamas naujuose failuose.

<h2>Kaip programa pasikeitė nuo praeitos versijos?(V1.0 -> V1.1)</h2>

Studento objektas anksčiau visąlaik buvo implementuotas su "struct", o dabar viskas buvo pakeista į klasę.

Išimtos praeitos programos implementacijos su skirtingais konteineriais (dekas,listas).

<h2>Kaip paleisti šią programą? / Įdiegimo instrukcija (su Makefile)</h2>

(turėkite direktorijoje visus failus!)
(pagrindinėje direktorijoje susikurkite "failai" direktoriją)

Kad sukurti programos paleidžiamąjį failą su Makefile, terminale įrašykite: (be kabučių)

1) "make" (versija su vektoriais)


Kad paleisti tą failą, terminale įrašykite:

1) "./main_vector" (versija su vektoriais)

Kitos naudingos komandos:

1) "make clean" (Ištrina programos paleidžiamuosius,objektinius failus)
2) "make rez" (Ištrina pagrindinėje direktorijoje esančius .txt failus (direktorijoje "failai" .txt failai nebus ištrinami) )

<h2>Programos naudojimosi instrukcija</h2>

Paleidus programą  ant ekrano matysite galimas operacijas su numeriu prie kiekvieno. Jūsų bus paprašyta įrašyti numerį, priklausomai kokią operaciją norėsite atlikti. Po pasirinkimo reikia sekti ir vykdyti, kas yra parašyta ekrane. Po kiekvienos operacijos programa išsijungs(išskyrus failų generavimo).

Ką vertėtų žinoti:

1) Sugeneruotas naujas failas yra įkeliamas į "failai" direktoriją
2) Failai yra nuskaitomi iš "failai" direktorijos. Programa veikia su .txt failais. Su kitais nebuvo bandoma
3) Po failo nuskaitymo bus sukurti 2-u nauji failai. Jie atsiras pagrindinėje direktorijoje (ne "failai" direktorijoje)
4) Jeigu programa prašo įvesti [random] arba [taip], tuomet turite įrašyti pasirinkimą be kabučių
5) Sugeneruoti nauji failai atsiranda tokiu pavidalu: "studentai" + skaičius .txt (skaičius reiškia kiek studentų faile yra)
6) badBoys.txt - po failų nuskaitymo atsirandantis failas, kur kiekvieno studento galutinis balas yra žemesnis nei 5
6) coolBoys.txt - po failų nuskaitymo atsirandantis failas, kur kiekvieno studento galutinis balas yra didesnis arba lygus 5

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

10)Galimybė nuskaityti failą pagal norimą strategiją ir implementaciją (šiuo metu yra 2-i strategijos ir 5-ios skirtingos implementacijos)


<h2>Patirti sunkumai šioje versijoje:</h2>

Teko labai susipažinti su c++ klasėmis ir suprasti kaip viską iš "struct" pakeisti, kad viskas veiktų.

<h2>Ką išmokau šioje versijoje:</h2>

1) Gilus susipažinimas su c++ klasėmis, kaip implementuoti, kam to reikia ir t.t.

<br>

<h2>Mano kompiuterio specifikacijos:</h2>

Procesorius: Intel® Core™ i7-8550U ; Branduoliai: 4 (loginių 8) ; 1.80 GHz

Operatyvioji atmintis: 16GB RAM ( 2x8GB ) DDR4

Kietasis diskas: 512GB SSD bendrai (Dual-boot operacinėje sistemoje, kurioje ir vykdžiau testavimą esu skyręs tik 40GB vietos)

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