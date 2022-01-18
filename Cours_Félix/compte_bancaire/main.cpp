#include "compte.h"


int main(){

Compte c1=Compte(123,"Mr Durand",1000.);
c1.deposer(100.);
c1.consulter();


Compte c2=Compte(234,"Mr Dupont", 5500.);
c2.retirer(200);
c2.consulter();






return 0;
}












