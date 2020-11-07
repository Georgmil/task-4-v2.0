#include <stdio.h>

// Task 4, zadanie 5
// Zadaju funkcii k 5 zadaniju
int gcd2(int a, int b);
int lcm2(int x, int y);


void task5() {
	// Main part of task 5, osnovaja chast 5 zadaija
	int l, m, k,d;
	printf("Task 5:\n\n");
	printf("In this task we will calculate lcm of 3 numbers\n");
	printf("Please enter the first number:\n");

	scanf_s("%d", &l);
	printf("Please enter the second number:\n");
	scanf_s("%d", &m);
	printf("Please enter the third number:\n");
	scanf_s("%d", &k);
	d = lcm2(l, m);


	printf("Lcm of numbers %d, %d, %d is: %d",l,m,k,lcm2(d,k));

}

// osnovnaja chast
int main() {
	int n = 1;
	while (n) {
		printf("\n\n");
		printf("Which task do you want to slove:\n");
		scanf_s("%d", &n);
		switch (n) {
		case 5: task5(); break;

		}
	}


	return 0;
}





int gcd2(int a, int b) {

	int g, d;
	if (b > a) {
		d = a;
		a = b;
		b = d;
	}
	while (b) {
		g = a % b;
		a = b;
		b = g;
	}
	return a;
}
int lcm2(int x, int y) {
	return (x * y) / (gcd2(x, y));
}
