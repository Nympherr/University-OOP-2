#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <limits>
#include <random>
#include <string>
#include <cctype>
#include <vector>
#include <fstream>
#include <chrono>

/**
 * @brief Abstrakti klasė
 */

class zmogus{

    private:
        std::string vardas, pavarde;

    public:

        /**
         * @brief Grąžina žmogaus vardą.
         * @return Vardas kaip std::string.
         */
        inline std::string getVardas() const { return vardas; }

        /**
         * @brief Grąžina žmogaus pavardę.
         * @return Pavarde kaip std::string.
         */
        inline std::string getPavarde() const { return pavarde; }

        /**
         * @brief Nustato žmogaus vardą.
         * @param vardas Vardas kaip std::string.
         */
        void setVardas(const std::string& vardas);

        /**
         * @brief Nustato žmogaus pavardę.
         * @param pavarde Pavarde kaip std::string.
         */
        void setPavarde(const std::string& pavarde);

        /**
         * @brief Virtuali informacijos funkcija, kuri turi būti realizuota kiekvienoje išvestinėje klasėje. Išveda vardą su pavarde.
         */
        virtual void informacija() = 0;

        /**
         * @brief Konstruktorius be parametrų.
         */
        zmogus(){
            vardas = " ";
            pavarde = " ";
        };

        /**
         * @brief Konstruktorius su parametrais.
         * @param Vardas Žmogaus vardas.
         * @param Pavarde Žmogaus pavardė.
         */
        zmogus(std::string Vardas, std::string Pavarde){
            vardas = Vardas;
            pavarde = Pavarde;
        };

        /**
         * @brief Destruktorius.
         */
        ~zmogus(){
            vardas.clear();
            pavarde.clear();
        };
    
};

/**
 * @class studentas
 * @brief Klasė, atvaizduojanti studentą, išvestinė iš žmogaus klasės. Studentas turi vardą, pavardę, pažymius, egzamino rezultatą, galutinį balą ir medianą.
 */
class studentas : public zmogus {

    private:

        std::vector<int> pazymiai;
        int egzaminas;
        double galutinis_balas, mediana;

    public:

        //---------------Getteriai-----------------

        /**
         * @brief Grąžina studento pažymius.
         * @return std::vector<int> pažymiai
         */
        std::vector<int> getPazymiai() const { return pazymiai; }

        /**
         * @brief Grąžina studento egzamino rezultatą.
         * @return int egzaminas
         */
        int getEgzaminas() const { return egzaminas; }

        /**
         * @brief Grąžina studento galutinį balą.
         * @return double galutinis_balas
         */
        double getGalutinis_balas() const { return galutinis_balas; }

        /**
         * @brief Grąžina studento pažymių medianą.
         * @return double mediana
         */
        double getMediana() const { return mediana; }

        /**
         * @brief Atspausdina informaciją apie studentą. (vardą ir pavardę)
         */
        void informacija();

        //-------------Setteriai-----------------

        /**
         * @brief Nustato studento pažymį.
         * @param const int& pazymys
         */
        void setPazymiai(const int& pazymys);

        /**
         * @brief Nustato studento egzamino rezultatą.
         * @param const int& egzaminas
         */
        void setEgzaminas(const int& egzaminas);

        /**
        * @brief Generuoja atsitiktines reikšmes studento pažymiams ir egzaminui.
        * @param studentas& asmuo - nuoroda į studento objektą
        */
        void atsitiktiniu_reiksmiu_generavimas(studentas& asmuo);

        /**
        * @brief Skaičiuoja medianą studento pažymių sąrašui.
        * @param studentas& asmuo - nuoroda į studento objektą
        */
        void medianos_skaiciavimas(studentas& asmuo);

        /**
        * @brief Skaičiuoja galutinį balą studentui.  Galutinis = 0.4 * vidurkis + 0.6 * egzaminas
        * @param studentas& asmuo - nuoroda į studento objektą
        */
        void galutinio_balo_skaiciavimas(studentas& asmuo);

        /**
        * @brief Suteikia galimybę vartotojui įvesti studento pažymius.
        * @param studentas& asmuo - nuoroda į studento objektą
        */
        void pazymiu_suvedimas(studentas& asmuo);

