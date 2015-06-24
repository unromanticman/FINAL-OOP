#pragma once
#include <string>
using namespace std;
class person
{
private:
	string sex;
public:

	static int num; //初始為0 因static
	virtual void setPersonSex()=0;//多形不能用&來寫
	person &setSex(string = "未設");
	string getSex();
	virtual void printf()=0;
	void incNum();
	person();
	~person();
};

