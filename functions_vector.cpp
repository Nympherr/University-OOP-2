#include "functions_vector.h"

int mokiniu_dydis = 0;
std::vector<studentas> asmenys;

void duomenu_suvedimas(studentas& asmuo){

// Tikrina ar vartotojo vardo įvestis yra iš raidžių ir ar neviršija nurodyto
// skaitmenų kiekio. Vyksta tol, kol įvestis tenkins sąlygas.

    std::cout << "\nStudento vardas: ";
    bool yra_vardas = false;

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    while (!yra_vardas || asmuo.getVardas().length() < 1 || asmuo.getVardas().length() > 20) {

        std::string vardas;
        std::getline(std::cin, vardas);
        asmuo.setVardas(vardas);
        yra_vardas = true;   

        for (char c : asmuo.getVardas()) {
            if (!std::isalpha(c)) {
                yra_vardas = false;
                std::cout << "\nVarda gali sudaryti tik raides!\n";
                std::cout << "Vardas: ";
                break;
            }
        }
        if(asmuo.getVardas().length() < 1 || asmuo.getVardas().length() > 20){
            std::cout << "\nVardas gali tureti tik 1-20 raidziu!\n";
            std::cout << "Vardas: ";
        }
    }

// Tikrina ar vartotojo pavardės įvestis yra iš raidžių ir ar neviršija nurodyto
// skaitmenų kiekio. Vyksta tol, kol įvestis tenkins sąlygas.

    std::cout << "Studento pavarde: ";
    bool yra_pavarde = false;

     while (!yra_pavarde || asmuo.getPavarde().length() < 1 || asmuo.getPavarde().length() > 20) {

        std::string pavarde;
        std::getline(std::cin, pavarde);
        asmuo.setPavarde(pavarde);
        yra_pavarde = true;   

        for (char c : asmuo.getPavarde()) {
            if (!std::isalpha(c)) {
                yra_pavarde = false;
                std::cout << "\nPavarde gali sudaryti tik raides!\n";
                std::cout << "Pavarde: ";
                break;
            }
        }
        if(asmuo.getPavarde().length() < 1 || asmuo.getPavarde().length() > 20){
            std::cout << "\nPavarde gali tureti tik 1-20 raidziu!\n";
            std::cout << "Pavarde: ";
        }
    }

// Pagal vartotojo įvestį yra iškviečiama funkcija, kuri atsitiktinai generuos
// pažymius arba vartotojui leis savarankiškai juos įvesti.

    std::cout << "\nAr noretumete atsitiktinai sugeneruoti pažymių ir egzamino rezultatus?\n";
    std::cout << "[random]-TAIP     [betkuri raide]-NE\n";
    std::string ivestis;
    std::cin >> ivestis;
    std::transform(ivestis.begin(), ivestis.end(), ivestis.begin(),
    [](unsigned char c){ return std::tolower(c); });

    std::cout << std::endl;

    if(ivestis == "random"){
        asmuo.atsitiktiniu_reiksmiu_generavimas(asmuo);
        asmuo.galutinio_balo_skaiciavimas(asmuo);
        asmuo.medianos_skaiciavimas(asmuo);
        return;
    }

// Pažymių įvedimas savarankiškai. Tikrinama, kad būtų minimalus pažymių kiekis
// bei, kad įvestis būtų tinkama(pvž. skaičius, o ne raidės)

    std::cout << "[Spausk raide, kad baigti ivedima]\n";
    std::cout << "Studento pazymiai: ";

    asmuo.pazymiu_suvedimas(asmuo);
    while(asmuo.getPazymiai().size() == 0){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Turite ivesti bent viena pazymi:";
        asmuo.pazymiu_suvedimas(asmuo);
    }

// Rodomi įvesti pažymiai. Kviečiama funkcija, kur reikės įvesti egzamino balą.
// Bei kviečiamos funkcijos, kur apskaičiuos galutinį balą, bei medianą.

    std::cout << "\nIvesti pazymiai: ";
        for(int t=0;t < asmuo.getPazymiai().size(); t++){
            std::cout << asmuo.getPazymiai()[t] << " ";
        }

    std::cout << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    asmuo.egzamino_suvedimas(asmuo);
    asmuo.galutinio_balo_skaiciavimas(asmuo);
    asmuo.medianos_skaiciavimas(asmuo);
    std::cout << "-------------------------------------\n\n";
};