        /**
        * @brief Suteikia galimybę vartotojui įvesti studento egzamino rezultatą.
        * @param studentas& asmuo - nuoroda į studento objektą
        */
        void egzamino_suvedimas(studentas& asmuo);

        /**
        * @brief Rūšiuoja studentų sąrašą pagal pavardes abėcėlės tvarka.
        * @param const studentas& asmuo1 - pirmo studento objekto nuoroda
        * @param const studentas& asmuo2 - antro studento objekto nuoroda
        * @return bool - true, jei pirmas studentas turėtų būti prieš antrą
        */
        static bool pavardes_rusiavimas(const studentas& asmuo1, const studentas& asmuo2);

        /**
        * @brief Rūšiuoja studentų sąrašą pagal galutinį balą.
        * @param const studentas& asmuo1 - pirmo studento objekto nuoroda
        * @param const studentas& asmuo2 - antro studento objekto nuoroda
        * @return bool - true, jei pirmas studentas turėtų būti prieš antrą
        */
        static bool galutinio_balo_rusiavimas(const studentas& asmuo1, const studentas& asmuo2);

    /// @brief Konstruktorius be parametrų.
    studentas(){};

    /// @brief Konstruktorius su parametrais. Ir numatytomis reikšmėmis
    studentas(std::string Vardas, std::string Pavarde, std::vector<int> Pazymiai, int Egzaminas, double Galutinis_balas, double Mediana);

    /// @brief Kopijavimo konstruktorius
    /// @param asmuo_kopijuojamas - studento objektas, kuris yra kopijuojamas
    studentas(const studentas& asmuo_kopijuojamas);

    /// @brief kopijavimo prilyginimo operatorius
    /// @param asmuo_perkeliamas - studento objektas, kuris yra kopijuojamas
    studentas& operator=(const studentas& asmuo_kopijuojamas);

    /// @brief "move" konstruktorius
    /// @param asmuo_perkeliamas - studento objektas, kuris yra perkeliamas
    studentas(studentas&& asmuo_perkeliamas);

    /// @brief "move" prilyginimo operatorius
    /// @param asmuo_perkeliamas - studento objektas, kuris yra perkeliamas
    studentas& operator=(studentas&& asmuo_perkeliamas);

    /// @brief Destruktorius
    ~studentas();
};

extern int mokiniu_dydis;
extern std::vector <studentas> asmenys;

/**
 * @brief Duomenų suvedimas į studento objektą.
 * @param studentas& asmuo - nuoroda į studento objektą
 */
void duomenu_suvedimas(studentas& asmuo);

/**
 * @brief Studento vidurkio vaizdavimas konsolėje
 * @param studentas& asmuo - nuoroda į studento objektą
 */
void vidurkio_vaizdavimas(std::vector<studentas> &asmuo);

/**
 * @brief Studento medianos vaizdavimas konsolėje
 * @param studentas& asmuo - nuoroda į studento objektą
 */
void medianos_vaizdavimas(std::vector<studentas> &asmuo);

///@brief Studentų rezultatų vaizdavimas konsolėje (pasirinkimas: pagal galutinį balą ar medianą)
void rezultatu_vaizdavimas();

///@brief Vartotojas savarankiškai įveda ar nori pridėti mokinį
void prideti_mokini();

///@brief Vartotojo pasirinkimas kokią operaciją programos pradžioje atlikti
std::string irasymo_pasirinkimas();

///@brief Iš nuskaityto failo sukuriami studentai
void failo_studento_nuskaitymas();

/**
 * @brief Nuskaito failą į pavidalą, su kuriuo lengviau galima dirbti
 * @param std::string pasirinkimas - vartotojo pasirinkimas kurį failą nuskaityti
 */
void failo_nuskaitymas(std::string pasirinkimas);

///@brief Vartotojo pasirinkimas kiek norės, kad būtų faile studentų
int failo_studentu_nustatymas();

///@brief Vartotojo pasirinkimas kiek norės, kad būtų faile pažymių
int failo_pazymiu_nustatymas();

///@brief Leidžia vartotojui sukurti failą
void failo_sukurimas();

///@brief Programos pati pradžia
void programos_pradzia();

#endif