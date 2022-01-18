#include "fraction.h"


Fraction::Fraction(int numerateur, int denominateur){
this->numerateur=numerateur;
this->denominateur=denominateur;
};


//Fraction::Fraction(int numerateur){
//this->numerateur=numerateur;
//this->denominateur=1;
//};

//Fraction::Fraction(){
//this->numerateur=0;
//this->denominateur=1;
//};


int Fraction::get_numerateur()const{
return this->numerateur;
};

int Fraction::get_denominateur()const{
return this->denominateur;
};


void Fraction::set_numerateur(int numerateur){
this->numerateur=numerateur;
};

void Fraction::set_denominateur(int denominateur){
this->denominateur=denominateur;
};



Fraction Fraction::operator+(const Fraction& ajout)const{
int nouveau_numerateur=this->numerateur*ajout.get_denominateur()+this->denominateur*ajout.get_numerateur();
int nouveau_denominateur=ajout.get_denominateur()*this->denominateur;
Fraction resultat=Fraction(nouveau_numerateur, nouveau_denominateur);
return resultat;
};

Fraction Fraction::operator-(const Fraction& ajout)const{
int nouveau_numerateur=this->numerateur*ajout.get_denominateur()-(this->denominateur*ajout.get_numerateur());
int nouveau_denominateur=ajout.get_denominateur()*this->denominateur;
Fraction resultat=Fraction(nouveau_numerateur, nouveau_denominateur);
return resultat;
};

Fraction Fraction::operator*(const Fraction& facteur)const{
return Fraction(this->numerateur*facteur.get_numerateur(), this->denominateur*facteur.get_denominateur());
};

Fraction Fraction::inverse()const{
return Fraction(denominateur, numerateur);
};

Fraction Fraction::operator/(const Fraction& diviseur)const{
return *this*(diviseur.inverse());
};

const Fraction& Fraction::operator++(){
this->set_numerateur(this->get_numerateur()+this->get_denominateur());
return *this;
};

Fraction& Fraction::operator+=(const Fraction& ajout){
this->numerateur=this->numerateur*ajout.denominateur+ajout.numerateur*this->denominateur;
this->denominateur=this->denominateur*ajout.denominateur;
return *this;
};

bool Fraction::operator==(const Fraction& r) const{
return this->numerateur*r.denominateur==this->denominateur*r.numerateur;
};





void Fraction::simplifier(){
int diviseur=pgcd(numerateur, denominateur);
numerateur=numerateur/diviseur;
denominateur=denominateur/diviseur;
};







void Fraction::afficher()const{
cout<< numerateur << "/" << denominateur <<endl;
};



void Fraction::afficher(ostream& os)const{
os<<numerateur<<"/"<<denominateur<<endl;
};


void afficher(const Fraction& r){
r.afficher();
};

int pgcd(int a, int b){
if (a==0) return b;
return pgcd(b%a, a);
};

ostream& operator<<(ostream& os, const Fraction& r){
r.afficher(os);
return os;
};







