#include <stdio.h>

int main()
{
    int units;
    int chrg = 0, sab = 0, total = 0;

    printf("Enter number of units used: ");
    scanf("%d", &units);

   
    if (units <= 100) {
        sab = 0;
    }
    else if (units <= 300) {
        sab = 100;
    }
    else if (units <= 500) {
        sab = 200;
    }
    else {
        sab = 300;
    }

    
    if (units <= 100) {
        chrg = units * 3;   
    }
    else if (units <= 300) {
        chrg = (100 * 3) + (units - 100) * 5;   
    else if (units <= 500) {
        chrg = (100 * 3) + (200 * 5) + (units - 300) * 7; 
    }
    else {
        chrg = (100 * 3) + (200 * 5) + (200 * 7) + (units - 500) * 10; 
    }

    total = chrg + sab;

    printf("Total electricity bill is: %d\n", total);

    return 0;
}
