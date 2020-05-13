#include<iostream>
#include<string>

template <typename T>
T min(T a,T b){
	return (a<b)?a:b;
}

template <typename T1,typename T2>
void func(T1 a,T2 b){
	std::cout<<a<<" "<<b<<std::endl;
}

struct Person{
	std::string name;
	int age;
	bool operator<(const Person &rhs)const{
		return this->age<rhs.age;
	}
};
std::ostream &operator<<(std::ostream &os,const Person &p){
		os<<p.name;
		return os;
	}
template <typename T>
void my_swap(T &a, T &b){
	T temp;
	temp=a;
	a=b;
	b=temp;
}

int main(){
	
	Person p1{"Bhupesh",22};
	Person p2{"Rakesh",17};
	
	Person p3= min(p1,p2);// overloaded < operator in the Person structure
	std::cout<<p3.name<<" is Younger"<<std::endl;
	std::cout<<min<int>(2,3)<<std::endl;
	std::cout<<min(2,3)<<std::endl;
	std::cout<<min('A','B')<<std::endl;
	std::cout<<min(23.43,56.45)<<std::endl;
	std::cout<<min(5+2*2,7+40)<<std::endl;
	
	func<int,int>(10,38);
	func(10,40);
	func<char,double>('A',12.4);
	func('A',12.4);
	func(1000,"Testing");
	func(2000,std::string{"Pinky"});
	func(p1,p2);//created an overloaded << operator of Person
	
	int a=10;
	int b=20;
	std::cout<<a<<" "<<b<<std::endl;
	my_swap(a,b);
	std::cout<<a<<" "<<b<<std::endl;
	
	return 0;
}