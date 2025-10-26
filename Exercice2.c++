#include <iostream>
#include <string>
using namespace std;

class Etudiant {
private:
    string nom;
    string cin;
    double note;

public:
    Etudiant() {}

    void setNom(string n) {
        nom = n;
    }

    void setCin(string c) {
        cin = c;
    }

    void setNote(double n) {
        note = n;
    }

    string getNom() {
        return nom;
    }

    string getCin() {
        return cin;
    }

    double getNote() {
        return note;
    }

    void afficher() {
        cout << "Etudiant : " << nom << " (CIN: " << cin << ") - Note : " << note << endl;
    }
};

class Filiere {
private:
    string nomFiliere;
    Etudiant etudiant;

public:
    void setNomFiliere(string nom) {
        nomFiliere = nom;
    }

    void setEtudiant(Etudiant e) {
        etudiant = e;
    }

    void afficher() {
        cout << "Filiere : " << nomFiliere << endl;
        etudiant.afficher();
    }
};

int main() {
    Etudiant e;
    e.setNom("Yassine");
    e.setCin("C78912");
    e.setNote(15.5);

    Filiere f;
    f.setNomFiliere("Genie Informatique");
    f.setEtudiant(e);

    f.afficher();
    return 0;
}
