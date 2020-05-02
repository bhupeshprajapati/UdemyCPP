#include<cstring>
#include<iostream>
#include "Mystring.h"


//No args constructor
Mystring::Mystring()
:str{nullptr}{
	str=new char[1];
	*str='\0';
}

//Overloaded constructor
Mystring::Mystring(const char *s)
	:str{nullptr}{
	if(s==nullptr){
		str=new char[1];
		*str='\0';
	}else{
		str=new char[std::strlen(s)+1];
		std::strcpy(str,s);
	}
}

//copy Constructor
Mystring::Mystring(const Mystring &source)
:str{nullptr}{
	str=new char[std::strlen(source.str)+1];
	str=strcpy(str,source.str);
}

//Destructor
Mystring::~Mystring()
{
	delete [] str;
}

//Display Method
void Mystring::display()const{
	std::cout<<str<<":" << getLength()<<std::endl;
}

//Length getter
int Mystring::getLength()const{
	return std::strlen(str);
}

//string getter
const char *Mystring::getStr()const{
	return str;
}

//Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
	std::cout<<"Copy assignment"<<std::endl;
	if(this==&rhs)
		return *this;
	delete [] this->str;
	str = new char[std::strlen(rhs.str)+1];
	std::strcpy(this->str,rhs.str);
	return *this;
}
/***************************  Most Important Part ********************/

Mystring &Mystring::operator =(Mystring &&rhs){
	std::cout<<"Using Move Assignment"<<endl;
	if(this==&rhs)
		return *this;
	delete [] str;
	str=rhs.str;
	rhs.str=nullptr;
	return *this;
}

/************************************************************************/