#include "fraction.h"










int main()
{

Fraction r1(1,2);
Fraction r2(1,3);
Fraction r3;


afficher(r1+r2);
afficher(r1-r2);
afficher(r1*r2);
afficher(r1.inverse());
afficher(r1/r2);
r2+=r1;
afficher(r2+=r1);
cout<<r1<<r2;
return 0;
}

















