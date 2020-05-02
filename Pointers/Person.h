#ifndef _PERSON_H_
#define _PERSON_H_
#include<string>
class Person
{
private:
	std::string name;
	std::string family;
	char sex;
	int age;
	
public:
	Person(std::string name){
		this->name=name;
	}
	Person(std::string name,int age,char sex,std::string family){
		this->name=name;
		this->age=age;
		this->sex=sex;
		this->family=family;
	}
	std::string getname();
	void talk(std::string text);
	
	
	~Person();

};

#endif // _PERSON_H_
