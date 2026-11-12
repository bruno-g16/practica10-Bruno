#include<stdio.h>
#define p printf
#define s scanf

int main(void){
    int edades[8]; //Almacena las 8 edades como enteros 
    int mayores = 0;
    int intervalo = 0;
    for (int i = 0; i < 8; i++){
    printf("Introduce la edad de la persona numero %d: ", i + 1);
    s("%d", &edades[i]);
    if (edades[i]>=18){
        mayores = mayores + 1;   
    }
    if (edades[i]>=20 && edades[i]<=50)
        intervalo= intervalo+1;
     }
    p("\nLas edades que ingresaste son:\n");
    for (int i = 0; i < 8; i++) {
    p("Edad %d: %d\n", i, edades[i]);
    }
    p("La cantidad de edades mayores a 18 son:%d\n", mayores);
    p("La cantidad de edades que estan entre el 20 y el 50 son:%d\n", intervalo);
    return 0;
    }