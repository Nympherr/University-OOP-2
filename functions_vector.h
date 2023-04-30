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
 
class studentas {

    private:

        std::string vardas, pavarde;
        std::vector<int> pazymiai;
        int egzaminas;
        double galutinis_balas, mediana;

    public:

        // Getteriai
        inline std::string getVardas() const { return vardas; }
        inline std::string getPavarde() const { return pavarde; }
        std::vector<int> getPazymiai() const { return pazymiai; }
        int getEgzaminas() const { return egzaminas; }
        double getGalutinis_balas() const { return galutinis_balas; }
        double getMediana() const { return mediana; }

        // Setteriai
        void setVardas(const std::string& vardas);
        void setPavarde(const std::string& pavarde);
        void setPazymiai(const int& pazymys);
        void setEgzaminas(const int& egzaminas);

        void atsitiktiniu_reiksmiu_generavimas(studentas& asmuo);
        void medianos_skaiciavimas(studentas& asmuo);
        void galutinio_balo_skaiciavimas(studentas& asmuo);
        void pazymiu_suvedimas(studentas& asmuo);
        void egzamino_suvedimas(studentas& asmuo);
        static bool pavardes_rusiavimas(const studentas& asmuo1, const studentas& asmuo2);
        static bool galutinio_balo_rusiavimas(const studentas& asmuo1, const studentas& asmuo2);

    studentas();
    ~studentas();
};

extern int mokiniu_dydis;
extern std::vector <studentas> asmenys;

void duomenu_suvedimas(studentas& asmuo);
void vidurkio_vaizdavimas(std::vector<studentas> &asmuo);
void medianos_vaizdavimas(std::vector<studentas> &asmuo);
void rezultatu_vaizdavimas();
void prideti_mokini();
std::string irasymo_pasirinkimas();
void failo_studento_nuskaitymas();
void failo_nuskaitymas(std::string pasirinkimas);
int failo_studentu_nustatymas();
int failo_pazymiu_nustatymas();
void failo_sukurimas();
void programos_pradzia();

#endif