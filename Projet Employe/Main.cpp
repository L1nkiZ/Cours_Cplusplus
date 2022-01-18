#include "Employe.h"
int main()
{
    Employe *E2; // pointeur sur un Employe
    Employe E1("Dupont",1986,2300);
    Employe E3;
    E1.afficher();
    E2=new Employe("Durand",2000,4500);
    E2->afficher();
    return 0;
}