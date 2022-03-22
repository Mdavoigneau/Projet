#include "Patient.cpp"
#include "Registre.cpp"

int main(){
    Registre r1;
    Patient p1("Holeczy", "Romain", "0101365718351", "075187351861", "0671834917", 167, "Belleville", "Bordeaux", 33000);
    r1.Ajout(p1);
    Patient p2("Gibier", "Alice", "01013109561731", "075184751861", "0681634917", 9, "Coq", "Anglet", 64600);
    r1.Ajout(p2);
    r1.afficherRegistre();
    return 1;
}