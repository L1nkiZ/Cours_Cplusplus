#ifndef VOITURE_H
#define VOITURE_H
#include <iostream>
#include <string>
using namespace std;


class Voiture{

//attributs de la voiture
private:
string marque;
string modele;
string numero;
double prixinitial;


//méthodes de la classe voiture
public:

//constructeur
Voiture(string, string, string, double);

//getters
string getMarque();
string getModele();
string getNumero();
double getPrixInitial();


//setters
void setMarque(string);
void setModele(string);
void setNumero(string);
void setPrixInitial(double);

//Fonction prixreel qui calcule le prix reel en fonction du taux entré en parametre
double prixreel(double);

// affichage

void afficher();




};






#endif