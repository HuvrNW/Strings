#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string> // Библиотека, позволяющая работать с классом String (строки)

// Конкатенация строк - это процесс соединения двух или более строк в одну целую.
// Задача 1
std::string func1(std::string st, int num);

// Задача 3.
bool spam(std::string str);

int main() {
	setlocale(LC_ALL, "Russian");
	int x;

	// Строковый массив --> char название_массива[]{ "" };
	// Последнюю ячейку в строковом массиве занимает спец символ --> \0.
	/*char char_str[5]{' ', 'H', 'i', '!', '\0'};

	for (int i = 0; i < 4; i++)
		std::cout << char_str[i];
	std::cout << '\n';

	std::cout << char_str << '\n';

	char char_str2[]{ "Hello world!" };
	std::cout << char_str2 << '\n';
	std::cout << char_str2[4];
	*/

	// Строковая переменная
	/*std::string str; // Создание строковой переменной типа string
	std::cout << str << '\n';
	str = " Hello world!";
	std::cout << str << '\n';
	std::cout << "-------------------\n";
	str += " Bye world!";
	std::cout << str + " WOW!" << '\n';
	*/

	// Ввод строки
	/*std::string name;
	std::cout << " Введите имя --> ";
	//std::cin >> name; // Ввод до ближайшего пробела.
	getline(std::cin, name); // Функция для ввода строчек с пробелами.
	std::cout << " Привет, " << name << '\n';
	std::cout << " Введите возраст --> ";
	short age;
	std::cin >> age;
	std::cout << age << "? Вау!\n";

	std::cin.ignore(); // Очитка потока input stream. Используется перед getline после использования cin. Или внутри функции.

	std::cout << "Введите должность --> ";
	std::string pos;
	getline(std::cin, pos);
	std::cout << " Всегда мечтал быть " << pos << '\n';

	std::cout << " Пока мистер " << name[0] << ".\n";

	name = "Hello\nWorld!";
	std::cout << name << '\n';
	*/

	// Методы строк.
	// Метод - это функция, являющая частью класса и применяющаяся исключительно к объектам этого класса.
	std::string st = "Hello world!";

	// Методы Length() и Size() - Возвращают длину строки
	/*std::cout << st.length() << '\n';
	std::cout << st.size() << '\n';
	*/

	// Метод insert() - Вставка содержимого внутрь строки.
	/*st.insert(3, "%%%");
	std::cout << st << '\n';
	*/

	// Метод replace() - Вырезает содержимое строки и заменяет на новое.
	/*st.replace(2, 2, "gg");
	std::cout << st << '\n';
	*/

	// Метод find() - Возвращает индекс первого вхождения подстроки в строку
	/*std::cout << st.find("ld") << '\n';
	std::cout << st.find('l', 5) << '\n';
	*/

	// Метод rfind() - Поиск последнего вхождения подстроки в строку.
	/*std::cout << st.rfind('l') << '\n';
	std::cout << st.rfind('l', 6) << '\n';
	*/

	// Метод substr() - Возвращает всю подстроку с переданной позиции. Вторая цифра - это кол-во символов сколько будет возвращено с переданной позиции.  
	/*std::cout << st.substr(3) << '\n'; 
	std::cout << st.substr(3, 5) << '\n';
	*/

	// Функции со string
	// Число в строку (to_string())
	/*std::cout << " Введите число --> ";
	std::cin >> x;
	x++;
	st = std::to_string(x); // Преобразование ЦЕЛОГО числа в строку.
	std::cout << st + '\n';
	*/

	// Строка в число (stoi())
	/*std::cout << " Введите число --> ";
	getline(std::cin, st);
	int num = stoi(st);
	num++;
	std::cout << num << '\n';
	*/

	// Возведение строки в верхний регистр (toupper())
	/*for (int i = 0; i < st.size(); i++)
		st[i] = toupper(st[i]);
	std::cout << st << '\n';
	*/

	// Возведение строки в нижний регистр (tolower())
	/*for (int i = 0; i < st.size(); i++)
		st[i] = tolower(st[i]);
	std::cout << st << '\n';
	*/

	// Задача 1. Повторение строки
	/*std::cout << "\t\tЗадача 1.\n Введите строку --> ";
	getline(std::cin, st);
	std::cout << func1(st, 3) << '\n';
	*/

	// Задача 3. Проверка спама. (100% free, sales increase, only today.)
	std::cout << "\t\tЗадача 3.\n Введите сообщение --> ";
	getline(std::cin, st);

	if (spam(st))
		std::cout << " Обнаружен спам!" << '\n';
	else
		std::cout << " Спама не обнаружено." << '\n';


	return 0;
	
	
}

// Задача 1
std::string func1(std::string st, int num) {
	std::string tmp;
	for (int i = 0; i < num; i++)
		tmp += st;
	return tmp;
}

// Задача 3.
bool spam(std::string str) {
	for (int i = 0; i < str.size(); i++)
		str[i] = tolower(str[i]);
	std::cout << str << '\n';
	std::string spams[3]{ 
		"100% free",
		"sales increase",
		"only today" 
	};
	for (int i = 0; i < 3; i++)
		if (str.find(spams[i]) < str.size())
			return true;
	return false;


}