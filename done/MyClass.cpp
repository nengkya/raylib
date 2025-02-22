#include "iostream"


class MyClass {

	public:
		int myNumber;
		std::string myString;

};


int main() {

	MyClass myObject;

	myObject.myNumber = 15;
	myObject.myString = "Unreal Engine";

	/*character out*/
	std::cout << myObject.myNumber << std::endl;


}
