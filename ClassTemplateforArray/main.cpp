//#include<iostream>
//#include<string>
//template <int N>
//class Array{
//	int size{N};
//	int values[N];
//	
//	friend std::ostream &operator<<(std::ostream &os,const Array<N> &arr){
//		os<<"[";
//		for(const auto &val: arr.values)
//			os<<val<<" ";
//		os<<"]"<<std::endl;
//		return os;
//	}
//public:
//	Array()=default;
//	Array(int init_val){
//		for(auto &item:values)
//			item=init_val;
//	}
//	void fill(int val){
//		for(auto &item:values)
//			item=val;
//	}
//	int get_size()const{
//		return size;
//	}
//	//overloaded subscript operator
//	int&operator[](int index){
//		return values[index];
//	}
//};
//
//int main(){
//	
//	Array<5> arr;
//	std::cout<<"The size of the nums is : "<<arr.get_size()<<std::endl;
//	
//	arr.fill(0);
//	std::cout<<arr;
//	
//	
//	std::cout<<"My Template"<<std::endl;
//	return 0;
//}


//Generic array 

#include<iostream>
#include<string>


template <typename T,int N>
class Array{
	int size{N};
	T values[N];
	
	friend std::ostream &operator<<(std::ostream &os,const Array<T,N> &arr){
		os<<"[";
		for(const auto &val: arr.values)
			os<<val<<" ";
		os<<"]"<<std::endl;
		return os;
	}
public:
	Array()=default;
	Array(T init_val){
		for(auto &item:values)
			item=init_val;
	}
	void fill(T val){
		for(auto &item:values)
			item=val;
	}
	int get_size()const{
		return size;
	}
	//overloaded subscript operator
	T &operator[](int index){
		return values[index];
	}
};

int main(){
	
	Array<int,5> arr;
	std::cout<<"The size of the nums is : "<<arr.get_size()<<std::endl;
	
	arr.fill(7);
	std::cout<<arr<<std::endl;
	
	Array<std::string,10>Stringarray{"Bhupesh"};
	std::cout<<Stringarray<<std::endl;
	
	Stringarray[0]="Rakesh";// or Stringarray[0]=std::string{"Rakesh"};
	
	std::cout<<"Updated stringarray:"<<std::endl<<Stringarray<<std::endl;
	std::cout<<"My Template"<<std::endl;
	return 0;
}