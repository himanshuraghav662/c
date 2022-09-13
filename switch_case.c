#include <stdio.h>
int main()
{
    int a,b,ch,sum=0,sub=0,mul=0,division=0;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("enter 1 for sum\n");
    printf("enter 2 for sub\n");
    printf("enter 3 for mul\n");
    printf("enter 4 for division\n");
    printf("enter choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: sum=a+b;
                printf("sum=%d\n",sum);
                break;
        case 2: sub=a-b;
                printf("sub=%d\n",sub);
                break;
        case 3: mul=a*b;
                printf("mul=%d\n",mul);
                break;
         case 4:division=a/b;
                printf("division=%d\n",division);
                break;
            }
            return 0;
}
