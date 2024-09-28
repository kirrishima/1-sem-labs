#include "russian_case_difference.h"
//модуль нахождения разницы между символом в верхнеи и нижнем регистрах русской раскладки
void RussCharsDiff() {
	char inputChar;
	cout << "Введите символ: ";//выходные данные
	cin >> inputChar;//входные данные
	if ('А' <= inputChar && inputChar <= 'Я') {

		cout << "Разница в значениях кодов: " << inputChar - char(inputChar - ('а' - 'А')) << endl;//выходные данные
	}
	else if ('а' <= inputChar && inputChar <= 'я') {
		cout << "Разница в значениях кодов: " << char(inputChar + ('а' - 'А')) - inputChar << endl;//выходные данные
	}
	else {
		cout << "Ошибка: Введен символ, не являющийся русской буквой." << endl;//выходные данные
	}
}