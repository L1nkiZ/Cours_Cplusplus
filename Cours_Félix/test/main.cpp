#include "Employe.h"

int main()
{
   Employe E3;
   Employe* E2;
   Employe E1("Dupont",1986,2300); // Employe
   E1.afficher();
   E2= new Employe("Durand",2000,4500);
   E2->afficher();
   return 0;
}




























