#include "girl.h"
#include <iostream>
#include <iomanip>
using namespace std;

ostream &operator<<(ostream & output, girl & right){
	output<<"�ʧO"<<right.getSex()<<endl;
	output << "�~��" << right.old << endl;
	output << "talk" << right.talk << endl;
	return output;
}

istream &operator >>(istream & input, girl & right){
	//�榡==10=
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
	setSex("�k");
}
void girl::printf(){
	cout << "�ʧO" << person::getSex() << endl;
}
girl::~girl()
{
}
