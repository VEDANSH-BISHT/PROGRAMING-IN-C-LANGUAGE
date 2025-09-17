#include <stdio.h>
void fact ();
int main () {
int num ,f=1;
printf("Enter your number:");
scanf("%d",&num);
while(num>0)
{

    f=f*num;
    num=num-1;

}
printf("the factorial=%d",f);



    return 0;
}