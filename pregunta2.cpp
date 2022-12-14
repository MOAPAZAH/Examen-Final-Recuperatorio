
#include <iostream>
#include "omp.h"
#include "stdio.h"
#include "string.h"

using namespace std;

int main() {
 string cad="La informática es la forma científica de procesar la información. Este procesamiento consiste en ordenar, seleccionar, ejecutar cálculos de forma que nos permita extraer conclusiones de la información manipulada. Procesar información es transformar datos primarios en información organizada, significativa y útil, que a su vez está compuesta de datos. La informática, que se ha desarrollado rápidamente a partir de la segunda mitad del siglo xx con la aparición de tecnologías como el circuito integrado, el Internet y el teléfono móvil, es la rama de la tecnología que estudia el tratamiento automático de la información";
int count=0,s=cad.size();
int alphabet =0;
int _spaces=0;

for(int i=0;i<s;i++){

    if(isdigit(cad[i])){
        count++;
    }
    if (isalpha(cad[i]) != 0) 
        alphabet++; 
    if (isspace(cad[i]) != 0) 
        _spaces++; 

}
cout<<"Digitos en la Cadena: "<<count<<endl;
cout<<"letras en la cadena: "<<alphabet<<endl;
cout<<"Espacios en la cadena: "<<_spaces<<endl;    

return 0;
}
