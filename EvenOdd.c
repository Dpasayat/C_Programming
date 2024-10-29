#include <stdio.h>
int main(){
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  if (a%2==0) {
     printf("%d is an even number.\n",a);
  }
  else {
     printf("%d is an odd number.\n",a);
  }
   printf("\n--------------------------------\n");
  //another method
  char evenodd[2][4] = {"Even", "Odd"};
  printf("%d is %s number\n",a,evenodd[a%2]);
  return 0;
}
