#ifndef COMPTE_H
#define COMPTE_H
#include <iostream>
#include <string>
using namespace std;

class Compte{

private:

unsigned long int numero;
string nomTitulaire;
float solde;


public:

//constructeur
Compte(unsigned long int, string, float);

void consulter();
float seuil();

void deposer(float);
void retirer(float);







};




#endif

