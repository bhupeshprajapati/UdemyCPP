#include<iostream>
#include<iomanip>
#include<vector>
#include<string>

struct City{
	std::string name;
	long population;
	double cost;
};

//Assume each country has has atleast one city
struct Country{
	std::string name;
	std::vector<City> cities;
};

struct Tours{
	std::string title;
	std::vector<Country> countries ;
};

void ruler(){
std::cout<<"1234567890123456789012345678901234567890123456789012345678901234567890"<<std::endl;
}
int main(){
	
	Tours tours{
		"Tour Ticket Prices from Miami",
		{
			{
				"Colombia",{
					{"Bogota", 8778999,400.98},
					{"Cali",240000,420.12},
					{"Medellin",234332423,342.34},
					{"Cartagena",9324932,4335.23}
				}
			},
			{
				"Brazil",{
					{"Rio De Janiero", 8778999,400.98},
					{"Sao Paulo",240000,420.12},
					{"Salvador",234332423,342.34},
					{"zuzupark",9324932,4335.23}
			}
			},
			{
				"India",{
					{"Delhi", 8778999,400.98},
					{"Agra",240000,420.12},
					{"Jaipur",234332423,342.34},
					{"Vadodara",9324932,4335.23}
			}
		},
	
		}	
	};
	
	const int total_width{70};
	const int field1_width{20};//country name 
	const int field2_width{20};//city name
	const int field3_width{15};	//Population
	const int field4_width{15};//cost

	//Display the Report title header centered in width of total_width
	//make it a function for practice
	
	ruler();
	int title_length=tours.title.length();
	std::cout<<std::setw((total_width-title_length)/2)<<""<<tours.title<<std::endl;
	std::cout<<std::endl;
	std::cout<<std::setw(field1_width)<<std::left<<"Country"
				<<std::setw(field2_width)<<std::left<<"City"
				<<std::setw(field3_width)<<std::right<<"Population"
				<<std::setw(field4_width)<<std::right<<"Price"
				<<std::endl;
				
	std::cout<<std::setw(total_width)
			<<std::setfill('-')<<""
			<<std::endl;
			
	std::cout<<std::setfill(' ');
	std::cout<<std::setprecision(2)<<std::fixed;
			
//	for(auto country:tours.countries){
//		for(auto city:country.cities){
//			std::cout<<std::setw(field1_width)<<std::left<<country.name
//				<<std::setw(field2_width)<<std::left<<city.name
//				<<std::setw(field3_width)<<std::right<<city.population
//				<<std::setw(field4_width)<<std::right<<city.cost
//				<<std::endl;
//		}
//	}
	//========== OR ===============
	for(Country country:tours.countries){
		for(size_t i=0;i<country.cities.size();i++){
			std::cout<<std::setw(field1_width)<<std::left<<((i==0)?country.name:" ")
				<<std::setw(field2_width)<<std::left<<country.cities.at(i).name
				<<std::setw(field3_width)<<std::right<<country.cities.at(i).population
				<<std::setw(field4_width)<<std::right<<country.cities.at(i).cost
				<<std::endl;
		}
	}
			
			
	return 0;
}