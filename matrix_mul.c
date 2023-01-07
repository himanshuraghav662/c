#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,z,mu=0;
    int a[3][3],b[3][3],mul[3][3];
        printf("enter elements of matrix a[][]\n");

        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                scanf("%d",&a[i][j]);
            }
        } 
        printf("\nenter elements of matrix b[][]\n");

        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        } 
        

        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                mul[i][j]=0;
                for(z=0;z<=2;z++)
                {
                    mu=mu+(a[i][z]*b[z][j]);
                }
                mul[i][j]=mu;
                mu=0;
            }
        } 
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        } 



getch();

}
