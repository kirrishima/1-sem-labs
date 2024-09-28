#include <iostream>
#include <Windows.h>
using namespace std;

int& sumBetweenZeros(int* arr, int size, int& sum) { //функцыя, якая вяртае спасылку на суму
	int firstZero = -1;
	int lastZero = -1;
	for (int i = 0; i < size; ++i) {
		if (arr[i] == 0) {
			if (firstZero == -1) firstZero = i; //для firstZero захоўваем пазіцыю толькі першага нуля
			lastZero = i; //захоўваем пазіцыю апошняга нуля
		}
	}

	if (firstZero != -1 && lastZero != -1 && firstZero != lastZero) { //калі было знойдзена 2 нуля ці больш
		for (int i = firstZero + 1; i < lastZero; ++i) {
			sum += arr[i]; //знаходзім суму элементаў паміж нулямі
		}
	} 
	//Вяртаем спасылку на суму
	return sum;
}
int main() {
	SetConsoleOutputCP(1251);
	int size, rmn = 0, rmx = 10;
	cout << "Увядзіце памер масіва: ";
	cin >> size;
	int* ptr = new int[size];
	//запаўняем масіў выпадковымі лікамі і адразу выводзім
	for (int i = 0; i < size; ++i) {
		ptr[i] = (int)(((double)rand() / (double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << ptr[i] << ' ';
	}
	cout << '\n';

	int sum = 0; //зменная якая будзе захоўваць суму лікаў
	sum = sumBetweenZeros(ptr, size, sum); //выклікаем функцыю
	cout << "Сума элементаў паміж першым і апошнім нулявымі элементамі: " << sum;
	//выдаляем масіў


	delete[] ptr;
	return 0;
}
