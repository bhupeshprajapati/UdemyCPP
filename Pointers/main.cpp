#include<iostream>
#include<vector>
#include<string>
#include "Person.h"

using namespace std;

class family{
	private:
		string surname;
		int memberCount;
		double totalIncome;
		vector<string> memberlist;
	
	};

int main(){
	string name="bhupesh";
	Person bhupesh{name};
	cout<<bhupesh.getname();
//	bhupesh.name="bhupesh"; error
//	cout<<bhupesh.getname()<<endl;
//	bhupesh.talk("hello there");
//	return 0;
	

	}