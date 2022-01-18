#include "Duree.h"



void Duree::Saisir(){
   cout << "Entrer les heures :"; cin >> h;
   cout << "Entrez les minutes :"; cin >> m;
   cout << "Entrez les secondes :"; cin >> s;
}

void Duree::afficher(){
   cout<<h<<" heures, ";
   cout<<m<<" minutes, ";
   cout<<s<<" secondes."<<endl;
};


int Duree::DureeToSeconde(){
   int rep;
   rep=(h * 60 + m)*60 +s;
   
   return rep;
}


void Duree::SecondeToDuree(int secondes){
   s=secondes%60;
   secondes=secondes/60;
   m=secondes%60;
   h=secondes/60;
}


























