#include <stdio.h>
/**
 * the program here is about permutation
 * permutation formula is given as nPr = n! / (n-r)!
 * this will help us solve any permutation question
 */
 
 
int permutate(int num1, int num2)
{
	int product1 = 1, product2 = 1;
	int subtract = num1 - num2;
	for(int i = 1; i <= num1; i++){
		product1 = product1 * i;
	}
	for(int i = 1; i <= subtract; i++){
		product2 = product2 * i;
	}
	int permute = product1 / product2;
	printf("Permutation result: %d", permute);
	return permute;
}


int main(){
	int num1 = 5;
	int num2 = 2;
	int permutation = permutate(num1, num2);
//	printf("Permutation result: %d", permutation);
}
