/*
Este programa toma un caracter y regresa un codigo hash primitivo. 
*/
#include <stdio.h>

int ArraysH(char chars[]) {
	int i;  // Nos ayuda en la funcion for y nos ayuda a comparar respecto al numero de Caracteres.             
	int Hsh = 0;       

	for (i = 0; i < 9; ++i) 
  {
		Hsh += chars[i];
	}


	return(Hsh);
}

int main(void) {
	char ArrayC[] = { 'C', 'H', 'R', 'I', 'S', 'T', 'i', 'A', 'N' };

	printf("Result: %d\n", ArraysH(ArrayC));

	return(0);
}
