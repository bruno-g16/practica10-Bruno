#include<stdio.h>
#define p printf
#define s scanf

int main(void){
     float temp[7];
     float suma = 0;
     float referencia;
     int dias=0;

    for(int i=0; i<7; i++){
        p("Ingresa la temperatura del dia %d: \n", i+1);
        s("%f", &temp[i]);
    }
    p("\nLas temperaturas ingresadas son:\n");
    for(int i=0; i<7; i++){
    p("Temperatura %d: %.2f\n", i, temp[i]);
    }

     float mayor = temp[0];
     float menor = temp[0];
    for (int i = 1; i < 7; i++) {
    if (temp[i] > mayor) {
        mayor = temp[i];
    }
    if (temp[i] < menor) {
        menor = temp[i];
    }
}

    p("La temperatura mayor es: %.2f\n", mayor);
    p("La temperatura menor es: %.2f\n", menor);

for (int i = 0; i < 7; i++) {
    suma = suma + temp[i]; 
}
float promedio = suma / 7.0;
p("El promedio de las temperaturas es: %.2f\n", promedio);


p("Ingresa la temperatura de referencia: ");
s("%f", &referencia);

for (int i = 0; i < 7; i++) {
    if (temp[i] > referencia) {
        dias++;
    }
}
 p("La cantidad de dias que superan a la temperatura %.2f son: %d\n", referencia, dias);
 return 0; 
}
  
