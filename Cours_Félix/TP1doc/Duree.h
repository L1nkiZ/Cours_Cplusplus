#ifndef DUREE_H
#define DUREE_H

# include <iostream>
using namespace std;


struct Duree{
   int h=0;
   int m=0;
   int s=0;
   void Saisir();
   void afficher();
   int DureeToSeconde();
   void SecondeToDuree(int nb);
};




#endif

























