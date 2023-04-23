#include <stdio.h>

/**
 * this program is for factorial calculation
 * the factorial formula is given by n!
 * the program will be able to solve any factorial input
 */

int main(){
	int m, product = 1;
	printf("Enter a digit: ");
	scanf("%d", &m);
	for(int i = 1; i <= m; i++){
		product = product * i;
	}
	printf("Factorial Result: %d", product);
}
