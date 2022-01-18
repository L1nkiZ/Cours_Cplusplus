#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction{

private:
   int numerateur;
   int denominateur;

public:
//constructeurs
   //Fraction();
   //Fraction(int);
   Fraction(int=0, int=1);

   int get_numerateur()const;
   int get_denominateur()const;

   void set_numerateur(int);
   void set_denominateur(int);


   Fraction operator+(const Fraction&)const;
   Fraction operator-(const Fraction&)const;
   Fraction operator*(const Fraction&)const;
   Fraction inverse()const;
   Fraction operator/(const Fraction&)const;
   const Fraction& operator++();
   Fraction& operator+=(const Fraction&);
   bool operator==(const Fraction&) const;
   

   void simplifier();
   void afficher()const;
   void afficher(ostream&)const;
};

void afficher(const Fraction&);

int pgcd(int, int);

ostream& operator<<(ostream&, const Fraction&);







#endif