void vidurkio_vaizdavimas(std::vector<studentas> &sarasas){
    
    std::cout << "\nPavarde              Vardas               Galutinis (Vid.)\n";
    std::cout << "------------------------------------------------------------\n";

    for (const auto& asmuo : sarasas) {

        std::cout << std::fixed << std::setprecision(2);
        std::cout << std::setw(21) << std::left << asmuo.getPavarde();
        std::cout << std::setw(21) << std::left << asmuo.getVardas();
        std::cout << asmuo.getGalutinis_balas() << '\n';

    }
    std::cout << "\n";
};

void medianos_vaizdavimas(std::vector<studentas> &sarasas){

    std::cout << "Pavarde              Vardas               Galutinis (Med.)\n";
    std::cout << "------------------------------------------------------------\n";

    for (const auto& asmuo : sarasas) {

        std::cout << std::fixed << std::setprecision(2);
        std::cout << std::setw(21) << std::left << asmuo.getPavarde();
        std::cout << std::setw(21) << std::left << asmuo.getVardas();
        std::cout << asmuo.getMediana() << '\n';

    }
    std::cout << "\n";
};

void rezultatu_vaizdavimas(){

// Tikrina vartotojo įvestį ir pagal pasirinkimą
// atitinkamai atvaizduoja studentus ir jų rezultatus

    std::cout << "\nNorite rezultatus matyti pagal vidurkį ar medianą?\n";
    std::cout << "[v] - VIDURKIS     [m] - MEDIANA\n";
    std::string pasirinkimas;
    std::cin >> pasirinkimas;
    std::transform(pasirinkimas.begin(), pasirinkimas.end(), pasirinkimas.begin(),
    [](unsigned char c){ return std::tolower(c); });

    std::cout << std::endl;

    while(pasirinkimas != "v" && pasirinkimas != "m"){
        std::cout << "Galite pasirinkti tik:\n";
        std::cout << "[v] - VIDURKIS     [m] - MEDIANA\n";
        std::cin >> pasirinkimas;
    }
    if(pasirinkimas == "v"){
        vidurkio_vaizdavimas(asmenys);
    }
    else if(pasirinkimas == "m"){
        medianos_vaizdavimas(asmenys);
    }
};

void prideti_mokini(){

// Tikrina vartotojo įvestį ir didina studentų masyvą
// jeigu vartotojas nori pridėti naują įrašą

    std::string ivestis;

    do{
        std::cout << "Ar norite įvesti naują mokinį?\n";
        std::cout << "[t]-TAIP      [kita raide]-NE\n";
        std::cin >> ivestis;
        std::transform(ivestis.begin(), ivestis.end(), ivestis.begin(),
        [](unsigned char c){ return std::tolower(c); });

        if(ivestis == "t"){
            asmenys.push_back(studentas());
            duomenu_suvedimas(asmenys[mokiniu_dydis]);
            mokiniu_dydis++;
        }
    }while(ivestis == "t");
};

std::string irasymo_pasirinkimas(){

    std::cout << "\n----------------------------------\n";
    std::cout << "         PROGRAMOS PRADŽIA\n";
    std::cout << "----------------------------------\n\n";

    std::cout << "Pasirinkite norimą operaciją:\n";
    std::cout << "1 - Duomenų įvedimas savarankiškai\n";
    std::cout << "2 - Duomenų nuskaitymas iš failo\n";
    std::cout << "3 - Naujo failo sugeneravimas\n";
    std::cout << "4 - Išjungti programą\n";
    std::cout << "\nJūsų pasirinkimas:  ";

    std::string ivestis;
    std::cin >> ivestis;
    while(ivestis != "1" && ivestis != "2" && ivestis != "3" && ivestis != "4"){
        std::cout<< "\nGalite pasirinkti tik [1], [2], [3] arba [4]!\n";
        std::cout<< "Jūsų pasirinkimas:  ";
        std::cin >> ivestis;
        std::cout << std::endl;
    }

    return ivestis;
};

