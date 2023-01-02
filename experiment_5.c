#include<stdio.h>
#include<conio.h>
int factorial(int);
void is_prime()
{
 int n,flag=0;
  printf("enter a no :");
  scanf("%d",&n);
  for(int i=2;i<n/2;i++)
  {
    if(n%i==0)
    {
        printf("%d is not a prime no",n);
        flag=1;
        break;
    }
  }
  if(flag==0)
  {
    printf("%d is a prime no",n);
  }
}
void is_armstrong()
{
 int n,temp,sum=0,r;
 printf("enter a three digit no :");
 scanf("%d",&n);
temp=n;
while(n>0)
{
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
}
if(temp==sum)
{
  printf("%d is a armstrong no",temp);
}
else{
    printf("not a armstrong no");
}
}
void ncr()
{
int n,r,result,a,b,c;
printf("enter n and r");
scanf("%d%d",&n,&r);
a=factorial(n);
b=factorial(r);
c=factorial(n-r);
result=a/(b*c);
printf("ncr=%d",result);


}
void npr()
{
int n,r,result;
printf("enter n and r");
scanf("%d%d",&n,&r);
result=factorial(n)/factorial(n-r);
printf("npr=%d",result);
}
void to_upper()
{
char a;
printf("enter a character :");
fflush(stdin);
scanf("%c",&a);
if(a>='a' && a<='z')
{
    a=a-32;
}
printf("upper case =%c",a);

}
void to_lower()
{
char a;
printf("enter a character :");
fflush(stdin);
scanf("%c",&a);
if(a>='A' && a<='Z')
{
    a=a+32;
}
printf("lower case =%c",a);

}
void is_upper()
{
char a;
printf("enter a character :");
fflush(stdin);
scanf("%c",&a);
if(a>='A' && a<='Z')
{
    printf("%c is upper case character");
}
else
printf("not a upper case");
}
void is_lower()
{
char a;
printf("enter a character :");
fflush(stdin);
scanf("%c",&a);
if(a>='a' && a<='z')
{
    printf("%c is lower case character");
}
else
printf("not a lower case ");
}
void is_digit()
{
char a;
printf("enter something :");
fflush(stdin);
scanf("%c",&a);
if(a>='0' && a<'a')
{
    printf("it is a digit");
}
else
printf("not a digit");
}
void is_alphabet()
{
char a;
printf("enter a character :");
fflush(stdin);
scanf("%c",&a);
if((a>='A' && a<='Z')||(a>='a' && a<='z'))
{
    printf("%c is a alphabet",a);
}
else
printf("not an alphabet");
}
void power()
{
    int n,p,ans=1;
printf("enter a no:");
scanf("%d",&n);
printf("enter power of n:");
scanf("%d",&p);
for(int i=1;i<=p;i++)
{
    ans=ans*n;
}
printf("power=%d",ans);
}
int factorial(int n)
{
int fact=1;

for(int i=1;i<=n;i++)
{
    fact=fact*i;
}
return fact;
}
void main()
{
    int f,n;
char ch;
printf("enter choice \n a for prime\nb for armstrong\nc for ncr\nd for npr\ne for to_upper\nf for to_lower\ng for is_upper\nh for is_lower\ni for is_digit\nj for is_alphabet\nk for power\nl for factorial  :");
fflush(stdin);
scanf("%c",&ch);
switch(ch)
{
    case 'a':is_prime();
    break;
     case 'b':is_armstrong();
    break;
     case 'c':ncr();
    break;
     case 'd':npr();
    break;
     case 'e':to_upper();
    break;
     case 'f':to_lower();
    break;
     case 'g':is_upper();
    break;
     case 'h':is_lower();
    break;
     case 'i':is_digit();
    break;
     case 'j':is_alphabet();
    break;
     case 'k':power();
    break;
     case 'l':printf("enter a no:");
             scanf("%d",&n);
            f=factorial(n);
            printf("factorial=%d",f);
              break;

}
getch();
}
