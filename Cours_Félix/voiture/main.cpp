#include "voiture.h"

int main()
{
Voiture v1("Citroen","Picasso","123VX57", 14500.);
string mq=v1.getMarque();
v1.setPrixInitial(15000);

v1.afficher();

double prixR = v1.prixreel(0.2);
cout<< "le prix reel est"<<prixR<<endl;





return 0;

}

