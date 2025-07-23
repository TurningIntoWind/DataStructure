#include <iostream>
#include "evaluator.h"

int main()
{
	std::string exp;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> exp;
		std::cout << Eval(exp) << std::endl;
	}

	return 0;
}

// 35+
// 35+2*
// 123 * +3 - 2 /
