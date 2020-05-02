
#include<iostream>

using namespace std;
//Crashing Shallow copy constructor

//class Shallow{
//private:
//	int *data;
//public:
//	void setDataValue(int d){
//		*data=d;
//	}
//	int getDataValue(){
//		return *data;
//	}
//	Shallow(int d);
//	Shallow(const Shallow &source);
//	~Shallow();
//	
//};
//Shallow::Shallow(int d){
//	data=new int;
//	*data=d;
//}
//Shallow::Shallow(const Shallow &source)
//	:data{source.data}
//	{
//	cout<<"Copy constructor-shallow copy"<<endl;
//}
//Shallow::~Shallow(){
//	delete data;
//	cout<<"Destructor-freeing data"<<endl;
//}
//void displayShallow(Shallow s){
//	cout<<s.getDataValue()<<endl;
//}
//
//int main(){
//	std::cout<<"shallow copy"<<std::endl;
//	
//	Shallow obj1(100);
//	displayShallow(obj1);
//	
//	Shallow obj2(obj1);
//	obj2.setDataValue(1000);
//	return 0;
//}

//Deep copy constructor

class Deep{
private:
	int *data;
public:
	void setDataValue(int d){
		*data=d;
	}
	int getDataValue(){
		return *data;
	}
	Deep(int d);
	Deep(const Deep &source);
	~Deep();
	
};
Deep::Deep(int d){
	data=new int;
	*data=d;
}
Deep::Deep(const Deep &source)
	:Deep{*source.data}		//Delegated Constructor doing the deep copy
	{
	cout<<"Copy constructor-Deep copy"<<endl;
}
Deep::~Deep(){
	delete data;
	cout<<"Destructor-freeing data"<<endl;
}
void displayDeep(Deep s){
	cout<<s.getDataValue()<<endl;
}

int main(){
	std::cout<<"Deep copy"<<std::endl;
	
	Deep obj1(100);
	displayDeep(obj1);
	
	Deep obj2(obj1);
	obj2.setDataValue(1000);
	return 0;
}