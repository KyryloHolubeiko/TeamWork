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
	float weight;
	string sound;
	string type;
public:
	Cat(int _age = 1, const char* _name = "Kot", float _weight = 1.0,
		const char* _type = "wild", const char* _sound = "Myr-myr") {
		age = _age;
		name = _name;
		weight = _weight;
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

class Hamster
{
	string name;
	int age;
	string sex;
	int weight;
public:
	Hamster();
	~Hamster();
	void Sound()const {
		cout << "PI PI PI PI \n";
	}
	void ShowName()const {
		cout << " Name: " << name << endl;
	}
	void GetType()const {
		cout << "Type: " << "rodent \n";
	}
	void ShowInfo()const {
		ShowName();
		cout << "Age: " << age << endl;
		cout << "Sex: " << sex << endl;
		cout << "Weight: " << weight << endl;
	}

};

Hamster::Hamster()
{
	name = "Hamchi";
	age = 0;
	sex = "male";
	weight = 0;

}
Hamster::~Hamster() {}