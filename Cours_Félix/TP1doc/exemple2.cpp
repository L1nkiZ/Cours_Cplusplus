#include <iostream>
using namespace std;



struct Personne{

   string nom;
   string prenom;
   int age;

};


//Fonction initialiser
//Entree : string,string,int
//Sortie : neant
//Return : Personne

Personne initialiser(string nom, string prenom , int age)
{
   Personne p;
   p.nom=nom;
   p.prenom=prenom;
   p.age=age;
      
   return p;
}


//Fonction afficher
//Entree : Personne
//Sortie : neant
//return : void

void afficher(Personne p){
   cout << "Nom : "<< p.nom << endl;
   cout << "Prenom : "<< p.prenom << endl;
   cout << "Age : "<< p.age << endl;
}




int main(){

   Personne p;
   p=initialiser("exemple","jean-pierre",34);
   afficher(p);

   return 0;}






















