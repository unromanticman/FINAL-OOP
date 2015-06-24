#pragma once
#include "person.h"
class boy :
	public person
{

	friend istream &operator>>(istream &,boy &);
	friend ostream &operator<<(ostream &, boy &);
private:
	int old;
	string talk;
public:
	virtual void setPersonSex();
	virtual void printf();
	boy();
	~boy();
};

