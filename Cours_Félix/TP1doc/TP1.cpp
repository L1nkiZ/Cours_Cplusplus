#include <iostream>
using namespace std ;
#include <math.h>


//Entre n notes dans un tableau
//entree: tab :Tableau vide de dix elements
//          n :nombre effectif de valeurs
//Sortie: tab :rempli avec n notes
//return : void


void LireNotes(int tab[], int n){
   int compteur=0;
   while (compteur<n){
      do{
         cout<<"entrer la note numero"<<compteur;
         cin>>tab[compteur];}
      while((tab[compteur]<0) || (tab[compteur]>20));
      compteur++;
   };
};



//fonction qui affiche un tableau

void afficher(int Tab[],int dim){
   for(int i=0; i<dim; i++)
      cout<<Tab[i]<<"|";
   cout<<endl;
}


//fonction qui retourne la moyenne des n premieres valeurs dans tab

float moyenne(int tab[], int n){
   float somme=0;
   for (int i=0;i<n;i++){
      somme=somme+tab[i];
   };
   return somme/n;
}


//fonction qui retourne la moyenne des carres des n premieres valeurs dans tab

float moyenne_carres(int tab[], int n){
   float somme=0;
   for (int i=0;i<n;i++){
      somme=somme+(tab[i]*tab[i]);
   };
   return somme/n;
}





//fonction qui retourne le minimum des n premieres valeurs dans tab

int min(int tab[],int n){
   int rep=20;
   for(int i=0;i<n;i++){
      if(tab[i]<rep){
         rep=tab[i];
      };
   };
   return rep;
}


//fonction qui retourne le maximum des n premieres valeurs dans tab

int max(int tab[],int n){
   int rep=0;
   for(int i=0;i<n;i++){
      if(tab[i]>rep){
         rep=tab[i];
      };
   };
   return rep;
}


//fonction qui retourne l'écart type des n premieres valeurs dans tab 

float Ecart(int tab[],int n){
  float moy=moyenne(tab,n);
   return (moyenne_carres(tab,n)-(moy*moy));
}





int main(){
   int T[10] , n ;
   cout<<" Entrer le nombre de notes ";
   cin>> n;
   LireNotes(T,n);
   cout << "La moyenne est " << moyenne(T,n)<<endl;
   cout << "Le minimum est " << min(T,n)<<endl;
   cout << "Le maximum est " << max(T,n)<<endl;
   cout << "L'ecart type est " << Ecart(T,n);
   return 0 ;
}












