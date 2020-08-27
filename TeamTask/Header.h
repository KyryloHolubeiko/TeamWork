#include <iostream>
#include <string>

using namespace std;
/*
Создать классы «Собака», «Кошка», «Попугай», «Хомяк».
С помощью конструктора установить имя каждого животного и его характеристики.

Реализуйте для каждого из классов функции
Sound - издает звук животного (пишем текстом в консоль)
Show - отображает имя животного
Type - отображает название его подвида.
Info - информация о животном.
*/
class Cat {
private:
	int age;
	string name;
	float weigh;
	string sound;
	string type;
public:
	Cat(int _age = 1, const char* _name = "Kot", float _weight = 1.0,
		const char* _type = "wild", const char* _sound = "Myr-myr") {
		age = _age;
		name = _name;
		weigh = _weight;
		sound = _sound;
		type = _type;
	}
	void Sound() {
		getline(cin, sound);
		cout << sound << "\n";
	}
	void Show() {
		cout << name << "\n";
	}
	void Type() {
		cout << type << "\n";
	}
	void Info() {
		cout << "age: " << age <<
			"\nname: " << name <<
			"\nweigh: " << weight <<
			"\ntype: " << type <<
			"\nsound: " << sound << endl;

	}
};

class Dog {
	string name;
	string type;
public:
	Dog(string name, string type) { this->name = name; this->type = type; }

	void Sound() {
		cout << "GAV  GAV" << endl;
	}
	void Show() {
		cout << "Name" << name << endl;
	}

	void Type() {
		cout << "Type" << type << endl;
	}

	void Info() {
		cout << "Name: " << name << endl << "Age: 10" << endl << "Sex: male" << endl << "10kg" << endl;
	}
};