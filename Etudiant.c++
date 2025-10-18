#include <iostream>
#include <string>
using namespace std;

class Etudiant {
private:
    string nom;
    string cin;
    float note;

public:
    void setNom(string n);
    void setCin(string c);
    void setNote(float n);

    string getNom();
    string getCin();
    float getNote();

    void afficher();
};

void Etudiant::setNom(string n) { nom = n; }
void Etudiant::setCin(string c) { cin = c; }
void Etudiant::setNote(float n) { note = n; }

string Etudiant::getNom() { return nom; }
string Etudiant::getCin() { return cin; }
float Etudiant::getNote() { return note; }

void Etudiant::afficher() {
    cout << "Étudiant : " << nom << " (CIN: " << cin << ") - Note : " << note << endl;
}

class Filiere {
private:
    string nomFiliere;
    Etudiant etudiant;

public:
    void setNomFiliere(string nf);
    void setEtudiant(Etudiant e);
    void afficher();
};

void Filiere::setNomFiliere(string nf) { nomFiliere = nf; }
void Filiere::setEtudiant(Etudiant e) { etudiant = e; }

void Filiere::afficher() {
    cout << "Filière : " << nomFiliere << endl;
    etudiant.afficher();
}

int main() {
    Etudiant e;
    e.setNom("Yassine");
    e.setCin("C78912");
    e.setNote(15.5);

    Filiere f;
    f.setNomFiliere("Génie Informatique");
    f.setEtudiant(e);

    f.afficher();
    return 0;
}
