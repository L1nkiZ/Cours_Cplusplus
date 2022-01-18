#include "Chaine.h"
#include <string.h>

Chaine::Chaine(){
tab=new char[1];
tab[0]='\0';
};

Chaine::Chaine(char c){
tab=new char[1];
tab[0]=c;
tab[1]='\0';
};

Chaine::Chaine(char* s){
tab=new char[strlen(s)+1];
strcpy(tab,s);
};

Chaine::Chaine(const Chaine& ch){
tab=new char[strlen(ch.tab)+1];
strcpy(tab, ch.tab);
};




