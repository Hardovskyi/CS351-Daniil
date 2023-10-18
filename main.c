#include <stdio.h>
int main() {
	int a = 5;
	int b = 7;
	int result;
	//arithmetic operations:
	result = a + b;
	result = result -3;
	result = result * 4;
	result = result / 2;

	//logical operations:
	int condition1 = (result > 10);
	int condition2 = (a==b);

	if (condition1){
		result = result +5;
	}else if (condition2){
		result = result -3;
	}else{
		result = result * 2;
	}

	return 0;
}
