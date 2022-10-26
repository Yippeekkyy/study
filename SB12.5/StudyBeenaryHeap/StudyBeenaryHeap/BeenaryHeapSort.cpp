#include <iostream>

using namespace std;


void heapArr(float arr[], int n, int i) {
	
	int largest = i;

	int lef = 2 * i + 1;
	int righ = 2 * i + 2;

	if (lef > largest) {
		largest = lef;
	}

	if (righ > largest) {
		largest = righ;
	}

	if (largest != i) {
		swap(arr[i], arr[largest]);
	
		heapArr(arr, n, largest);
	}

}

void heapSort(float arr[], int n) {

	for (int i = n / 2 - 1; i >= 0; i--) {
		heapArr(arr, n, i);
	}
}

void printArray(float arr[]) {
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		std::cout << arr[i];

	}
}
int main() {
	float arr[] = { 1.2 , 2.3 , 1.11 , 3.4 , 5.5 , 5.4 , 5.3 , 5.1 , 1.5 , 1.25 , 5.41 , 5.31 , 5.11 , 1.51 , 1.251 };

	int n = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, n);

	printArray(arr);
}