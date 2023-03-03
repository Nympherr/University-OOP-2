# Versija v0.3
***Trečioji objektinio programavimo užduoties versija.***

**Ką programa daro?**

Programa leidžia įrašyti studentus, jų gautus pažymius, egzamino rezultatą ir paskaičiuoti galutinį rezultatą bei jį atvaizduoti vidurkio arba medianos pavidalu. Galima duomenis įrašyti savarankiškai arba nuskaityti iš failo. Pastaruoju atveju rezultatas bus atvaizduojamas naujai sukurtame faile.

**Kaip programa pasikeitė nuo praeitos versijos?(v0.2 -> v0.3)**

1) Įvykdytas refactoring'as

1.1) Įdėti apsisaugojimai(try/catch blokai) skaitant failus bei jų turinį

1.2) Funkcijos, duomenų tipai, bibliotekos perkeltos į antraštinius failus

1.3) Sukurtas Makefile paprastesniam programos kompiliavimui

Papildomų funkcijų nepridėta

**Kaip paleisti šią programą?**

Pirmiausia, jeigu norėsite skaityti duomenis iš failo, įdėkite tą failą į "failai" direktoriją.
(Programoje rašant failo pavadinimą, reikia įvesti pilną, pvž studentai10000.txt)
Kad sukompiliuoti programą su Makefile, rašykite terminale "make". Kad paleistumete programą iš
terminalo rašykite "./main"

**Visos funkcijos:**

1) Įrašyti n skaičių studentų ( vardas, pavardė )

2) Įvesti savarankiškai m skaičių pažymių ( dešimtbalėje sistemoje )

3) Įvesti savarankiškai egzamino rezultatą ( dešimtbalėje sistemoje )

4) Atsitiktinai sugeneruoti pažymių kiekį, jų rezultatus bei egzamino balą

5) Paskaičiuoti galutinį rezultatą pagal formulę: ***Galutinis  = 0.4 * vidurkis + 0.6 * egzaminas***

5) Atvaizduoti visus duomenis vidurkio pavidalu

6) Atvaizduoti visus duomenis medianos pavidalu

7) Leidžia vartotojui įvedimo metu nuspręsti kada jis nori baigti darbą

8) Vietoj savarankiško duomenų įvedimo galima nuskaityti egzistuojantį failą ir rezultatas atsiras naujame            sugeneruotame faile 

**Patirti sunkumai šioje versijoje:**

Šioje versijoje viskas vyko sklandžiai, sunkumų nebuvo

**Ką išmokau šioje versijoje:**

1) Prisiminiau antraštinius failus ir kaip juos naudoti

2) Prisiminiau programos kompiliavimo būdą su "Makefile"

3) Truputį patobulinau žinias apie išimčių valdymus (try/catch)
