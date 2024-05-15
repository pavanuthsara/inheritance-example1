#include <iostream>
#include <cstring>
using namespace std;

class Shape {
protected:
	char name[20];

public:
	void assignName(const char* pname);
	void displayName();
};

void Shape::assignName(const char* pname) {
	strcpy_s(name, pname);
}

void Shape::displayName() {
	cout << "Shape name : " << name << endl;
}

class Circle : public Shape {
private:
	int length;
	int width;

public:
	void assignDetails(int l, int w);
	void displayDetails();
};

void Circle::assignDetails(int l, int w) {
	length = l;
	width = w;
}

void Circle::displayDetails() {
	cout << "Lenght is : " << length << endl;
	cout << "Width is : " << width << endl;
}

int main() {

	Shape s1;

	s1.assignName("Circle");
	s1.displayName();

	Circle c1;

	c1.assignName("Circle child class");
	c1.assignDetails(10, 5);
	c1.displayName();
	c1.displayDetails();


	return 0;
}

