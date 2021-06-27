#include <iostream>
using namespace std;

int naib(int a, int b, int c) {
	if (a > b)
		if (a > c)
			return a;
		else return c;
	else if (b > c)
		return b;
	else return c;
}

int predel(int a, int b,double number) {
	if (floor(number) == number) {
		while (number < a || number > b)
		{
			cout << "Ошибка ввода, повторите: ";
			cin >> number;
		}
		return number;
	}
	else return (a + 1);

}

void Sort(int *arr, int n) {
	int counter = 0;
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
			int tmp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = tmp;
		}
	}
}

int main(){
	setlocale(LC_ALL, "Rus");
	cout << naib(5, 2, 2) << endl;
	cout << predel(1, 10, 5) << endl;

	const int N = 5;
	int* arr = new int[N];
	cout << "Заполните массив для сортировки: ";
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	Sort(arr, N);
	cout << "Отсортированный массив: " << endl;
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	
	return 0;
}