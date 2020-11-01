#ifndef __MULT__
#define __MULT__
class Mult : public Operate
{
	public: 
		Mult(Op* left, Op* right): Operate(left,right) {};
		double evaluate()	
 		{
			return left->evaluate() * right->evaluate();
		}
		
		std::string stringify()
		{
			return "( " + left->stringify() + ") " + "*" + "( " right->stringify() + ")";
		}

}








#endif
