#include "Person.h"
#include <iostream>


PersonalData::PersonalData()
{
}


PersonalData::~PersonalData()
{
}


// lets see comments
short PersonalData::getAge()
{
	return age;
}

void PersonalData::setAge(short age_)
{
	if (age_ < 0)
	{
		std::cout << "I am sorry age must be bigger then zero!!" << std::endl;
		std::cout << "setting age to zero! ";
		age = 0;
	}
	else(age = age_);
}

