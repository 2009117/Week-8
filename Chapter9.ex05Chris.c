#include <stdio.h>

int Max(int values[]) {
	int M; //Para el valor mas grande
	int i; //Nos ayuda para que en la funcion for, para indicar en que momento inicia y termina.               

	M = 0;

	for (i = 0; i < 10; ++i) {
		if (values[i] > M) {
			M = values[i];
}
}

	return M;
}

int main(void) {
 	int values[] = { 23, 14,2, 11, 20, 4, 27, 7, 9, 10 }; //Aquí se brinda el valor de los datos que se van a comparar

	printf("The largest number: %d\n", Max(values));
	
  return(0);
}
