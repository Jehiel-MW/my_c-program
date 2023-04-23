#include <stdio.h>

/**
 * this program will solve mathematical problem involving combination
 * combination formula is given as nCr = n! / r! * (n - r)!
 * a trial code is included below
 * Return value is int
 */

 int combinate(int num1, int num2)
 {
     int product1 = 1, product2 = 1, product3 = 1;
     int subtract = num1 - num2;
     //for the first factorial n!

     for(int i = 1; i <= num1; i++){
         product1 = product1 * i;
     }

     //for the second factorial r!

     for(int i = 1; i <= num2; i++){
         product2 = product2 * i;
     }

     //for the third factorial (n-r)!

     for(int i = 1; i <= subtract; i++){
         product3 = product3 * i;
     }

     //for calculating the denominator r! * (n-r)!

     int denominate = (product2 * product3);

     //for the final formula n! / r! * (n-r)!
     int combine = product1 / (product2 * product3);
     //denominate;
     printf("Combination result: %d", combine);
     return combine;
 }

//This is the test code for the function
 int main(){
	int num1 = 5;
	int num2 = 1;
	int combination = combinate(num1, num2);
}
