#include <iostream>
#include <windows.h>
#include <cwctype>
using namespace std;

//модуль нахождения разницы между символом в верхнеи и нижнем регистрах английской раскладки
void case1() {
	char inputChar;
	cout << "Введите символ: ";//выходные данные
	cin >> inputChar; //входные данные

	if ('A' <= inputChar <= 'z') {
		int diff = tolower(inputChar) - toupper(inputChar);
		cout << "Разница в значениях кодов: " << diff << endl;//выходные данные
	}
	else {
		cout << "Ошибка: Введен символ, не являющийся латинской буквой." << endl;//выходные данные
	}
}
//модуль нахождения разницы между символом в верхнеи и нижнем регистрах русской раскладки
void case2() {
	char inputChar;
	cout << "Введите символ: ";//выходные данные
	cin >> inputChar;//входные данные
	if ('А' <= inputChar && inputChar <= 'Я') {

		cout << "Разница в значениях кодов: " << inputChar - char(inputChar - ('а' - 'А')) << endl;//выходные данные
	}
	else if ('а' <= inputChar && inputChar <= 'я') {
		cout << "Разница в значениях кодов: " << inputChar - char(inputChar - ('А' - 'а')) << endl;//выходные данные
	}
	else {
		cout << "Ошибка: Введен символ, не являющийся русской буквой." << endl;//выходные данные
	}
}
//модуль нахождения кода введеной цифры
void case3() {
	char inputDigit;
	cout << "Введите цифру: ";//выходные данные
	cin >> inputDigit;//входные данные

	if ('0' <= inputDigit && inputDigit <= '9') {
		int digitValue = inputDigit - '0';
		cout << "Код символа: " << int(inputDigit) << endl;//выходные данные
	}
	else {
		cout << "Ошибка: Введен символ, не являющийся цифрой." << endl;//выходные данные
	}
}
int main() {
	char choice[200];
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	while (true) {

		cout << "Выберите вариант использования:" << endl;
		cout << "1 - определение разницы значений кодов в ASCII буквы в прописном и строчном написании (латиница)" << endl;
		cout << "2 - определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании (русский)" << endl;
		cout << "3 - вывод в консоль кода символа, соответствующего введенной цифре" << endl;
		cout << "4 - выход из программы" << endl;
		cout << "Введите ваш выбор: ";  cin.getline(choice, sizeof(choice));

		switch (choice[0]) {
		case '1': {
			case1();
			break;
		}

		case '2': {
			case2();
			break;
		}

		case '3': {
			case3();
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