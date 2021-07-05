/*
El programa contara el numero del caracteres que se le ingresa. 

*/
#include <stdio.h>
#include <string.h>

char line[100];

int compare (char on[100]){

int count, i;
for (i = 0;on[i] != '\0';i++) {
if (on[i] == ' ' && on[i+1] != ' ')
count++; }

return count;
}

int main(void) {

char cad1[100];
int result;

printf("Insert a string :\n");
fgets(line, sizeof(line), stdin);
sscanf(line,"%[^\n]on", cad1);

result = compare (cad1); 
printf("The result of: %d",result+1);

return 0;
}
