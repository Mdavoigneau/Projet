#ifndef REGISTRE_H
#define REGISTRE_H

class Registre{
  private:
    std::map <std::string, Patient> registrePatients;

  public:
    Registre();
    ~Registre();

    int Ajout(const Patient& p);
    void afficherRegistre() ;
};

#endif
