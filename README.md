# Versija v0.4.1
***Ketvirtoji objektinio programavimo užduoties versija.***

<h2>Ką programa daro?</h2>

Programa leidžia įrašyti studentus, jų gautus pažymius, egzamino rezultatą ir paskaičiuoti galutinį rezultatą bei jį atvaizduoti vidurkio arba medianos pavidalu. Galima duomenis įrašyti savarankiškai arba nuskaityti iš failo. Yra galimybė sugeneruoti failą nuo nulio pagal savo pasirinktus parametrus/

<h2>Kaip programa pasikeitė nuo praeitos versijos?(v0.3 -> v0.4)</h2>

1) Įdėta galimybė sugeneruoti naują studentų failą pagal norimą dydį
(Sugeneruos atsitiktinius pažymius, egzamino balą, vardai prasidės vardas1, vardas2 ir t.t.)

2) Patobulintas Makefile(su "make rez" komanda terminale ištrins direktorijoje visus .txt failus)

3) Įdėtas funkcijų veikimo laikas
(Generuojant naują failą vartotojui bus matyti kiek laiko užtruko kiekviena operacija, pvž. naujo failo sukūrimo, jo apdorojimas ir t.t.)

4) Nuskaitant failą studentai pagal galutinį pažymį bus padalinami į dvi grupes ir išvedami į 2 naujus atskirus failus. Tuose failuose jie yra surūšiuoti diėjimo tvarka pagal pažymį

5)Nuskaitant failą nebebus išvedamas rezultatai.txt failas

<h2>Kaip paleisti šią programą?</h2>

Pirmiausia, jeigu norėsite skaityti duomenis iš failo, sukurkite "failai" direktoriją ir įdėkite duomenų failą tenais.
(Programoje rašant failo pavadinimą, reikia įvesti pilną, pvž studentai10000.txt)
Kad sukompiliuoti programą su Makefile, rašykite terminale "make". Kad paleistumete programą iš
terminalo rašykite "./main"

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

Iššūkis buvo bandyti optimizuoti kodą. Kažkiek pavyko nors ir ne pilnai. Sukurti funkciją, kuri generuotų naujus failus nebuvo labai sudėtinga.

<h2>Ką išmokau šioje versijoje:</h2>

1) Išmokau daugiau apie failų įrašinėjimą, naujų failų generavimą.

2) Sužinojau ką reiškia blogai optimizuotas kodas ir gerai optimizuotas kodas ir veiksniai, kurie tai lemia
(pvž. bufferio naudojimas vietoj eilučių skaitymo arba iš pradžių visų duomenų įrašymas į string ir tik po to tą string įrašyti į failą vietoj įrašinėjimo į failą eilute po eilute)
(taip pat savo kompiuterio resursų naudojimas, kaip operatyvios atminties, kad kodas veiktų efektyviau)

3) std::setw ir std::left kai bandoma gražiai sulygiuoti informaciją faile


<br>

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