void failo_irasymas_paprastai(const std::string& failo_pavadinimas, const std::vector<studentas>& sarasas) {

    std::ostringstream buferis;

    buferis << "Pavarde              Vardas               Galutinis (Vid.)        Galutinis (Med.)\n";
    buferis << "-----------------------------------------------------------------------------------------\n";

    for (const auto& asmuo : sarasas) {
        buferis << std::fixed << std::setprecision(2);

        buferis << std::setw(21) << std::left << asmuo.getPavarde();
        buferis << std::setw(21) << std::left << asmuo.getVardas();
        buferis << std::setw(24) << std::left << asmuo.getGalutinis_balas();
        buferis << asmuo.getMediana() << '\n';
    }

    const std::string& isvedimo_string = buferis.str();

    std::ofstream rezultatu_failas(failo_pavadinimas, std::ios_base::binary);
    rezultatu_failas.write(isvedimo_string.c_str(), isvedimo_string.size());
    rezultatu_failas.close();
};

void failo_studento_nuskaitymas(std::string failo_pavadinimas){


    auto start_file_read = std::chrono::high_resolution_clock::now(); auto st=start_file_read;

    std::ifstream skaitomas_failas;
    skaitomas_failas.open(failo_pavadinimas);

    std::string nuskaityta_eilute;
    std::vector<std::string> nuskaitytas_failas;

    // Skaitoma atidaryto failo kiekviena eilutė

    while (std::getline(skaitomas_failas, nuskaityta_eilute)) {
        nuskaitytas_failas.push_back(nuskaityta_eilute);
    };

    skaitomas_failas.close();
    nuskaitytas_failas.erase(nuskaitytas_failas.begin());

    auto end_file_read = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff_file_read = end_file_read-start_file_read; // Skirtumas (s)
    std::cout << "Failo nuskaitymo trukmė: "<< diff_file_read.count() << " s\n"; 

    // Nuskaityti failo duomenys pertvarkomi
    // (Atskiriami vardai, pavardes, pazymiai, egzaminai)

    auto start_duomenu_pertvarkymas = std::chrono::high_resolution_clock::now(); auto st2=start_duomenu_pertvarkymas;

    std::vector<std::vector<std::string>> rezultatas;

    for (const std::string& x : nuskaitytas_failas) {

            std::istringstream neisskaidyta_eilute(x);
            std::vector<std::string> isskaidyti_zodziai;
            std::string zodis;

            while (neisskaidyta_eilute >> zodis) {
                isskaidyti_zodziai.push_back(zodis);
            }
            rezultatas.push_back(isskaidyti_zodziai);
        }

    // Kiekvienoje iteracijoje sukuriamas naujas studento objektas

    for (const auto& result : rezultatas) {

        studentas temp;

        const int n = result.size();

        for(int j = 0; j < n ; j++){
        
            if(j == 0){
                temp.setVardas(result[j]);
            }
            else if(j == 1){
                temp.setPavarde(result[j]);
            }
            else if(j > 1 && j < n - 1){
                try{
                    int reiksme = std::stoi(result[j]);
                    temp.setPazymiai(reiksme);
                }
                catch (const std::invalid_argument& e) {
                    continue;
                }
            }
            else if(j == n - 1){
                try{
                int reiksme = std::stoi(result[j]);
                temp.setEgzaminas(reiksme);
                }
                catch (const std::invalid_argument& e) {
                    temp.setEgzaminas(0);
                }
            }   
        }
        temp.galutinio_balo_skaiciavimas(temp);
        temp.medianos_skaiciavimas(temp);
        asmenys.push_back(temp);
    }
    auto end_sutvarkyti_duomenys = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff_sutvarkyti_duomenys = end_sutvarkyti_duomenys-start_duomenu_pertvarkymas;
    std::cout << "Nuskaityto failo duomenų pertvarkymas(studentų sudėjimas į vektorių):  "<< diff_sutvarkyti_duomenys.count() << " s\n"; 
};

