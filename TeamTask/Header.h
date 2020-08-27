#include <iostream>
#include <string>

using namespace std;
/*
������� ������ �������, ������, ��������, ������.
� ������� ������������ ���������� ��� ������� ��������� � ��� ��������������.

���������� ��� ������� �� ������� �������
Sound - ������ ���� ��������� (����� ������� � �������)
Show - ���������� ��� ���������
Type - ���������� �������� ��� �������.
Info - ���������� � ��������.
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