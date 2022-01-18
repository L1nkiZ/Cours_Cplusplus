#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    int *p;
    cout << "La valeur de x est = " << x << endl;
    cout << "L'adresse de x est = " << &x << endl;

    p = &x;

    cout << "j'affiche p " << p << endl;
    cout << "J'affiche le contenu du pointeur p" << *p << endl;
}  