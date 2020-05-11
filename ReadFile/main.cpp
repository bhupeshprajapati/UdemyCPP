#include<iostream>
#include<fstream>
#include<iomanip>

int main(){
	std::ifstream fin;
	std::string line;
	int num;
	double total;
	
	fin.open("test.txt");
	if(!fin){
		std::cerr<<"File not found !"<<std::endl;
		return 1;
	}
	fin>>line>>num>>total;
	std::cout<<line<<std::endl;
	std::cout<<num<<std::endl;
	std::cout<<total<<std::endl;
	
	while(fin>>line>>num>>total){
		std::cout<<std::setw(10)<<std::left<<line
		<<std::setw(10)<<num
		<<std::setw(10)<<total
		<<std::endl;
	}
	
	fin.close();
	return 0;
}