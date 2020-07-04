#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


class social_networks; // объявляем дружественный класс

class Human // имя класса
{

private: // спецификатор доступа private
	static string genus; // статический компонент класса 
	char *name;
	int year;
	float body_weight;

public: // спецификатор доступа public
	Human() {    //конструктор класса
		year = 0;
		body_weight = 0;
	}


	void message() // функция (метод класса) выводящая сообщение на экран
	{
		cout << "\nНАШ КЛАСС: ЧЕЛОВЕК\n";
	}
	void getHuman(char *name, int year, float body_weight) // отобразить  
	{
		cout << "Имя: " << name << endl;
		cout << "Возраст: " << year << endl;
		cout << "Вес: " << body_weight << endl;
		cout << "Вид: " << genus << endl;
	}
	~Human() // это деструктор
	{
		cout << "Тут сработал деструктор" << endl;
	}
	friend class social_networks;//класс соц.сети стал дружественным
}; // конец объявления класса Human

string Human::genus = "homo sapiens";

class social_networks {
	friend class Human;
private:
	string username;
public:
	void getUsername(Human obj_Human) {
		username = obj_Human.name;
		cout << "Имя в соц.сети: Cool" << username << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "rus"); // установка локали
	const int SIZE = 100;
	char name[SIZE];
	int year;
	float body_weight;
	cout << "Введите Имя, возраст, вес человека!\nИмя: ";

	cin.get(name, SIZE);
	cout << "Возраст: "; cin >> year;
	cout << "Вес: ";     cin >> body_weight;

	Human obj_Human; // объявление объекта
	obj_Human.message(); // вызов функции класса message
	obj_Human.getHuman(name, year, body_weight); // отобразить  
	social_networks account;
	account.getUsername(obj_Human);
	
	return 0;
}