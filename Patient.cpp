#include <iostream>

#include "Patient.hpp"

using namespace std;

Patient::Patient(
    string _nom_,
    string _prenom_,
    string _idSecu_,
    string _tel_,
    string _portable_,
    unsigned int _numero_,
    string _rue_,
    string _ville_,
    unsigned int _CP_)
    
    {
        nom = _nom_;
        prenom = _prenom_;
        idSecu = _idSecu_;
        tel = _tel_;
        portable = _portable_;
        numero = _numero_;
        rue = _rue_;
        ville = _ville_;
        CP = _CP_;
    }

Patient::~Patient(){
    cout << "Patient supprimé" << endl;
}

void Patient::afficherPatient() const{
}

string Patient::numeroSecu() const{
    return this->idSecu;
}

void Patient::affiche() const{
  cout << nom << endl;
  cout << prenom << endl;
}
