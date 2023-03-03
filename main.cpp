// v0.3 versijos programa

#include "functions.h"

int main(){

// Programos paleidimas

    std::string vartotojo_pasirinkimas = irasymo_pasirinkimas();
    
    if(vartotojo_pasirinkimas == "sav"){
        do{
            prideti_mokini();
            if(asmenys.size() == 0){
                std::cout << "\nTurite ivesti bent viena mokini!\n\n";
            }
        }while(asmenys.size() == 0);
    }

    else if(vartotojo_pasirinkimas == "failas"){
        failo_nuskaitymas();
        return 1;
    }

    rezultatu_vaizdavimas();
    return 1;
};