#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	//1
	int a, b, c = 0, n;
	cout << "Введите размер массива N: ";
	cin >> n;
	cout << "Введите размер массива A: ";
	cin >> a;
	cout << "Введите размер массива B: ";
	cin >> b;
	int* array = new int[n];
	array[0] = a;
	array[1] = b;
	c = a + b;
	for (int i = 2; i <= n; i++) 
	{
		array[i] = c;
		c += array[i];

	}
	for (int i = 0; i < n; i++) 
	{
		cout << array[i] << " ";
	}
}

