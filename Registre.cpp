#include <string>
#include <iostream>
#include <map> 

#include "Patient.hpp"
#include "Registre.hpp"

using namespace std;

Registre::Registre(){}

Registre::~Registre(){
    cout << "Registre supprimé." << endl;
}

int Registre::Ajout(const Patient& p){
    registrePatients.insert(make_pair(p.numeroSecu(), p));
    return 1;
}

void Registre::afficherRegistre(){
    map<string, Patient>::iterator it;
    
    for(it = registrePatients.begin(); it != registrePatients.end(); it++){
      cout << it->first << ':' << std::endl;
      it->second.affiche();
    }
}
