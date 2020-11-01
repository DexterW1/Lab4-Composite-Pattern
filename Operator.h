#ifndef ____OPERATOR_H__
#define ____OPERATOR_H__

#include "base.h"

class Operate : public Base{
	protected:
		Base* left;
		Base* right;
	public:
		Operate(Base* left, Base* right) : left(left), right(right) {};

		virtual double evaluate() =0;

};

