#include<iostream>
#include "Mystring.h"

using namespace std;





int main(){
	
Mystring a{"hello"};
Mystring b;

b=a;
b="This is a test"	;
	
	
	Mystring empty;				//no args constructor
	Mystring larry{"LARRY"};	// overloaded constructor
	Mystring stooge{larry};		//copy constructor
	
	cout<<(larry==stooge)<<endl;  //false
	larry=-larry;
	larry.display();
	
	
	empty.display();
	larry.display();
	stooge.display();
		
	return 0;
}