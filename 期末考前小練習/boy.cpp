#include "boy.h"
#include <iostream>
#include <iomanip>
using namespace std;

istream &operator >>(istream & input, boy & right){
	
	//�榡==10===�ԩԩ�
	input.ignore(2);
	input >> setw(2) >> right.old; //�]��friend�i�����s��private
	input.ignore(3);
	input>>setw(10)>>right.talk;
	return input;
}
ostream &operator<<(ostream & output, boy & right){
	output << "�ʧO" << right.getSex() << endl;
	output << "�~��" << right.old << endl;
	output << "talk" << right.talk << endl;
	return output;
}
boy::boy()
{

	setSex();
}
void boy::printf(){
	cout << "�ʧO" << person::getSex() << endl;
}
void boy::setPersonSex(){
	setSex("�k");
}

boy::~boy()
{
}
