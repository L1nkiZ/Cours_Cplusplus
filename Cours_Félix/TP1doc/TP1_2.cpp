# include <iostream>
using namespace std;


struct Duree{
   int h=0;
   int m=0;
   int s=0;
};


void afficher(Duree temps){
   cout<<temps.h<<" heures, ";
   cout<<temps.m<<" minutes, ";
   cout<<temps.s<<" secondes."<<endl;
};


int DureeToSeconde(Duree temps){
   int rep;
   rep=(temps.h * 60 + temps.m)*60 + temps.s;
   
   return rep;
}


Duree SecondeToDuree(int secondes){
   Duree rep;
   rep.s=secondes%60;
   secondes=secondes/60;
   rep.m=secondes%60;
   rep.h=secondes/60;
   
   return rep;
}








int main(){
   Duree t;
   t=SecondeToDuree(3700);
   afficher(t);

   return 0;
}





















