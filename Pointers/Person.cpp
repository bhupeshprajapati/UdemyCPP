#include "Person.h"
#include<iostream>
#include<string>

std::string Person:: getname(){
	return this->name;
}
void Person::talk(std::string textToSay){
	std::cout<<name<<"says"<<textToSay<<std::endl;
}

Person::~Person(){};
