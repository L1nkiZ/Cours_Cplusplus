    #include <iostream>
using namespace std;

//------------------------------------------------
//Voici ma structure 
// Vecteur 3D
//------------------------------------------------

struct Vecteur
{
    double x;
    double y;
    double z;
};

//------------------------------------------------
// Fonction qui cree un vecteur 3D
// Entrees : a,b,c qui sont trois reels, 3 doubles  
// Sortie : Rien -> neant
// Return : Le vecteur cree
//------------------------------------------------

Vecteur CreeVecteur (const double& a = 0, const double& b = 0, const double& c = 0)
{
   Vecteur resultat;
   resultat.x=a;
   resultat.y=b;
   resultat.z=c;
   return resultat;
};

//------------------------------------------------
// Fonction qui cree un vecteur 3D à partir de 
// valeur saisies au clavier
// Entrees : neant  
// Sortie : Rien -> neant
// Return : Le vecteur cree
//------------------------------------------------

Vecteur SaisirVecteur ()
{
   Vecteur resultat;
   cout << "entrer la valeur de x";
   cin >> resultat.x;
   cout << "entrer la valeur de y";
   cin >> resultat.y;
   cout << "entrer la valeur de z";
   cin >> resultat.z;
   return resultat;
}


//------------------------------------------------
//Fonction qui affiche un vecteur 
//Entrees : v qui est un vecteur de trois reels
// Sortie : Aucun parametre de sortie -> neant
// return : void -> rien
//------------------------------------------------

void afficher (Vecteur v)
{
    cout << "(" << v.x << "," << v.y << "," << v.z << ")";
    cout << endl;
}

//------------------------------------------------
//Fonction main
//------------------------------------------------

int main()
{
    Vecteur test, test2, u1, u2, u3;
    test = CreeVecteur (1 , 2, 3);
    
    u1 = CreeVecteur();         //u1 = (0,0,0)
    u2 = CreeVecteur(10);       // u2 = (10,0,0)
    u3 = CreeVecteur(20,20);    //u3 = (20,20,0)

    //afficher(test);
    //afficher(test2);
    afficher(u1);
    afficher(u2);
    afficher(u3);

    return 0;
}