#include <iostream>
#include <vector>
#include "person.h"
#include "boy.h"
#include "girl.h"
using namespace std;

template <typename T>
void xd(){
	T num = 11 / 3.0;//埃计3.0穦琌计
	cout <<"挡狦:"<<num << endl;
}
int main(){

	/*
	https://github.com/unromanticman/C-plusplus-homework/blob/master/EachLesson/13/%E6%9E%97%E9%83%81%E7%BF%94_A3261576_HWn/13_13/ShapePolymorphism/ShapePolymorphism/mainTest.cpp
	*/
	vector<person*> person(2);
	boy b;
	girl*g = new girl();
	person[0] = &b;
	person[1] = g;

	//礚猭更 friendノvirtual把计璶妓
	for (size_t i = 0; i < person.size(); i++){
		person[i]->setPersonSex();
		person[i]->printf();
	}
	cout << "Α==10===┰┰┰" << endl;
	boy polyb;
	polyb.setPersonSex();
	cin >> polyb;
	cout << polyb;

	cout << "妓狾" << endl;
	cout << "double:" << endl;
	xd<double>();
	cout << "int:" << endl;
	xd<int>();

	cout << "ヘ玡Τ碭ン" << endl;//vectorぃ穦ミン璶穦
	cout << "personΤ:" << person::num<< endl;
	system("pause");
}