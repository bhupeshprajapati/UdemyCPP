#include<iostream>
#include<fstream>
#include<iomanip>
#include<vector>
void printHeader(){
	std::cout<<std::setw(20)<<std::left<<"Name"
		<<"Marks"<<std::endl;
		std::cout<<std::right<<std::setfill('-')<<std::setw(30)<<"-"<<std::endl;
		std::cout<<std::setfill(' ')<<std::left;
}
int main(){
	std::string correct_sol;
	std::string curr_stu_sol;
	std::vector<int> marks_avg;
	std::string name;
	std::string file_name{"test.txt"};
	std::ifstream fin{file_name};
	int count{0};
	if(!fin){
		std::cerr<<"File not Found"<<std::endl;
	}
	else{
		printHeader();
		fin>>correct_sol;
		while(!fin.eof()){
			++count;
			fin>>name;
			std::cout<<std::setw(20)<<name;
			fin>>curr_stu_sol;
			int marks=0,i=0;
			while(i<5){
				if(curr_stu_sol.at(i)==correct_sol.at(i))
					marks++;
				i++;
			}
			marks_avg.push_back(marks);
			std::cout<<marks<<std::endl;
			
		}
		int total{0};
		double avg{0.0};
		for(auto m:marks_avg){
			total+=m;
		}
		if(count==0){
			std::cout<<"No student record"<<std::endl;
			return 1;
		}
		
		avg=static_cast<double>(total)/count;
		std::cout<<"------------------------------"<<std::endl;
		std::cout<<std::setw(20)<<"Average"
		<<avg<<std::endl;
	}
	fin.close();
	return 0;
}