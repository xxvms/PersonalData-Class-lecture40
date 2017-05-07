#pragma once
#include <string>

class PersonalData
{
private:
	short age;
	std::string name;
public:
	PersonalData();
	~PersonalData();

	// get Age method
	short getAge();
	
	//set Age method
	void setAge(short age_);
};

