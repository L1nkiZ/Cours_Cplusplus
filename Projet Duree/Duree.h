#ifndef DUREE_H
#define DUREE_H

#include <iostream>

using namespace std;

struct Duree {
   int heure;
   int minute;
   int seconde;
   void Saisir();
   void Afficher();
   int DureeToSeconde();
   void SecondeToDuree(int n);
}; 

#endif