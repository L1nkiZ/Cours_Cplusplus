#include "compte.h"

Compte::Compte(unsigned long int numero, string nomTitulaire, float solde){
this->numero=numero;
this->nomTitulaire=nomTitulaire;
this->solde=solde;
};

void Compte::consulter(){
cout<<"numero: "<<this->numero<<endl;
cout<<"nomTitulaire: "<<this->nomTitulaire<<endl;
cout<<"solde: "<<this->solde<<endl;
};

float Compte::seuil(){
return 0.;
};


void Compte::deposer(float depot){
this->solde=this->solde+depot;
};

void Compte::retirer(float retrait){
this->solde=this->solde-retrait;
if (this->solde<0){
   this->solde=this->solde+retrait;
};
};












