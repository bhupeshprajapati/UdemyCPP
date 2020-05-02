#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
	//start of new in this project
	
	friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
	friend std::istream &operator>>(std::istream &in, Mystring &rhs);
	
	//end of new in this project
	
	friend bool operator==(const Mystring &lhs,const Mystring &rhs);
	friend Mystring operator-(const Mystring &st);
private:
	
	char *str;
public:
	Mystring();
	Mystring(const char *s);
	Mystring(const Mystring &source);
	
	
	Mystring &operator=(const Mystring &rhs); //Copy assignment
	~Mystring();
	void display() const;
	int getLength()const;
	const char *getStr()const;

};

#endif // _MYSTRING_H_
