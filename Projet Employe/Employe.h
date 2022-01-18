#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <iostream>
#include <string>
using namespace std;

class Employe{
private :
   string nom;
   int annee_naissance;
   double salaire;
public :
    Employe();
    Employe(string ch,int a,double s);
    string getNom();
    int getAnnee();
    int getSalaire();
    void afficher();
};
#endif