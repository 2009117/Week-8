#include <stdio.h>
#include <string.h>


char X[100]; //What are the difference between 400-100? 
char Y[100];


void funcion(Funcion){
  

  printf("Insert text 1:\n");
    fgets(X, sizeof(X),stdin);
    sscanf(X, "%[^\n]s",X);
  printf("Insert text 2:\n");
    fgets(Y, sizeof(Y), stdin);
    sscanf(Y, "%[^\n]s",Y);

  printf("You inserted %s in your text 1\n",X);
    printf("\n");
  printf("Your inserted %s in your text 2\n",Y);
    printf("\n");

    if (strcmp(X,Y)==0) {
      printf("There are similiar\n");
      }
        else {
          printf("There aren't similar\n");
        }
}

int main(){int Funtion;
funcion(Funtion); 

  
  return 0;
}
