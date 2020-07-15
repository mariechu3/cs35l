#include<stdio.h>
int main() {
	

	int B[2][3] = {{1,2,3}, {4,5,6}};

	//B[0] has 3 integers
	//B[1] has 3 integers

	printf("1: %p\n", B);
	printf("2: %p\n", B[0]);

	//So, B[0] is an int*

	//Pointer arith
	printf("3: %p\n", B + 1);
	printf("4: %p\n", B[1]);

	//Will it be same?
	printf("5: %p\n", B[0] + 1);

	printf("6: %p\n", &B[0][1]);

	//Some address or value?
	printf("7: %p\n", *(B + 1));

	printf("8: %d\n", *(B[0] + 1));

	printf("9: %d\n", *(B[0] + 4));

	printf("10: %d\n", *(B + 1));

	printf("11: %d\n", **(B + 4));

}
