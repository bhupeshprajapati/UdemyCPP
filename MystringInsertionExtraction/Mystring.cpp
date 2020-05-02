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

//Global function for equality operator overloading

bool operator==(const Mystring &lhs,const Mystring &rhs){
	if(std::strcmp(lhs.str,rhs.str)==0)
		return true;
	else return false;
}

//Global function for unary - operator over loading
Mystring operator-(const Mystring &lhs){
	size_t buffsize = std::strlen(lhs.str)+1;
	char *buff=new char[buffsize];
	std::strcpy(buff,lhs.str);
	for(size_t i=0;i<buffsize-1;i++){
		buff[i]=std::tolower(buff[i]);
	}
	Mystring temp{buff};
	delete [] buff;
	return temp;
}

//overloaded insertion operator

std::ostream &operator<<(std::ostream &os,const Mystring &rhs){
	os<<rhs.str;
	return os;
}

//overloaded extraction operator 

std::istream &operator>>(std::istream &in,Mystring &rhs){
	char *buff= new char[1000];
	in>>buff;
	rhs=Mystring{buff};
	delete [] buff;
	return in;
	
}
