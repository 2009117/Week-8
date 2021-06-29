#include <stdio.h>
#include <string.h>

char on[1000];

int i; 


int main()
{
  printf("Insert any phrase:\n");
  fgets(on, sizeof(on), stdin);
  
  for(int i=0; i<strlen(on);i++) {


   if (on[i] == '-') //This gonna check if the space is a "-"
        on[i]='_'; //and the if is tru, is gonna change to "_"
  }
  printf("%s",on);
  
  
  return 0;
 

}
