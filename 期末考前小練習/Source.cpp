#include <iostream>
#include <vector>
#include "person.h"
#include "boy.h"
#include "girl.h"
using namespace std;

template <typename T>
void xd(){
	T num = 11 / 3.0;//����3.0�~�|�O�p��
	cout <<"���G:"<<num << endl;
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

	//���G�L�k�S�h���S�h�� �]��friend��virtual�Ѽƭn�@��
	for (size_t i = 0; i < person.size(); i++){
		person[i]->setPersonSex();
		person[i]->printf();
	}
	cout << "�榡==10===�ԩԩ�" << endl;
	boy polyb;
	polyb.setPersonSex();
	cin >> polyb;
	cout << polyb;

	cout << "�˪O" << endl;
	cout << "double��:" << endl;
	xd<double>();
	cout << "int��:" << endl;
	xd<int>();

	cout << "�ثe�@�@���X�Ӫ���" << endl;//vector�ŧi�ɨä��|�h�إߪ���n�ۤv�ŧi�ɤ~�|�[�J
	cout << "person��:" << person::num<< endl;
	system("pause");
}