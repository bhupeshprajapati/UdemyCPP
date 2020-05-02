#include <iostream>
using namespace std; 
int main(){
	int width{0} ;int height{0};int length{0};
	cout<<"enter the width of the room";
	cin>>width;

	cout<<"enter the length of the room";
	cin>>length;
	
	cout<<"enter the height of the room";
	cin>>height;
	cout<<"volume of the room is"<<length*width*height;
	return 0;
}