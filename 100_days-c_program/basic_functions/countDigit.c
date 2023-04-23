#include <stdio.h>

/**
 * this is a function to count the total number of digit
 * the function will return the number how many digit make a particular figure
 * the trial code is below
 */

int countDigit(int num)
{
    int count = 0;
    while(num > 0){
        num = num / 10;
        count++;
    }
    printf("Total digit: %d", count);
    return count;
}

//trial code here
int main()
{
    int num = 123456;
    int count = countDigit(num);
}
