#ifndef CHAINE_H
#define CHAINE_H
#include <iostream>
#include <string.h>
using namespace std;


class Chaine{


private:

char* tab;


public:

Chaine();
Chaine(char);
Chaine(const char*);
Chaine(const Chaine&);

//destructeur (libère la mémoire)
~Chaine();


void afficher()const;

//surcharge de = (affectation)
Chaine& operator=(const Chaine&);






};























#endif