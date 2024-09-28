#include "english_case_difference.h"
//модуль нахождения разницы между символом в верхнеи и нижнем регистрах английской раскладки
void LatinCharsDiff() {
	char inputChar;
	cout << "Введите символ: ";//выходные данные
	cin >> inputChar; //входные данные
	
	if ('A' <= inputChar && inputChar <= 'z') {
		int diff = tolower(inputChar) - toupper(inputChar);
		cout << "Разница в значениях кодов: " << diff << endl;//выходные данные
	}
	else {
		cout << "Ошибка: Введен символ, не являющийся латинской буквой." << endl;//выходные данные
	}
}