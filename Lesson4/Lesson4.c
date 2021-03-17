#include <stdio.h>
#include <stdlib.h>


void Dec_to_bin(int number) {
    if (number <= 0) return;
    Dec_to_bin(number / 2);
    printf("%d", number % 2);
}

int RisPower(int number, int exp) {

    if (exp <= 0) return 1;

    return number * RisPower(number, exp - 1);

}

int RisPowerOdd(int number, int exp) {

    if (exp <= 0) return 1;
    else if (exp % 2 == 0) return RisPowerOdd(number * number, exp / 2);
    else return number * RisPower(number, exp - 1);

    }

int main()
{

    printf("Task 4.1\n");
    Dec_to_bin(56);
    printf("\n");

    printf("Task 4.2a\n");
    printf("%d\n", RisPower(2, 8));

    printf("Task 4.2b\n");
    printf("%d\n", RisPowerOdd(2, 8));

     printf("Task 4.3\n");



    return 0;
}
