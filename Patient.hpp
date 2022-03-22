#ifndef PATIENT_H
#define PATIENT_H

class Patient
{
private:
    std::string nom;
    std::string prenom;
    std::string idSecu;
    std::string tel;
    std::string portable;
    unsigned int numero;
    std::string rue;
    std::string ville;
    unsigned int CP;

public:
    Patient(std::string _nom_,
            std::string _prenom_,
            std::string _idSecu_,
            std::string _tel_,
            std::string _portable_,
            int _numero_,
            std::string _rue_,
            std::string _ville_,
            int _CP_);
            
    ~Patient();

    void afficherPatient() const;
    std::string numeroSecu() const;
    void affiche() const;
};

#endif
