#include <iostream>

using namespace std;

//Задача 1
inline int foo(int a,int b) {
	return(a + b) / 2;
}

//Задача 2
int maxFoo(int a, int b, int c) {
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}
double maxFoo(double a, double b, double c) {
	double max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}
float maxFoo(float a, float b, float c) {
	float max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	return max;
}

//Задача 3
template <typename t> t MaxArrFoo(t arr[], int length) {
	t max = arr[0];
	for (int i = 0; i < length; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

int main() {
	setlocale(LC_ALL, "Ru");

	//Задача 1
	cout << "Задача 1\n";
	int a=10, b=10;
	cout << foo(a, b)<<endl<<endl;

	//Задача 2
	cout << "Задача 2\n";
	cout<<"int: "<<maxFoo(2, 3, 4)<<"\tdouble: "<< maxFoo(2.5, 3.2, 4.3)<<"\tfloat: "<<maxFoo(3.0,2.0,6.0)<<endl<<endl;

	//Задача 3
	cout << "Задача 3: \n";
	int arr[5]{1,2,3,4,5};
	float arr2[5]{ 1.0,2.0,2.5,3.0,3.5 };
	double arr3[5]{ 1.5,2.5,3.5,3.7,3.9 };
	cout << "int: " << MaxArrFoo(arr,5) << "\tdouble: " << MaxArrFoo(arr3, 5) << "\tfloat: " << MaxArrFoo(arr2, 5) << endl << endl;
	return 0;
}
