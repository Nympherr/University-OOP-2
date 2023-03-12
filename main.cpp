// v0.4 versijos programa

#include "functions.h"

int main(){

// Programos paleidimas

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
    }

    else if(vartotojo_pasirinkimas == "2"){

        std::cout << "\n--------------------------------\n";
        std::cout << "      FAILO NUSKAITYMAS\n";
        std::cout << "--------------------------------\n";

        failo_nuskaitymas();
        return 1;
    }
    
    else if(vartotojo_pasirinkimas == "3"){

        std::cout << "\n--------------------------------\n";
        std::cout << "      FAILO SUKŪRIMAS\n";
        std::cout << "--------------------------------\n";

        failo_sukurimas();
        return 1;
    }

    rezultatu_vaizdavimas();
    return 1;
};