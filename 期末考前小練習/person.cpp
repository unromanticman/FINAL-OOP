#include "person.h"

int person::num = 0;
person::person()
{
	incNum();
}
person &person::setSex(string s){
	sex = s;
	return*this;
}
string person::getSex(){
	return sex;
}
void person::incNum(){
	num++;
}
person::~person()
{
	num--;
}
