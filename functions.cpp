// #include <stdio.h> -> header in C-Programming
#include <iostream> // function prototype already inside this header (for 'cout' and other iostream functions)

using namespace std;

char sampleArray();
void displaySomething(); // function prototype
void displayMultiple(int n);
int getSum(int* a);

int main() {
	/*
		C-Programming:
		int x = 5;
		float pi = 3.1416f;
		printf("Hello world... %d %.2f\n", x, pi);
	*/
	
	int num1[5] = {1, 2, 3, 4, 5};
	int num2[5] = {6, 7, 8, 9, 10};	
	
	displaySomething();
	cout << " --------- " << endl;
	displayMultiple(5);
	cout << sampleArray() << endl;
	char ch = sampleArray();
	cout << ch << endl;
	cout << " ----------------- " << endl;
	cout << getSum(num1) << endl;
	cout << getSum(num1) + getSum(num2) << endl;
	
	cout << "END OF PROGRAM..." << endl;
	return 0;
}

char sampleArray() {
	char str[20] = "FEUTECH";
	cout << str << endl;
	return str[0];
	/*
		function stubbing (return type functions):
		return NULL;
	*/
}

void displaySomething() { // function stubbing - creating a function without contents
	cout << "Hello World" << endl;
	/*
		abruptly terminate the program:
		exit(0);
	*/
	// we can use 'return' keyword here
}

void displayMultiple(int n) {
	for (int i = 0; i < n; i++) {
		displaySomething();
	}
}

int getSum(int* a) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += a[i];
	}
	return sum;
}

