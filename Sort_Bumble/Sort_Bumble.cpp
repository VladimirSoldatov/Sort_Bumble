#include <iostream>

using namespace std;
template <class T>
void bubbleSort(T a[], long size) {
	long i, j;
	T x;
	for (i = 0; i < size; i++) { // i - номер прохода 
		for (j = size - 1; j > i; j--) { // внутренний цикл
			// прохода
			if (a[j - 1] > a[j]) {
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
			}
		}
	}
}
int main() {
	srand((unsigned int)time(NULL));
	const long SIZE = 10;
	int ar[SIZE];
	// до сортировки
	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 100;
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	bubbleSort(ar, SIZE);
	// после сортировки 
	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	return 0;
}