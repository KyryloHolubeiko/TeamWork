#include <iostream>
#include <string>

using namespace std;

class Dog {
	string name;
	string type;
public:
	Dog(string name, string type) { this->name = name; this->type = type; }

	void Sound() {
		cout << "GAV GAV" << endl;
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