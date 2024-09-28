#include <iostream>
#include <windows.h>
#include <cwctype>
#include "english_case_difference.h"
#include "digit_char_code.h"
#include "russian_case_difference.h"
using namespace std;

int main() {
	char choice;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	while (true) {
		cout << "\nВыберите вариант использования:" << endl;
		cout << "1 - определение разницы значений кодов в ASCII буквы в прописном и строчном написании (латиница)" << endl;
		cout << "2 - определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании (русский)" << endl;
		cout << "3 - вывод в консоль кода символа, соответствующего введенной цифре" << endl;
		cout << "4 - выход из программы" << endl;
		cout << "Введите ваш выбор: ";  cin >> choice;

		switch (choice) {
		case '1': {
			LatinCharsDiff();
			break;
		}
		case '2': {
			RussCharsDiff();
			break;
		}
		case '3': {
			NumberCharToCode();
			break;
		}
		case '4':
			cout << "Программа завершена." << endl;
			return 0;

		default:
			cout << "Ошибка: Неверный выбор. Пожалуйста, выберите один из вариантов 1-4." << endl;
		}
	}
	return 0;
}