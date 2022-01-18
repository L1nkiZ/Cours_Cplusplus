#include <iostream>
using namespace std ;


//Fonction somme

int somme(int x, int y)
{
   return x+y;
}


//Fonction produit

int produit(int x, int y)
{
   return x*y;
}




//Programme principal

int main()
{
int nb1, nb2;
cout << "Entrer le premier nombre" ;
// Je saisis le nombre nb1
cin>> nb1;

cout<< "Entrer le deuxieme nombre";
// Je saisis le nombre nb2
cin>> nb2;

cout << " La somme est " << somme(nb1,nb2) << endl;
cout << " Le produit est "<< produit(nb1,nb2) << endl;


   return 0;
}
