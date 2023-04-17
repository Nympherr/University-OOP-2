# Versija v1.0
***Šeštoji objektinio programavimo užduoties versija.***

<h2>Ką programa daro?</h2>

Programa leidžia įrašyti studentus, jų pažymius, egzamino rezultatą ir paskaičiuoti galutinį rezultatą bei jį atvaizduoti vidurkio arba medianos pavidalu. Galima duomenis įrašyti savarankiškai arba nuskaityti iš failo. Yra galimybė sugeneruoti failą nuo nulio pagal savo pasirinktus parametrus. Nuskaityto failo atveju rezultatas bus sugeneruojamas naujuose failuose.

<h2>Kaip programa pasikeitė nuo praeitos versijos?(v0.5 -> v1.0)</h2>

Visuose konteineriuose(vektorius,dekas, listas) buvo įdiegta nauja studentų rūšiavimo strategija, kad patikrinti, kuri strategija yra efektyvesnė. Konteineryje su vektoriais papildomai buvo realizuoti skirtingi algoritmai, kad paspartinti programos veikimą.

* 1-a strategija(buvusi iš anksčiau) - bendrą studentų konteinerį išskirstyti į du naujus konteinerius(studentai tuo pačiu metu bus 2-uose skirtinguose konteineriuose)

* 2-a strategija(nauja) - bendro studentų konteinerio išskaidymas pasitelkiant tik vieną naują konteinerį(studentas arba paliekamas konteineryje arba perkeliamas ir ištrinamas).

<h2>Kaip paleisti šią programą? / Įdiegimo instrukcija (su Makefile)</h2>

(turėkite direktorijoje visus failus!)

Kad sukurti programos paleidžiamąjį failą su Makefile, terminale įrašykite: (pagal pasirinkimą, be kabučių)

1) "make" (versija su vektoriais)
2) "make list" (versija su list'ais)
3) "make deque" (versija su dekais)

Kad paleisti tą failą, terminale įrašykite: (pagal pasirinkimą)

1) "./main_vector" (versija su vektoriais)
2) "./main_list" (versija su list'ais)
3) "./main_deque" (versija su dekais)

Kitos naudingos komandos:

1) "make clean" (Ištrina programos paleidžiamuosius,objektinius failus)
2) "make rez" (Ištrina pagrindinėje direktorijoje esančius .txt failus (direktorijoje "failai" .txt failai nebus ištrinami) )

<h2>Programos naudojimosi instrukcija</h2>

Paleidus programą  ant ekrano matysite galimas operacijas su numeriu prie kiekvieno. Jūsų bus paprašyta įrašyti numerį, priklausomai kokią operaciją norėsite atlikti. Po pasirinkimo reikia sekti ir vykdyti, kas yra parašyta ekrane. Po kiekvienos operacijos programa išsijungs(išskyrus failų generavimo).

Ką vertėtų žinoti:

1) Sugeneruotas naujas failas yra įkeliamas į "failai" direktoriją
2) Failai yra nuskaitomi iš "failai" direktorijos. Programa veikia su .txt failais. Su kitais nebuvo bandoma
3) Po failo nuskaitymo bus sukurti 2-u nauji failai. Jie atsiras pagrindinėje direktorijoje (ne "failai" direktorijoje)
4) Jeigu programa prašo įvesti [random] arba [taip], tuomet turite įrašyti be kabučių
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


<h2>Visos programos versijos</h2>

**Versija V0.1** - projekto pradžia. Viena iš ilgiausiai trukusių versijų(laiko atžvilgiu). Buvo sudėti pamatai kitoms versijoms. Programa leido vartotojui savarankiškai įvesti duomenis(studentus,pažymius,egzaminą) ir juos atvaizduoti medianos/vidurkio pavidalu. Buvo sukurtos 2-i realizacijos: viena su vektoriais, kita su C masyvais

**Versija V0.2** - irgi viena iš sunkesnių versijų. Atsirado papildomas funkcionalumas,galimybė ne tik įvesti duomenis savarankiškai, bet ir juos nuskaityti iš failo. Nuskaičius failą rezultatas yra sugeneruojamas naujame faile

**Versija V0.3** - viena lengvų/greitesnių versijų. Buvo atliktas refactoring'as (projektas išskirstytas į atskirus failus) ir įdėti exceptions su catch, try blokais, kad programa visada veiktų tinkamai, net ir su netinkama įvestimi.

**Versija V0.4** - atsirado failų generavimas ir spartos analizė. Ši versija taipogi kaip ir pirmos dvi, užtruko laiko, buvo patirta sunkumų. Bet ir išmokta nemažai dalykų. Programoje atsirado funkcionalumas sugeneruoti norimą failą su n skaičių studentų ir m skaičių pažymių. Taipogi programos veikimo metu vartotojas gali matyti kiek laiko užtruko kiekviena operacija(failų nuskaitymas, sukūrimas ir pnš.)

**Versija V0.5** - versija skirta programos analizavimui. Reikėjo ištestuoti kaip programa veiktų jei naudotume skirtingus konteinerius(vietoj vektoriaus deką ir list'ą). Susipažinau, kad skirtingose atvejuose skirtingi konteineriai veikia efektyviau, o kiti net labai prastai. Taipogi gilesnis susipažinimas su STL biblioteka. Šią programos versiją nebuvo labai sudėtinga įgyvendinti.

**Versija V1.0** - galutinė pirmos versijos programa. Reikėjo išbandyti naują studentų rūšiavimo strategiją(apie kurią net nepagalvojau) ir išbandyti naujus algoritmus iš STL bibliotekos. Ši versija labiau praplėtė akiratį ir supratimą, kad visada yra vietos optimizavimui, galimybė sukurti kažką efektyviau. Implementuoti nebuvo sudėtinga.

<h2>Patirti sunkumai šioje versijoje:</h2>

Didelių sunkumų šioje versijoje nebuvo patirta

<h2>Ką išmokau šioje versijoje:</h2>

1) Sužinojau kaip spręsti problemą skirtingais būdais (skirtingos strategijos)

2) Susipažinau su skirtingais algoritmais iš STL bibliotekos

<br>

<h2>Mano kompiuterio specifikacijos:</h2>

Procesorius: Intel® Core™ i7-8550U ; Branduoliai: 4 (loginių 8) ; 1.80 GHz

Operatyvioji atmintis: 16GB RAM ( 2x8GB ) DDR4

Kietasis diskas: 512GB SSD bendrai (Dual-boot operacinėje sistemoje, kurioje ir vykdžiau testavimą esu skyręs tik 40GB vietos)


<h2>Operatyvios atminties naudojimas skirtingų strategijų atžvilgiu</h2>

(Testavimas buvo atliktas su Windows operacine sistema)

Pirmoje strategijoje operatyvioji atmintis yra žymiai labiau naudojama, testavimo atveju (su task manager) naudojimas viršijo virš 2GB. Logiška, nes su šia strategija vienu metu tas pats įrašas bus dviejuose skirtinguose konteineriuose.

Antroje strategijoje operatyvioji atmintis į viršų nešokinėjo, visą laiką naudojimas buvo stabilus, apie 700MB-800MB. Taip yra, nes vienu metu vienas įrašas egzistuoja tik viename konteineryje.

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