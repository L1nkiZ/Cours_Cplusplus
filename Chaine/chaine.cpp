#include "Chaine.h"
#include <string.h>

Chaine::Chaine(){
tab=new char[1];
tab[0]='\0';
};

Chaine::Chaine(char c){
tab=new char[2];
tab[0]=c;
tab[1]='\0';
};

Chaine::Chaine(const char* s){
tab=new char[strlen(s)+1];
strcpy(tab,s);
};

Chaine::Chaine(const Chaine& ch){
delete [] tab;
tab=new char[strlen(ch.tab)+1];
strcpy(tab, ch.tab);
};

Chaine::~Chaine(){
delete [] tab;
};




void Chaine::afficher()const{
cout<<tab<<endl;
};



Chaine& Chaine::operator=(const Chaine& ch){
delete [] tab;
tab=new char[strlen(ch.tab)+1];
strcpy(tab,ch.tab);
return *this;
};










