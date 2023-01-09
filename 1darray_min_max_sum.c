#include<stdio.h>
#include<conio.h>
void print()
{ 
    int a[10],min=0,max=0,sum=0,i;
    printf("enter elements of array\n");
    for(i=0;i<=9;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
    min=a[0];
    for(i=0;i<=9;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }  
    max=a[0];
    for(i=0;i<=9;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    } 
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    } 
    printf("min=%d\n",min);
    printf("max=%d\n",max);
    printf("sum of array=%d",sum);


}
void main()
{
   
    print();
    getch();
}
