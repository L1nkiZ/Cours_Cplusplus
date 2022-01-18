#include "Duree.h"

int main(){
   Duree d;
   Duree d2;
   d.Saisir();
   d.Afficher();
   cout << endl;
   int nb = d.DureeToSeconde();
   cout << "La duree en secondes est : " <<nb << endl;
   d2.SecondeToDuree(nb);
   cout << "La duree est de ";
   d2.Afficher();
   
   return 0;
}