void failo_nuskaitymas(std::string pasirinkimas){

    // Duoda vartotojui pasirinkti failą, kurį jis nori atidaryti

    std::cout << "\nIrasykite failo pavadinima:   ";
    std::string ivestis;
    std::cin >> ivestis;

    std::string failo_pavadinimas = "./failai/" + ivestis;
    std::ifstream skaitomas_failas;

    // Tikrina ar įvestis teisinga

   while (true) {
    try {
        skaitomas_failas.open(failo_pavadinimas);
        if (!skaitomas_failas.is_open()) {
            throw "\nNepavyko atidaryti failo";
        }
        break;
    }
    catch(const char* klaidos_zinute){
        std::cerr << klaidos_zinute << std::endl;
        std::cout << "Pabandykite dar karta\n";
        std::cout << "Failo pavadinimas:   ";
        std::cin >> ivestis;
        std::cout << std::endl;
        failo_pavadinimas = "./failai/" + ivestis;
    }
}

    auto start = std::chrono::high_resolution_clock::now(); auto st=start;
    std::cout << "\n---------------- Irasomi duomenys.... ----------------\n\n";
    // Kviečiam funkciją, kuri nuskaitys šį failą ir studentus sudės į bendrą vektorių.

    failo_studento_nuskaitymas(failo_pavadinimas);

    // Studentų rūšiavimas pagal pažymį

    auto start_sort = std::chrono::high_resolution_clock::now(); auto st5=start_sort;

    std::sort(asmenys.begin(), asmenys.end(), studentas::galutinio_balo_rusiavimas);

     auto end_sort = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double> diff_sort = end_sort-start_sort;
     std::cout << "Studentų rūšiavimas pagal galutinį balą(sort): "<< diff_sort.count() << " s\n";  

    // Iš bendro studentų vektoriaus, studentai yra surūšiuojami pagal galutinį balą
    // ir įrašomi į jiems skirtus vektorius

     auto start_rusiavimas = std::chrono::high_resolution_clock::now(); auto st2=start_rusiavimas;

//---------------------------------------------------------------------------------------------------------
// STRATEGIJA NR.1 PRADŽIA               (Bendro konteinerio suskaidymas į 2-u naujus)

    if(pasirinkimas == "1" || pasirinkimas == "2"){

        std::vector<studentas> asmenys_vargsiukai;
        std::vector<studentas> asmenys_kietakai;

// #1
// Paprasta realizacija
        if(pasirinkimas == "1"){

            for(int i =0; i < asmenys.size();i++){

                if(asmenys[i].getGalutinis_balas() >= 5.0){
                    asmenys_kietakai.push_back(asmenys[i]);
                }
                else{
                asmenys_vargsiukai.push_back(asmenys[i]);
                }
            }
        }

// #2
// std::copy_if naudojamas
        else if(pasirinkimas == "2"){
            std::copy_if(asmenys.begin(), asmenys.end(), std::back_inserter(asmenys_kietakai),
            [](const studentas& stud) { return stud.getGalutinis_balas() >= 5.0; });

            std::copy_if(asmenys.begin(), asmenys.end(), std::back_inserter(asmenys_vargsiukai),
            [](const studentas& stud) { return stud.getGalutinis_balas() < 5.0; });
        }
    // ištrina bendrą vektorių, kadangi nebenaudojame

        for(int i = 0; i < asmenys.size();i++){
            asmenys[i].getPazymiai().clear();
        }
        asmenys.clear();

        auto end_rusiavimas = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff_rusiavimas = end_rusiavimas-start_rusiavimas;
        std::cout << "Studentų dalijimas į 2-i grupes: "<< diff_rusiavimas.count() << " s\n";  

    // Sukuria du naujus failus su atrūšiuotais studentais

        auto start_failai = std::chrono::high_resolution_clock::now(); auto st3=start_failai;

        failo_irasymas_paprastai("badBoys.txt",asmenys_vargsiukai);
        failo_irasymas_paprastai("coolBoys.txt",asmenys_kietakai);

        auto end_failai = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff_failai = end_failai-start_failai;
        std::cout << "Padalintų studentų išvedimas į 2-u naujus failus: "<< diff_failai.count() << " s\n";  
    }
// STRATEGIJA NR.1 PABAIGA
//--------------------------------------------------------------------------------------------------------------------
// STRATEGIJA NR.2 PRADŽIA          (Bendro konteinerio suskaidymas tik į 1-ą naują)

    else if(pasirinkimas == "3" || pasirinkimas == "4" || pasirinkimas == "5"){

        std::vector<studentas> asmenys_vargsiukai;

// #1
// Paprastas grupių dalinimas
        if(pasirinkimas == "3"){

            int vektoriaus_dydis = asmenys.size();

            for(int i = vektoriaus_dydis - 1 ;i >= 0;i--){

                if(asmenys[i].getGalutinis_balas() >= 5.0){
                    continue;
                }
                else{
                    asmenys_vargsiukai.insert(asmenys_vargsiukai.begin(),asmenys[i]);
                    asmenys.erase(asmenys.begin() + i);
                }
            }
        }
// #2
// grupių dalinimas su std::partition
        else if(pasirinkimas == "4"){

            auto iteratorius = std::partition(asmenys.begin(), asmenys.end(), [](const studentas& asmuo) {
            return asmuo.getGalutinis_balas() >= 5.0;
            });

            for (auto i = iteratorius; i != asmenys.end(); ++i) {
                asmenys_vargsiukai.push_back(*i);
            }
            asmenys.erase(iteratorius, asmenys.end());
        }
// #3
// grupių dalinimas su std::remove_if
        else if(pasirinkimas == "5"){

            auto iteratorius = std::remove_if(asmenys.begin(), asmenys.end(), [](const studentas& asmuo) {
            return asmuo.getGalutinis_balas() >= 5.0;
            });

            asmenys_vargsiukai.insert(asmenys_vargsiukai.begin(), iteratorius, asmenys.end());
            asmenys.erase(iteratorius, asmenys.end());
        }

     auto end_rusiavimas = std::chrono::high_resolution_clock::now();
     std::chrono::duration<double> diff_rusiavimas = end_rusiavimas-start_rusiavimas;
     std::cout << "Studentų dalijimas į 2-i grupes: "<< diff_rusiavimas.count() << " s\n";  

    // Sukuria du naujus failus su atrūšiuotais studentais

     auto start_failai = std::chrono::high_resolution_clock::now(); auto st3=start_failai;

     failo_irasymas_paprastai("badBoys.txt",asmenys_vargsiukai);
     failo_irasymas_paprastai("coolBoys.txt",asmenys);

    auto end_failai = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff_failai = end_failai-start_failai;
    std::cout << "Padalintų studentų išvedimas į 2-u naujus failus: "<< diff_failai.count() << " s\n";  
    }

// STRATEGIJA NR.2 PABAIGA
//--------------------------------------------------------------------------------------------------------------------

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end-start;
    std::cout << "\nVisos programos veikimo laikas: "<< diff.count() << " s\n\n";  
    std::cout << "--------------------------------\n";
    std::cout << "Failas sėkmingai nuskaitytas!\n\n";
};

