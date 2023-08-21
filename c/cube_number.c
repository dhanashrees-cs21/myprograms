#include <stdio.h>
int main() {
  int a,n;
  printf("Enter the number:\n");
  scanf("%d",&n);
  if(n!=0) {
    a=n*n*n;
    printf("The cube number is:%d\n",a);
  } else {
   return 0;
  }
}


