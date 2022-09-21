#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;

void func(int N) {
	static int S = 7;
	S *= N;
	cout << S << "\n";
	S++;
}

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Задача 3\nСтатичная переменная\n";
	int n;
	cout << "Введите число: \n";
	cin >> n;
	func(n);
	

	return 0;
}