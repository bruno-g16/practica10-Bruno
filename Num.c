#include<stdio.h>
#define p printf
#define s scanf

int main(void){
    int numeros[10];
    int buscar;
    int patata=0;
    for(int i=0; i<10; i++){
    p("Ingresa el numero %d: ", i+1);
    s("%d", &numeros[i]);
    }

    puts("Ingresa el numero que quieres buscar:");
        s("%d", &buscar);
         for(int i=0; i<10; i++){
            if(numeros[i] == buscar){
            p("El numero ingresado aparece en la posicion numero: %d\n", i+1);
             patata++;
           }
     }
   
        if (patata > 0) {
            p("Las veces que aparecen el numero son: %d ves(es)\n", patata, buscar);
          } 
         else {
         p("El numero buscado no aparece >:(\n");
         }
return 0;
}

