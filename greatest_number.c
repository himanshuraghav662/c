#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter a\n");
    scanf("%d",&a);
     printf("enter b\n");
     scanf("%d",&b);
      printf("enter c\n");
      scanf("%d",&c);
      if(a>b && a>c)
      {
          printf("a is greatest");
      }
      else if(b>a && b>c)
      {
          printf("b is greatest");
      }
      else
      {
          printf("c is greatest");
      }

    return 0;
}
