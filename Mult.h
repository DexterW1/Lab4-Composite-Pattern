#ifndef __MULT__
#define __MULT__

#include "Operator.h"
class Mult : public Operate
{
	public: 
		Mult(Base* left, Base* right): Operate(left,right) {};
		double evaluate()	
 		{
			return left->evaluate() * right->evaluate();
		}
		
		std::string stringify()
		{
			return "( " + left->stringify() + ") " + "*" + "( " +  right->stringify() + ")";
		}

};








#endif
