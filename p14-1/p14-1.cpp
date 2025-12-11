#include <iostream>

using namespace std;

double average(double* a, int size);
double* maximum(double* a, int size);
double* minimum(double* a, int size);

int main() {
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	cout << "Enter " << size << " floating-point values: ";
	double* arr = new double[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "Average is " << average(arr, size) << endl;
	double* maxPtr = maximum(arr, size);
	cout << "Maximum value is element #" << (maxPtr - arr) << ": " << *maxPtr << endl;
	double* minPtr = minimum(arr, size);
	cout << "Minimum value is element #" << (minPtr - arr) << ": " << *minPtr << endl;
}

double average(double* a, int size) {
	double sum = 0.0;
	for (int i = 0; i < size; i++) {
		sum += *a;
		a++;
	}
	return sum / size;
}

double* maximum(double* a, int size) {
	double* maxPtr = a;
	for (int i = 0; i < size; i++) {
		if (*a > *maxPtr) {
			maxPtr = a;
		}
		a++;
	}
	return maxPtr;
}

double* minimum(double* a, int size) {
	double* minPtr = a;
	for (int i = 0; i < size; i++) {
		if (*a < *minPtr) {
			minPtr = a;
		}
		a++;
	}
	return minPtr;
}