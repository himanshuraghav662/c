#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
    return 1;
}

void main()
{
int n,f;
printf("enter a no");
scanf("%d",&n);
f=fact(n);
printf("factorial of %d=%d",n,f);
getch();
}
