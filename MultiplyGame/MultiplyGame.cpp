#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	// Cоздание переменных 
	int userScore = 0;
	int userInput,userChoice,result,a,b,c,d;
	// Необходимо для генерации нового числа
	srand(time(0));
	cout << "[INFO]: Welcome! Do you want to improve your math skills?\n        Just keep in mind that when choosing or answering, you need to use only numbers!\n        For each correct answer you will receive 1/3/6 points, and remember you have NO right to make a mistake!\n" << endl;
	Sleep(700);
	cout << "[GAME]: Select DIFF:\n\n[1] Normal\n[2] Middle\n[3] Hard" << endl;
	cin >> userChoice;
	// Выполнение действий в зависимости от выбора пользователя
	switch (userChoice) {
	case 1: {
		// Нормальный уровень
		cout << "\n[GAME]: The normal difficulty is selected, for each correct answer you get 1 point.\nTasks from the multiplication table are used here.\nYou have no right to make a mistake!" << endl;
		Sleep(3000);
		// Цикл на генерацию 100 уровней
		for (int i = 1; i < 100; i++) {
			// Генерация чисел
			a = 2 + rand() % 8;
			b = 2 + rand() % 8;
			// Пример
			result = a * b;
			cout << "\n[" << i << "] Task: \n" << a << " * " << b << " = ?\n" << endl;
			cin >> userInput;
			// Проверка на верный ответ, если пользователь ввёл верный ответ, то он получает + 6 очков
			if (userInput == result) {
				cout << "Right! (+ 1)\n" << endl;
				userScore++;
			}
			// Проверка на неверный ответ, если пользователь ввёл неверный ответ, то игра заканчивается
			if (userInput != result) {
				cout << "You Lose! Correct answer is " << result << ". " << "You have: " << userScore << " score!" << endl;
				break;
			}
			// Проверка на уровень, если пользователь на 100 уровне, то игра заканчивается
			if (i == 100) {
				cout << "Congratulations! You have passed the game!" << " You have: " << userScore << " score!" << endl;
				break;
			}
		}
		system("pause");
		return 0;
	}
	case 2: {
		// Средний уровень
		cout << "\n[GAME]: The middle difficulty is selected, for each correct answer you get 3 points.\n        Tasks with brackets are used here.\n        You have no right to make a mistake!" << endl;
		Sleep(3000);
		// Цикл на генерацию 100 уровней
		for (int i = 1; i < 100; i++) {
			// Генерация чисел
			a = 2 + rand() % 8; 
			b = 2 + rand() % 8; 
			c = 2 + rand() % 24; 
			d = 2 + rand() % 24;
			// Пример
			result = a * b + (c + d);
			cout << "\n[" << i << "] Task: \n" << a << " * " << b << " +" << " (" << c << " + " << d << ") = ?\n" << endl;
			cin >> userInput;
			// Проверка на верный ответ, если пользователь ввёл верный ответ, то он получает + 6 очков
			if (userInput == result) {
				cout << "Right! (+ 3)\n" << endl;
				userScore +=3;
			}
			// Проверка на неверный ответ, если пользователь ввёл неверный ответ, то игра заканчивается
			if (userInput != result) {
				cout << "You Lose! Correct answer is " << result << ". " << "You have: " << userScore << " score!" << endl;
				break;
			}
			// Проверка на уровень, если пользователь на 100 уровне, то игра заканчивается
			if (i == 100) {
				cout << "Congratulations! You have passed the game!" << " You have: " << userScore << " score!" << endl;
				break;
			}
		}
		system("pause");
		return 0;
	}
	case 3: {
		// Сложный уровень
		cout << "\n[GAME]: The hard difficulty is selected, for each correct answer you get 6 points.\n        Tasks with brackets are used here.\n        The tasks are getting harder..\n        You have no right to make a mistake!" << endl;
		Sleep(3000);
		// Цикл на генерацию 100 уровней
		for (int i = 1; i < 100; i++) {
			// Генерация чисел
			a = 2 + rand() % 9; 
			b = 2 + rand() % 9; 
			c = 2 + rand() % 9; 
			d = 2 + rand() % 69;
			// Пример
			result = (a * b) + (c * c) + d + d;
			cout << "\n[" << i << "] Task: \n(" << a << " * " << b << ") + (" << c << " * " << c << ") + " << d << " + " << d << endl;
			cin >> userInput;
			// Проверка на верный ответ, если пользователь ввёл верный ответ, то он получает + 6 очков
			if (userInput == result) {
				cout << "Right! (+ 6)\n" << endl;
				userScore +=6;
			}
			// Проверка на неверный ответ, если пользователь ввёл неверный ответ, то игра заканчивается
			if (userInput != result) { 
				cout << "You Lose! Correct answer is " << result << ". " << "You have: " << userScore << " score!" << endl;
				break;
			}
			// Проверка на уровень, если пользователь на 100 уровне, то игра заканчивается.
			if (i == 100) {
				cout << "Congratulations! You have passed the game!" << " You have: " << userScore << " score!" << endl;
				break;
			}
		}
		system("pause");
		return 0;
	default:
		// Проверка на выбор пользователя
		cout << "Please enter the correct value 1 or 3." << endl;
		system("pause");
		return 0;
	}
	}
}