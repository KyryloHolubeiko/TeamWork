#include <iostream>
#include <string>

using namespace std;

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
Hamster::~Hamster(){}