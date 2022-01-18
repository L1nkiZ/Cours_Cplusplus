#include "Employe.h"
// Methode initialiser
Employe::Employe(string ch,int a,double s){
nom=ch;
annee_naissance=a;
salaire=s;
}

// sans paramètre

Employe::Employe(){
nom="ptdr t ki ?";
annee_naissance=0;
salaire=0;
} 

    // primitives d’acces aux champs d’une personne
    string Employe::getNom(){ return nom;}
    int Employe::getAnnee(){return annee_naissance;}
    int Employe::getSalaire(){return salaire;}
    //fonction qui affiche une personne
void Employe::afficher(){
    cout<<" Personne :" << endl;
    cout<< nom<<annee_naissance<<salaire<<endl;
}