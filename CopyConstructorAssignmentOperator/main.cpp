#include<iostream>

using namespace std;

class Base{
private:
	int value;
public:
	Base()
	:value{0}{
		cout<<"Base no-args constructor"<<endl;
	}

	Base(int x)
	:value{x}{
		cout<<"int Base constructor"<<endl;
	}
	Base(const Base &other)
	:value{other.value}{
		cout<<"Base Copy constructor"<<endl;
	}
	Base &operator=(const Base &rhs){
		cout<<"Base operator="<<endl;
		if(this==&rhs)
			return *this;
		value=rhs.value;
		return *this;
	}
	~Base(){cout<<"Base Destructor"<<endl;}
	
};

class Derived :public Base{
private:
	int doubledValue;
public:
	Derived():
	Base{}{
		cout<<"Derived no-args constructor"<<endl;
	}
	Derived(int x)
	:Base{x},doubledValue{x*2}{
		cout<<"int Derived constructor"<<endl;
	}
	Derived(const Derived &other)
	:Base{other},doubledValue{other.doubledValue}{
		cout<<"Derived Copy Constructor"<<endl;
	}
	Derived &operator=(const Derived &rhs){
		if(this==&rhs)
			return *this;
		Base::operator=(rhs);
		doubledValue=rhs.doubledValue;
		return *this;
	}
	
	~Derived(){
		cout<<"Derived Destructor"<<endl;
	}
};



int main(){

//	Base b{100};  	//Overloaded constructor
//	Base b1{b};		//Copy constructor
//	b=b1;			//copy assignment

Derived d{100};
Derived d1{d};
d=d1;
	return 0;
}