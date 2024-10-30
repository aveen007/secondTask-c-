#include "Number.h"
#include <iostream>

Number::Number():number_value(0), number_name("zero"){
	std::cout << "Normal empty constructor" << std::endl;
}
// normal constructor
Number::Number(int number_value, const std::string& number_name)
	:number_value(number_value), number_name(number_name) {
	std::cout << "Normal constructor" << std::endl;
}
// move contstructor
Number::Number(Number&& Other) noexcept
	:number_value(Other.number_value), number_name(Other.number_name) {
	std::cout << "Move constructor" << std::endl;

}
// copy constructor 
Number::Number(const Number& Other)
	:number_value(Other.number_value), number_name(Other.number_name) {
	std::cout << "Copy constructor" << std::endl;

}

// assignment copy operator 
Number& Number::operator = (const Number& number) {
	if (this != &number) {
		number_value = number.number_value;
		number_name = number.number_name;
	}
	std::cout << "assigmenet copy operator" << std::endl;

	return *this;
}
// assignment move operator 

Number& Number::operator = (const Number&& number) noexcept {
	if (this != &number) {
		number_value = number.number_value;
		number_name = std::move(number.number_name);
	}
	std::cout << "assigmenet move operator" << std::endl;

	return *this;
}

//Destructor
Number::~Number() {
	std::cout << "destructor" << std::endl;
}
