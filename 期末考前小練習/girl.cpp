#include "girl.h"
#include <iostream>
#include <iomanip>
using namespace std;

ostream &operator<<(ostream & output, girl & right){
	output<<"性別"<<right.getSex()<<endl;
	output << "年齡" << right.old << endl;
	output << "talk" << right.talk << endl;
	return output;
}

istream &operator >>(istream & input, girl & right){
	//格式==10=
	input.ignore(2);
	input >> setw(2)>>right.old;
	input.ignore(3);
	input >> setw(10) >> right.talk;
	return input;
}
girl::girl()
{
	setSex();
}
void girl::setPersonSex(){
	setSex("女");
}
void girl::printf(){
	cout << "性別" << person::getSex() << endl;
}
girl::~girl()
{
}
