#pragma once
#include "person.h"
class girl :
	public person
{
	friend istream &operator>>(istream &, girl &);
	friend ostream &operator<<(ostream &, girl &);
private:
	int old;
	string talk;
public:
	virtual void setPersonSex();
	virtual void printf();
	girl();
	~girl();
};

