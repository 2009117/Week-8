/*
EN ESTE PROGRAMA TE AROJA LOS DATOS QUE INGRESAS DE MANERA DE BLOQUES

*/
#include <stdio.h>

struct student {
    char NameU[50];
    int Rll;
    float Mkr;
} s[15];

char line[1000]; 



void funcion(int Funcion){ 
 int i;
    printf("Ingrese los valores de la siguiente manera :\n");
    for (i = 0; i < 10; ++i) {
        s[i].Rll = i + 1;
        printf("\ndatos %d,\n", s[i].Rll);
        printf("primer valor: ");
          fgets(line, sizeof(line), stdin);
        sscanf(line,"%s", s[i].NameU);
        printf("segundo valor : ");
          fgets(line, sizeof(line), stdin);
        sscanf(line,"%f", &s[i].Mkr);
    }
    printf("Informacion :\n\n");
    for (i = 0; i < 10; ++i) {
        printf("\ndatos: %d\n", i + 1);
        printf("valores: ");
        puts(s[i].NameU);
        printf("segundo valores: %.1f", s[i].Mkr);
        printf("\n");
}

}
    int main() {int Funcion;
    funcion(Funcion);
    return 0;
}
