#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <new>

using namespace std;

int main ()
{

    //Permite usar acentos
    setlocale(LC_ALL,"");

   char aux, pred;
   int cont=0;
   char lista[5];

   cout <<"Entre com o valor do predicado a ser testado." << endl;
   cin >> pred;

   cout <<"Entre com os elementos a serem testados." << endl;
   for(int i = 0; i < 5; i++) {
      cin >> lista[i];
   }

cout<<endl;

for(int i = 0; i < 5; i++) {
   for(int j = i+1; j < 5; j++)
   {
      if(lista[j] < lista[i]) {
         aux = lista[i];
         lista[i] = lista[j];
         lista[j] = aux;
      }
   }
cont++;
}

cout <<"Lista com elementos menores que o predicado" << endl;
for(int i = 0; i < 5; i++){
    if(lista[i] < pred){
        cout << lista[i] << " ";
    }
}

cout << endl;

cout <<"Lista com elementos maiores que o predicado" << endl
;
for(int i = 0; i < 5; i++){
    if(lista[i] > pred){
        cout << lista[i] << " ";
    }
}

cout << endl;

return 0;
}