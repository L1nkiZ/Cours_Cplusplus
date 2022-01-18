#include "Duree.h"

void Duree::Saisir() {
   cout << "Entrer les heures : "; 
   cin >> heure;
   cout<< "Entrer les minutes : "; 
   cin >> minute;
   cout<< "Entrer les secondes : "; 
   cin >> seconde;
}

void Duree::Afficher() {
   cout << " Heures = " << heure << endl;
   cout << " Minutes = "<< minute << endl;
   cout << " Secondes = " << seconde << endl;
}


int Duree::DureeToSeconde() {
   int resultat;
   resultat = heure*3600 + minute*60 + seconde;
   return resultat;
}


void Duree::SecondeToDuree(int n) {
   heure = n / 3600;
   minute = (n % 3600) /60;
   seconde = n % 60;
}