int failo_studentu_nustatymas(){

    int studentu_skaicius;
    std::cout << "\nKiek studentų turėtų būti faile?\n";
    std::cout << "Studentų skaičius:  ";

    std::cin >> studentu_skaicius;
    while(studentu_skaicius < 1 || studentu_skaicius > 10000000){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nStudentų skaičius gali būti tik tarp 1-10000000!\n";
        std::cout << "Studentų skaičius:  ";
        std::cin >> studentu_skaicius;
    }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return studentu_skaicius;
}

int failo_pazymiu_nustatymas(){

    int pazymiu_skaicius;
    std::cout << "\nKiek pažymių turės kiekvienas studentas?\n";
    std::cout << "Pažymių skaičius:  ";

    // Galime nustatyti kiek norima turėti pažymių
    // Apsisaugo, kad nebūtų pvž. 1000000

    std::cin >> pazymiu_skaicius;
    while(pazymiu_skaicius < 1 || pazymiu_skaicius > 50){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nPažymių skaičius gali būti tik tarp 1-20!\n";
        std::cout << "Pažymių skaičius:  ";
        std::cin >> pazymiu_skaicius;
    }
    
    // didinam pažymių skaičių, nes egzaminas irgi įskaitytas

    return pazymiu_skaicius + 1;
}

