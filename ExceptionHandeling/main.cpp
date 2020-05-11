//#include<iostream>

////simple exception handling

//int main(){
//	int miles{};
//	int gallons{};
//	double miles_per_gallon{};
//
//	std::cout<<"Enter the miles driven:";
//	std::cin>>miles;
//	std::cout<<"Enter the gallons used:";
//	std::cin>>gallons;
//	
//	try{
//		if(gallons==0)
//			throw 0;
//		miles_per_gallon=static_cast<double>(miles)/gallons;
//		std::cout<<"Result = "<<miles_per_gallon<<std::endl;
//	}
//	catch(int &exp){
//		std::cerr<<"Sorry you can't divide by zero"<<std::endl;
//	}
//	std::cout<<"Bye"<<std::endl;
//	return 0;
//}




/***Throwing exception from a function***/

//#include<iostream>
//
//double calc_mpg(int miles,int gallons){
//	if(gallons==0)
//		throw 0;
//	return static_cast<double>(miles)/gallons;
//}
//
//int main(){
//	int miles{};
//	int gallons{};
//	double miles_per_gallon{};
//
//	std::cout<<"Enter the miles driven:";
//	std::cin>>miles;
//	std::cout<<"Enter the gallons used:";
//	std::cin>>gallons;
//	
//	try{
//		miles_per_gallon=calc_mpg(miles,gallons);
//		std::cout<<"Result = "<<miles_per_gallon<<std::endl;
//	}
//	catch(int &exp){
//		std::cerr<<"Sorry you can't divide by zero"<<std::endl;
//	}
//	std::cout<<"Bye"<<std::endl;
//	return 0;
//}



/*** Handeling multipe Exception***/

// #include<iostream>
// 
// double calc_mpg(int miles,int gallons){
//	if(gallons==0)
//		 throw 0;
//	if(miles<0||gallons<0)
//		throw std::string{"Negative value Error"};
//	 return static_cast<double>(miles)/gallons;
// }
// int main(){
//	 int miles{};
//	 int gallons{};
//	 double mpg{};
//	 
//	 std::cout<<"Enter the miles:";
//	 std::cin>>miles;
//	 std::cout<<"Enter the gallons:";
//	 std::cin>>gallons;
//	 
//	 try{
//		mpg=calc_mpg(miles,gallons);
//		std::cout<<"Result: "<<mpg<<std::endl;
//	 }
//	 catch(int &exp){
//		 std::cerr<<"Can't divide by zero"<<std::endl;
//	 }
//	 catch(std::string &exp){
//		 std::cerr<<exp<<std::endl;
//	 }
//	 catch(...){ 
//		 std::cerr<<"All exception catched"<<std::endl;
//	 }
//	 std::cout<<"Bye";
//	 return 0;
//
// }



/*** user made exception classes ***/

//#include<iostream>
//
//class DivideByZeroError{};
//class NegativeValueError{};
//
// double calc_mpg(int miles,int gallons){
//	 DivideByZeroError a;
//	 NegativeValueError b;
//	if(gallons==0)
//		 throw a;
//	if(miles<0||gallons<0)
//		throw b;
//	 return static_cast<double>(miles)/gallons;
// }
// int main(){
//	 int miles{};
//	 int gallons{};
//	 double mpg{};
//	 
//	 std::cout<<"Enter the miles:";
//	 std::cin>>miles;
//	 std::cout<<"Enter the gallons:";
//	 std::cin>>gallons;
//	 
//	 try{
//		mpg=calc_mpg(miles,gallons);
//		std::cout<<"Result: "<<mpg<<std::endl;
//	 }
//	 catch(DivideByZeroError &exp){
//		 std::cerr<<"Can't divide by zero"<<std::endl;
//	 }
//	 catch(NegativeValueError &exp){
//		 std::cerr<<"Negative value Error"<<std::endl;
//	 }
//	 catch(...){ 
//		 std::cerr<<"All exception catched"<<std::endl;
//	 }
//	 std::cout<<"Bye";
//	 return 0;
//
// }