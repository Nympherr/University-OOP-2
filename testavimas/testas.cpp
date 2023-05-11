#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../functions_vector.h"

bool pavardes_rusiavimas(const studentas& asmuo1, const studentas& asmuo2){
    return asmuo1.getPavarde() < asmuo2.getPavarde();
};

TEST_CASE("Rūšiavimas pagal pavardę") {
    studentas asmuo1;
    asmuo1.setPavarde("Petraitis");

    studentas asmuo2;
    asmuo2.setPavarde("Jonaitis");

    studentas asmuo3;
    asmuo3.setPavarde("Kubilaitis");

    SECTION("Pirma pavardė aukščiau") {
        REQUIRE(pavardes_rusiavimas(asmuo2, asmuo1) == true);
        REQUIRE(pavardes_rusiavimas(asmuo1, asmuo2) == false);
        REQUIRE(pavardes_rusiavimas(asmuo3, asmuo1) == true);
    }

    SECTION("Antra pavardė aukščiau") {
        REQUIRE(pavardes_rusiavimas(asmuo1, asmuo3) == false);
        REQUIRE(pavardes_rusiavimas(asmuo2, asmuo3) == true);
        REQUIRE(pavardes_rusiavimas(asmuo3, asmuo2) == false);
    }

    SECTION("Pavardės lygios") {
        studentas asmuo4;
        asmuo4.setPavarde("Petraitis");

        REQUIRE(pavardes_rusiavimas(asmuo1, asmuo4) == false);
        REQUIRE(pavardes_rusiavimas(asmuo4, asmuo1) == false);
    }
}

TEST_CASE("studento konstruktorius") {
    SECTION("Konstruktorius su parametrais") {
        std::vector<int> pazymiai = {8, 9, 7};
        studentas s("Jonas", "Jonaitis", pazymiai, 10, 9.5, 8.7);
        REQUIRE(s.getVardas() == "Jonas");
        REQUIRE(s.getPavarde() == "Jonaitis");
        REQUIRE(s.getPazymiai() == pazymiai);
        REQUIRE(s.getEgzaminas() == 10);
        REQUIRE(s.getGalutinis_balas() == 9.5);
        REQUIRE(s.getMediana() == 8.7);
    }
}