void failo_sukurimas(){

    // Atsitiktinis skaičių generavimas pažymiams, kviečiame funkcijas, kur gauname iš vartotojo
    // kokio dydžio failo jis nori ir kiek pažymių kiekvienas studentas turės

    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> pazymys(1, 10);
    int studentu_skaicius = failo_studentu_nustatymas();
    int pazymiu_skaicius = failo_pazymiu_nustatymas();
    int eilutes_ilgis = pazymiu_skaicius + 2;

    std::cout << "\n---------------- Irasomi duomenys.... ----------------\n";

    // Pradedamas skaičiuoti programos spartos laikas

    auto start = std::chrono::high_resolution_clock::now(); auto st=start;

    // Darbas su failais. Sukuria naują failą į "failai" direktoriją.
    // Pirmas for ciklas skirtas failo antraštei, o kitas for ciklas
    // jau įrašo vartotojo norimą įrašų kiekį su pažymiais

    std::string naujo_failo_pavadinimas = "./failai/studentai" + std::to_string(studentu_skaicius) + ".txt";
    std::ofstream kuriamas_failas(naujo_failo_pavadinimas);

    std::ostringstream buferis;

    // Naujame faile "i" yra INDEKSAS. i=0 skirtas vardui; i=1 skirtas pavardei, paskutinis egzaminui

    for(int i = 0; i < eilutes_ilgis; i++){
        if(i==0){
            buferis << std::setw(25) << std::left << "Vardas";
        }
        else if(i==1){
            buferis << std::setw(25) << std::left << "Pavarde";
        }
        else if(i== eilutes_ilgis - 1){
            buferis << "Egz."<< std::endl;
        }
        else{
         buferis << std::setw(10) << std::left << "ND" + std::to_string(i - 1);
        }
    }

    // Kuriamas naujas failas formatu vardas1 , vardas2 ir t.t.
    // i+1 skirtas, kad atvaizduotų tinkamą skaičių prie vardo/pavardės
    // eilutes_ilgis - 1 skirtas patikrinti ar tai yra paskutinis eilutės įrašas, kuriame galima įrašyti egzamino rezultatą

    for(int i = 0; i < studentu_skaicius; i++){
        for(int j=0; j < eilutes_ilgis; j++){
            if(j==0){
                buferis << std::setw(25) << std::left << "Vardas" + std::to_string(i+1);
            }
            else if(j==1){
                buferis << std::setw(25) << std::left << "Pavarde" + std::to_string(i+1);
            }
            else if(j== eilutes_ilgis - 1){
                buferis << pazymys(eng) << std::endl;
            }
            else{
                buferis << std::setw(10) << std::left << pazymys(eng);
            }
        }
    }

    kuriamas_failas << buferis.str();
    kuriamas_failas.close();

    auto end_new_file = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff_new_file = end_new_file-start; // Skirtumas (s)
    std::cout << "\nNaujo failo sukūrimo laikas: \n"<< diff_new_file.count() << " s\n";
    std::cout << "\nFailas sėkmingai sukurtas!\n";  

};

void programos_pradzia(){

    std::string vartotojo_pasirinkimas = irasymo_pasirinkimas();

    if(vartotojo_pasirinkimas == "1"){

        std::cout << "\n--------------------------------\n";
        std::cout << "DUOMENŲ ĮVEDIMAS SAVARANKIŠKAI\n";
        std::cout << "--------------------------------\n\n";

        do{
            prideti_mokini();
            if(asmenys.size() == 0){
                std::cout << "\nTurite ivesti bent viena mokini!\n\n";
            }
        }while(asmenys.size() == 0);
        rezultatu_vaizdavimas();  
    }

    else if(vartotojo_pasirinkimas == "2"){

        std::cout << "\n--------------------------------\n";
        std::cout << "      FAILO NUSKAITYMAS\n";
        std::cout << "--------------------------------\n";

        std::cout << "\nPasirinkite norimą failo nuskaitymo strategiją:\n";
        std::cout << "\nStrategija NR.1 - Bendro konteinerio skaidymas į 2-u naujus";
        std::cout << "\nStrategija NR.2 - Bendro konteinerio skaidymas tik į 1-ą naują\n";
        std::cout << "\n[1]- Pirma strategija ( paprasta realizacija )\n";
        std::cout << "[2]- Pirma strategija ( su std::copy_if algoritmu )\n";
        std::cout << "[3]- Antra strategija ( paprasta realizacija )\n";
        std::cout << "[4]- Antra strategija ( su std::partition algoritmu )\n";
        std::cout << "[5]- Antra strategija ( su std::remove_if algoritmu )\n";
        std::cout<< "Jūsų pasirinkimas:  ";

        std::string ivestis;
        std::cin >> ivestis;

        while(ivestis != "1" && ivestis != "2" && ivestis != "3" && ivestis != "4" && ivestis != "5"){
            std::cout<< "\nGalite pasirinkti tik [1], [2], [3], [4] arba [5]!\n";
            std::cout<< "Jūsų pasirinkimas:  ";
            std::cin >> ivestis;
            std::cout << std::endl;
        }

        failo_nuskaitymas(ivestis);
    }
    
    else if(vartotojo_pasirinkimas == "3"){

        std::cout << "\n--------------------------------\n";
        std::cout << "      FAILO SUKŪRIMAS\n";
        std::cout << "--------------------------------\n";
        failo_sukurimas();
        programos_pradzia();
    }
};