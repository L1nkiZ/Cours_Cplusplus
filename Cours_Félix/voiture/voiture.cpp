#include "voiture.h"


//constructeur
Voiture::Voiture(string mq, string ml, string num, double prixini)
{
marque=mq;
modele=ml;
numero=num;
prixinitial=prixini;
}

//getters
string Voiture::getMarque(){
return this->marque;
}


string Voiture::getModele(){
return this->modele;
}


string Voiture::getNumero(){
return this->numero;
}


double Voiture::getPrixInitial(){
return this->prixinitial;
}


//setters
void Voiture::setMarque(string marque){
this->marque=marque;
}


void Voiture::setModele(string modele){
this->modele=modele;
}


void Voiture::setNumero(string numero){
this->numero=numero;
}


void Voiture::setPrixInitial(double prixinitial){
this->prixinitial=prixinitial;
}



//Fonction prixreel qui calcule le prix reel en fonction du taux entré en parametre
double Voiture::prixreel(double taux){
return prixinitial*(1+taux);
}



// affichage

void Voiture::afficher(){
cout<<"------------------"<<endl;
cout<<"marque: "<<this->marque<<endl;
cout<<"modele: "<<this->modele<<endl;
cout<<"numero: "<<this->numero<<endl;
cout<<"prixinitial: "<<this->prixinitial<<endl;
cout<<"------------------"<<endl;
}










