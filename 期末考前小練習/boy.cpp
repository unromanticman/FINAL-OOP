#include "boy.h"
#include <iostream>
#include <iomanip>
using namespace std;

istream &operator >>(istream & input, boy & right){
	
	//格式==10===拉拉拉
	input.ignore(2);
	input >> setw(2) >> right.old; //因為friend可直接存取private
	input.ignore(3);
	input>>setw(10)>>right.talk;
	return input;
}
ostream &operator<<(ostream & output, boy & right){
	output << "性別" << right.getSex() << endl;
	output << "年齡" << right.old << endl;
	output << "talk" << right.talk << endl;
	return output;
}
boy::boy()
{

	setSex();
}
void boy::printf(){
	cout << "性別" << person::getSex() << endl;
}
void boy::setPersonSex(){
	setSex("男");
}

boy::~boy()
{
}
