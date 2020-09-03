#include <iostream>
#include <fstream>
using namespace std;
 int mitad (int arr[], int pinicial,int pfinal);
 void ordenar (int arr[], int inicial ,int pfinal);
//es un algoritmo que se utiliza punteros para poder ordenar (pinole )
int main() {
  ofstream quicksort;
  quicksort.open ("quicksort.txt",ios::app);
 cout<<"\nArreglo original"<<endl;
 quicksort<<"\noriginal arreglo"<<endl;
 int a[5]={104,87,9,10,99};
 for (int i=0;i<5;i++){
   cout<<"|"<<a[i]<<"|";
   quicksort<<"|"<<a[i]<<"|";
 }
 cout<<"\nNuevo arreglo ordenado";
 quicksort<<"\nnuevo arreglo ordenado\n";
 ordenar (a,0,4);
 cout<<endl;
 for (int i=0;i<5;i++){
   cout<<"|"<<a[i]<<"|";
   quicksort<<"|"<<a[i]<<"|";
 }


 quicksort.close();
 return 0;
}

int mitad (int arr[], int pinicial,int pfinal){

  return arr[(pinicial+pfinal)/2];

}
 void ordenar (int arr[], int pinicial ,int pfinal){
int i=pinicial;
int j=pfinal;
int temp;
int piv=mitad(arr,pinicial,pfinal);
do{
  while (arr[i]<piv){
  i++;
  }
  while(arr[j]>piv){
    j--;
  }
  if (i<=j){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
  }
}
while (i<=j);
if (pinicial<j){

  ordenar (arr,pinicial,j);
}
if (i<pfinal){
  ordenar(arr,i,pfinal);
}


 }
