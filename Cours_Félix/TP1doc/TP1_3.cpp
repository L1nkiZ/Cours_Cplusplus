#include <iostream>
using namespace std ;



int* Lire(int n){
   int* rep;
   rep=new int [n];
   for(int i=0; i<n; i++){
      cout<< "Entrez l'element de la case "<<i;
      cin>>rep[i];  
   };
   return rep;
};



void afficher(int T[], int n){
   for(int i=0;i<n;i++)
      cout<<T[i]<<"|";
   cout<<endl;
};



void echange(int T[], int i, int j){
   int temp=T[i];
   T[i]=T[j];
   T[j]=temp;
}

   void echange(int &x, int &y){
   int temp=x;
   x=y;
   y=temp;
}



void TriTableau(int T[], int n){
   for(int i=0; i<n-1; i++)
      for(int j=i+1; j<n; j++)
         if(T[j]<T[i])
         {
            echange(T[i],T[j]);
         };
};











int main(){
   int *Tab ; int nb ;
   cout << "Entrer la valeur de nb";
   cin>> nb;
   Tab=Lire(nb);
   afficher(Tab,nb);
   TriTableau(Tab,nb);
   afficher(Tab,nb);
   return 0;
}















