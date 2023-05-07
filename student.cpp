#include "functions_vector.h"

void studentas::setVardas(const std::string& vardas) {
    this->vardas = vardas;
};

void studentas::setPavarde(const std::string& pavarde) {
    this->pavarde = pavarde;
};

void studentas::setPazymiai(const int& pazymys) {
    this->pazymiai.push_back(pazymys);
};

void studentas::setEgzaminas(const int& egzaminas) {
    this->egzaminas = egzaminas;
};

void studentas::atsitiktiniu_reiksmiu_generavimas(studentas& asmuo){


// Generuojamas atsitiktinis kiekis pažymių(1-40; galima keisti). Bei kiekvienas
// individualus pažymys. Ir sukuriamas naujas masyvas, kuris būtent atvaizduoja
// studento pažymius.

    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> atsitiktinis_numeris(1, 40);
    std::uniform_int_distribution<> pazymys(1, 10);

    int pazymiu_kiekis = atsitiktinis_numeris(eng);

    for(int i =0; i < pazymiu_kiekis;i++){
        asmuo.setPazymiai(pazymys(eng));
    }

    asmuo.setEgzaminas(pazymys(eng));

    std::cout << "Sugeneruoti pazymiai: ";
    std::vector<int> sugeneruotiPazymiai = asmuo.getPazymiai();

    for(int j =0; j < pazymiu_kiekis; j++){
        std::cout << sugeneruotiPazymiai[j] << " ";
    }
    std::cout << "\nSugeneruotas egzamino rezultatas: " << asmuo.getEgzaminas() << "\n";
    std::cout << "-------------------------------------\n\n";
};

void studentas::medianos_skaiciavimas(studentas& asmuo) {

    // Skaičiuoja medianą iš studento gautų pažymių. Masyvas yra surūšiuojamas didėjimo tvarka
    // ir mediana apskaičiuojama pagal formulę.
    
    std::vector<int> pazymiai = asmuo.getPazymiai();
    std::sort(pazymiai.begin(), pazymiai.end());

    if (pazymiai.size() % 2 == 1) {
        int indeksas_medianos = (pazymiai.size() + 1) / 2;
        this->mediana = pazymiai[indeksas_medianos - 1];
    } else {
        int pirmas_vidurinis_skaicius = pazymiai.size() / 2 - 1;
        int antras_vidurinis_skaicius = pazymiai.size() / 2;
        double pazymys_pirmas = pazymiai[pirmas_vidurinis_skaicius];
        double pazymys_antras = pazymiai[antras_vidurinis_skaicius];
        this->mediana = (pazymys_pirmas + pazymys_antras) / 2;
    }
};

void studentas::galutinio_balo_skaiciavimas(studentas& asmuo){

// Skaičiuoja galutinį balą pagal pažymių vidurkį ir egzamino balą

    double vidurkis = 0.0;
    
    for(int i=0; i < asmuo.getPazymiai().size();i++){
        vidurkis += asmuo.getPazymiai()[i];
    }
    vidurkis = vidurkis / asmuo.getPazymiai().size();
    
    this->galutinis_balas = ((0.4 * vidurkis) + (0.6 * asmuo.getEgzaminas()));
};

bool studentas::pavardes_rusiavimas(const studentas& asmuo1, const studentas& asmuo2){
    return asmuo1.getPavarde() < asmuo2.getPavarde();
};

bool studentas::galutinio_balo_rusiavimas(const studentas& asmuo1, const studentas& asmuo2) {
    return asmuo1.getGalutinis_balas() > asmuo2.getGalutinis_balas();
};

void studentas::pazymiu_suvedimas(studentas& asmuo){

// Leidžia vartotojui įvesti neribotą kiekį pažymių.
    int pasirinkimas = 0;

        while(std::cin >> pasirinkimas){

            if(pasirinkimas < 1 || pasirinkimas > 10){
                std::cout << "Pažymys gali būti tik tarp 1-10!";
            }
            else{
                asmuo.setPazymiai(pasirinkimas);
            }
        }
};

void studentas::egzamino_suvedimas(studentas& asmuo){

// Leidžia vartotojui įvesti egzamino balą, bei tikrinama, kad įvestis būtų tinkama
// (pvž. ne raidės)

    int pasirinkimas;
    std::cout << "Studento egzamino rezultatas: ";
    std::cin >> pasirinkimas;

    if(pasirinkimas > 10 || pasirinkimas < 1){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nEgzamino rezultatas gali buti tik tarp 1-10!\n";
        asmuo.egzamino_suvedimas(asmuo);
    }
    else{
        asmuo.setEgzaminas(pasirinkimas);
    }
};

studentas::studentas(std::string Vardas = "", std::string Pavarde = "", std::vector<int> Pazymiai = {}, int Egzaminas = 0, double Galutinis_Balas = 0, double Mediana = 0) {
    vardas = Vardas;
    pavarde = Pavarde;
    pazymiai = Pazymiai;
    egzaminas = Egzaminas;
    galutinis_balas = Galutinis_Balas;
    mediana = Mediana;
};

studentas::studentas(const studentas& asmuo_kopijuojamas) {
    vardas = asmuo_kopijuojamas.vardas;
    pavarde = asmuo_kopijuojamas.pavarde;
    pazymiai = asmuo_kopijuojamas.pazymiai;
    egzaminas = asmuo_kopijuojamas.egzaminas;
    galutinis_balas = asmuo_kopijuojamas.galutinis_balas;
    mediana = asmuo_kopijuojamas.mediana;
}

studentas& studentas::operator=(const studentas& asmuo_kopijuojamas) {
    if (this == &asmuo_kopijuojamas) {
        return *this; 
    }
    vardas = asmuo_kopijuojamas.vardas;
    pavarde = asmuo_kopijuojamas.pavarde;
    pazymiai = asmuo_kopijuojamas.pazymiai;
    egzaminas = asmuo_kopijuojamas.egzaminas;
    galutinis_balas = asmuo_kopijuojamas.galutinis_balas;
    mediana = asmuo_kopijuojamas.mediana;
    return *this;
};

studentas::studentas(studentas&& asmuo_perkeliamas) {
    vardas = std::move(asmuo_perkeliamas.vardas);
    pavarde = std::move(asmuo_perkeliamas.pavarde);
    pazymiai = std::move(asmuo_perkeliamas.pazymiai);
    egzaminas = asmuo_perkeliamas.egzaminas;
    galutinis_balas = asmuo_perkeliamas.galutinis_balas;
    mediana = asmuo_perkeliamas.mediana;

    asmuo_perkeliamas.egzaminas = 0;
    asmuo_perkeliamas.galutinis_balas = 0;
    asmuo_perkeliamas.mediana = 0;
};

studentas& studentas::operator=(studentas&& asmuo_perkeliamas) {

    if (this != &asmuo_perkeliamas) {
        vardas = std::move(asmuo_perkeliamas.vardas);
        pavarde = std::move(asmuo_perkeliamas.pavarde);
        pazymiai = std::move(asmuo_perkeliamas.pazymiai);
        egzaminas = asmuo_perkeliamas.egzaminas;
        galutinis_balas = asmuo_perkeliamas.galutinis_balas;
        mediana = asmuo_perkeliamas.mediana;

        asmuo_perkeliamas.egzaminas = 0;
        asmuo_perkeliamas.galutinis_balas = 0;
        asmuo_perkeliamas.mediana = 0;
    }

    return *this;
}

studentas::~studentas() {
    this->pazymiai.clear();
};
