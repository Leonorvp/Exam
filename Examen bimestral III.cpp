#include <iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir();
int main (){
        escribir();

        system("pause");
        return 0;

}

void escribir(){
     ofstream archivo;
     string nombreArchivo,frase;

     cout<<"Escriba el nombre del archivo:\n ";
     getline(cin,nombreArchivo);

     archivo.open(nombreArchivo.c_str(),ios::out);

     if(archivo.fail()){
        cout<<"No se pudo abrir el archivo \n";
        exit(1);
     }

   cout<<"\nDigite el texto del archivo: ";
   getline(cin,frase);

   archivo<<frase;
     archivo.close();

}
