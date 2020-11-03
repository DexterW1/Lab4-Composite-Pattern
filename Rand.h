#ifndef __RAND__
#define __RAND__

#include <string>

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
			return value;
		}
		std::string stringify()
		{
			return to_string(value);
		}


}

#endif
