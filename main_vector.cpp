// v2.0 versijos programa

#include "functions_vector.h"

int main(){                                                                                                     

//----------Rule of five testavimas-----------------

    //konstruktorius
    studentas s1("Bulis", "Bumbulas", {10, 10, 10, 10, 10}, 10, 10, 10);

    //kopijavimo konstruktorius
    studentas s2(s1);

    //kopijavimo priskyrimo operatorius
    studentas s3;
    s3 = s2;

    // move konstruktorius
    studentas s4(std::move(s3));

    // move priskyrimo operatorius
    studentas s5;
    s5 = std::move(s4);

    std::cout << "S1: " << s1.getVardas() << " " << s1.getPavarde() << " " << s1.getEgzaminas() << " " << s1.getGalutinis_balas() << " " << s1.getMediana() << std::endl;
    std::cout << "S2: " << s2.getVardas() << " " << s2.getPavarde() << " " << s2.getEgzaminas() << " " << s2.getGalutinis_balas() << " " << s2.getMediana() << std::endl;
    std::cout << "S3: " << s3.getVardas() << " " << s3.getPavarde() << " " << s3.getEgzaminas() << " " << s3.getGalutinis_balas() << " " << s3.getMediana() << std::endl;
    std::cout << "S4: " << s4.getVardas() << " " << s4.getPavarde() << " " << s4.getEgzaminas() << " " << s4.getGalutinis_balas() << " " << s4.getMediana() << std::endl;
    std::cout << "S5: " << s5.getVardas() << " " << s5.getPavarde() << " " << s5.getEgzaminas() << " " << s5.getGalutinis_balas() << " " << s5.getMediana() << std::endl;

    programos_pradzia();
    return 1;
    
};