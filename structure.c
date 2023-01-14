#include<stdio.h>
#include<conio.h>
void main()
{
    struct s1{
        int mobile;
        char name[10];
        char gender;
        int sno;
    }harry;
    printf("enter mobile no");
scanf("%d",&harry.mobile);
printf("enter s no");
scanf("%d",&harry.sno);
printf("enter name");
fflush(stdin);
scanf("%s",harry.name);
printf("enter gender");
fflush(stdin);
scanf("%c",&harry.gender);
printf("%d\n",harry.mobile);
printf("%d\n",harry.sno);
printf("%s",harry.name);
printf("%c\n",harry.gender);
getch();
}
