#include<iostream>
#include<fstream>
#include<iomanip>

int main(){
	std::ifstream fin;
	std::string line;
		
	fin.open("poem.txt");
	if(!fin){
		std::cerr<<"File not found !"<<std::endl;
		return 1;
	}
	//formatted input
	while(std::getline(fin,line)){
		std::cout<<line<<std::endl;
	}
	fin.close();
	
	std::ifstream fin2;
	fin2.open("poem.txt");

	if(!fin2){
		std::cerr<<"File not found !"<<std::endl;
		return 1;
	}
	//Unformatted input
	std::cout<<std::endl<<std::endl<<"Unformatted read"<<std::endl;
	char c{};
	while(fin2.get(c)){
		std::cout<<c;
	}
	std::cout<<std::endl;
	fin2.close();
	return 0;
}