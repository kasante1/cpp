#include <cstdio>

float add(float a, int b){
	return a + b;
}

float subtract(float a, int b){
	return a - b;
}

int main(){
	const float first{100};
	const int second{20};

	float(*operation)(float, int){};


	printf("operation initialized to ox%p\n", operation);

	operation = &add;
	printf("&add = ox%p\n", operation);
	printf("%g + %d = %g\n", first, second, operation(first, second));

	operation = subtract;
	printf("&subtract = ox%p\n", operation);
	printf("%g - %d = %g\n", first, second, operation(first, second));
}
