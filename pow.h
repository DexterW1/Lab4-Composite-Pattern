#ifndef __POW_H__
#define __POW_H__

#include "Operator.h"
#include "op.hpp"
#include <cmath>
class Pow: public Operate {

	public:
		Pow(Base* left,Base* right): Operate(left,right) {};

		double evaluate() {
			return  pow(left->evaluate(),right->evaluate());
		}
		std::string stringify(){
			return "(" + left->stringify() +")" + "**"+ right->stringify() + ")";
		}
};
#endif //__POW_H__  
