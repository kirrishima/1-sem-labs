#include "digit_char_code.h"

//модуль нахождения кода введеной цифры
void NumberCharToCode() {
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