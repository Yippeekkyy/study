#include <iostream>

using namespace std;


void heapArr(float arr[], int n, int i) {
	
	int largest = i;

	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left > largest) {
		largest = left;
	}

	if (right > largest) {
		largest = right;
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
int main() {


}