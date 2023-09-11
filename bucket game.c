#include <stdio.h>

int main() {
    // Write C code here
    int a=0,b=0,m=4,n=3,temp=0;
    int ch;
   while(a!=2){    
    printf("enter choice");
    scanf("%d",&ch);
    switch(ch){
        case 1:b=n;
        printf("value=%d",a);
                 break;
        case 2:a=b;
                 b=0;
                 printf("value=%d",a);
                 break;
        
        case 3:b=b-(m-a);
                a=m;
                printf("value=%d",a);
                break;
        case 4:b=a;
                 a=0;
                 printf("value=%d",a);
                 break;
        case 5:printf("value of a and b=%d%d",a,b);
                 break;
    }
   }
   printf(" you won the game value of a=%d",a);
    return 0;
}
