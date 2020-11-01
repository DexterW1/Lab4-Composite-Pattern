#ifndef __RAND__
#define __RAND__



#include <string>
#include <stdlib.h>

using namespace std;
 

class Rand : public Base
{
	private:
		Op* value;
	public:
		Rand()
		{
			value = new Op(rand() % 100);
		}
		double evaluate()
		{
			return value->evaluate();
		}
		string stringify()
		{
			return to_string(value->evaluate());
		}


};

#endif
