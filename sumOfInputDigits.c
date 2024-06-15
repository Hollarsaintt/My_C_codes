#include <stdio.h>
int sumOfDigits(int);

int main(void) {

    int userInput, sum;
    scanf("%d", &userInput);

    sum = sumOfDigits(userInput);
    printf("%d", sum);

    return 0;
}

int sumOfDigits(int num)
{

    if((num / 10) == 0) return num;
    else{
        return ((num%10) + sumOfDigits(num/10));
    }

}
