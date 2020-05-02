#include<iostream>
using namespace std;
int main(){
	int num=0;
	const int lower{15};
	const int upper{20};

	cout<<boolalpha;
	
	cout<<"enter and integer between "<<lower<<" and "<<upper<<":";
	cin>>num;
	bool within_bounds{false};
	within_bounds=(num>lower && num<upper);
	cout<<"The number is between "<<lower<<" and "<<upper<<":"<<within_bounds<<endl;
	return 0;

	}