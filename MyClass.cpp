#include <iostream>
using namespace std;

  class MyClass {
    private:
	int hp;
	string str;
    public:  //Constructor
	MyClass();
	MyClass(int a, string b);
	void print ();
	friend bool operator== (const MyClass &m1, const MyClass &m2);
	friend bool operator< (const MyClass &m1, const MyClass &m2);
	friend bool operator> (const MyClass &m1, const MyClass &m2);
  };

  MyClass::MyClass()
  {
	hp = 0;
	str = "Car make and model";
  }

  MyClass::MyClass(int a, string b)
  {
	hp = a;
	str = b;
  }

  void MyClass::print() 
  {
	cout << " Horsepower: " << hp << endl;
	cout << " Car: " << str << endl;
  }
 
  bool operator==(const MyClass &m1, const MyClass &m2) {
	return (m1.hp == m2.hp);
  }
  
  bool operator< (const MyClass &m1, const MyClass &m2) {
	return (m1.hp < m2.hp);
  }

  bool operator> (const MyClass &m1, const MyClass &m2) {
	return (m1.hp > m2.hp);
  }

int main() {
 
  MyClass bmw (575, "BMW M5");
  MyClass ford (435, "Ford Mustang");
  cout << "Car 1: " << endl;
  bmw.print();
  cout << "Car 2: " << endl;
  ford.print();

  if(bmw == ford) {
	cout << "The M5 and Mustang have the same horsepower." << endl;
  }
  if (bmw > ford) {
	cout << "The M5 has more power than the Mustang." << endl;
  }
  if (bmw < ford) {
	cout << "The Mustang has more power than the M5." << endl;
  }
  cout << "Done! " << endl;

 return 0;
}
