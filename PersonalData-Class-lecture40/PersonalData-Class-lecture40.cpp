// PersonalData-Class-lecture40.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "Person.h"


int main()
{
	PersonalData person, person2;
	person.setAge(-2);
	person2.setAge(55);

	std::cout << person.getAge() << std::endl;
	std::cout << person2.getAge() << std::endl;
	system("pause");
    return 0;
}

