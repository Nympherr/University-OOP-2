# Versija V1.5
***Devintoji objektinio programavimo užduoties dalis.***

<h2>Ką programa daro?</h2>

Programa leidžia įrašyti studentus, jų pažymius, egzamino rezultatą ir paskaičiuoti galutinį rezultatą bei jį atvaizduoti vidurkio arba medianos pavidalu. Galima duomenis įrašyti savarankiškai arba nuskaityti iš failo. Yra galimybė sugeneruoti failą nuo nulio pagal savo pasirinktus parametrus. Nuskaityto failo atveju rezultatas bus sugeneruojamas naujuose failuose.

<h2>Kaip programa pasikeitė nuo praeitos versijos?(V1.2 -> V1.5)</h2>

Implementuota abstrakti žmogaus klasė. Studento klasė dabar yra išvestinė iš žmogaus klasės.

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

Sunkumų nebuvo.

<h2>Ką išmokau šioje versijoje:</h2>

1) sužinojau kas yra virtuali funkcija, visiškai virtuali funkcija, abstrakti klasė.
2) sužinojau kam abstrakčios klasės yra reikalingos.
