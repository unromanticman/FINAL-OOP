#pragma once
#include <string>
using namespace std;
class person
{
private:
	string sex;
public:

	static int num; //��l��0 �]static
	virtual void setPersonSex()=0;//�h�Τ����&�Ӽg
	person &setSex(string = "���]");
	string getSex();
	virtual void printf()=0;
	void incNum();
	person();
	~person();
};

