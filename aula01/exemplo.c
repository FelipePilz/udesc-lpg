//Usar uma biblioteca padraoo <STanDart, In & Out>
#include <stdio.h>


//Function principal MAIN
int
main () {
  int var1 = 5;
  int num = 0;
  printf ("Var: %d \n", var1);
  printf("Insert a number here: ");
  scanf("%d", &num);
  printf("The number was: %d", num);
  return 0;
}

