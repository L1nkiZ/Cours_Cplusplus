#include "Chaine.h"


int main(){
Chaine ch1;
Chaine ch2('a');
Chaine ch3("toto");
Chaine ch4(ch3);
ch1=ch2;
ch2.afficher();
ch1.afficher();
ch3.afficher();
ch4.afficher();
return 0;
};







