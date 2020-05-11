#include<iostream>

int main(){
	std::cout<<"My Template"<<std::endl;
	int num{255};
	std::cout<<std::hex<<num<<std::endl;
	std::cout<<std::oct<<num<<std::endl;
	std::cout<<std::dec<<num<<std::endl;
	return 0;
}