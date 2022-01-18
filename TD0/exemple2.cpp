#include <iostream>
using namespace std;

struct Personne
{
   string nom;
   string prenom;
   int age;
};
      //--------------------------------------------------------------------------
      // Fonction initialiser
      // Entree : neant
      // Sortie : neant
      // Return : la structure Personne
      //--------------------------------------------------------------------------

/*Personne initialiser (string nom, string prenom, int age)
{
   Personne p;
   p.nom = nom;
   p.prenom = prenom;
   p.age = age;
}
*/

Personne initialiser ()
{
   Personne p;
   cout <<"Entrer le nom";
   cin >> p.nom;
   cout <<"Entrer le prenom";
   cin >> p.prenom;
   cout <<"Entrer l'Age";
   cin >> p.age;
   return p;
}

      //--------------------------------------------------------------------------
      // Fonction afficher qui affiche une personne
      // Entree : p de type personne
      // Sortie : neant
      // Return : void
      //--------------------------------------------------------------------------

void afficher (Personne p)
{
   cout << "Nom : " << p.nom << endl;
   cout << "Prenom : " << p.prenom << endl;
   cout << "Age : " << p.age << endl;
}

void afficher()
{
   cout << "C'est une autre fonction afficher" << endl;
}

int main()
{
   Personne p;
   //p = initialiser("Rousseau", "Robert", 34);
   p = initialiser();
   afficher (p);
   afficher();
   return 0;
};

