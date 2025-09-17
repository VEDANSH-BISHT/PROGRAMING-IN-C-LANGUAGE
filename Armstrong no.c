#include <stdio.h>

int main() {
int a,d,n,sum=0 ,temp;
printf("enter no.: ");
scanf("%d",&n);
temp=n;
while(n>0)
{


    d=n%10;
    sum=sum*10+d;
    n=n/10;

printf("reverse is= %d \\n",sum);
}
if (sum==temp)
{printf("No is armstrong no.");}
else
{printf("not a armstrong no.");}

return 0;




}
