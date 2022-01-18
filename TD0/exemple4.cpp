#include <iostream>
using namespace std ;




// Structure vecteur 3D


struct Vecteur{
   double x ;
   double y ;
   double z ;
};

//Fonction qui cree un vecteur 3D
//Entrees: a,b,c (double)
//Sortie: neant
//return: le vecteur cree 

Vecteur CreeVecteur( double a=0, double b=0, double c=0)
{
   Vecteur resultat;
   resultat.x=a;
   resultat.y=b;
   resultat.z=c;
   return resultat;
};


//Fonction qui cree un vecteur 3D à partir des valeurs entrées au clavier
//Entrees:neant
//Sortie: neant
//return: le vecteur cree 

Vecteur SaisirVecteur()
{
   Vecteur resultat;
   cout<<"entrer la valeur de x";
   cin>>resultat.x;
   cout<<"entrer la valeur de y";
   cin>>resultat.y;
   cout<<"entrer la valeur de z";
   cin>>resultat.z;
   return resultat;
};



//Fonction qui affiche un vecteur
//Entrees: v (vecteur)
//Sortie: neant
//return: void

void afficher(Vecteur v)
{
   cout<<"("<<v.x<<","<<v.y<<","<<v.z<<")";
   cout<< endl;
};


//Fonction main

int main(){
   Vecteur w;
   w=CreeVecteur();
   afficher(w);
   return 0;
};



















