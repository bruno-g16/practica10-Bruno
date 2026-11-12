#include<stdio.h>
#define p printf
#define s scanf

int main(void){
    int patata[9];
    int orden=0;
    for (int i=0; i<9; i++){
        p("Ingresa el numero %d: ", i+1);
        s("%d", &patata[i]);
    }

    p("\nARREGLO ORIGINAL\n");
    for (int i=0; i<9; i++){
        p("%d\n", patata[i]);
    }
    p(" \n");

        for (int i = 8; i >= 0; i--) {
        // Filtro: evaluamos si el número es par
        if (patata[i] % 2 == 0) {
            p("En la posicion %d se encontro el siguiente numero par: %d\n", i, patata[i]);
        }
    }

return 0;
}