#include "stack.h"
#include <string>

int main()
{
	Stack stk(100);
	InitStack(stk);
	std::cout << isEmpty(stk) << std::endl;
	std::cout << length(stk) << std::endl;
	for (int i = 0; i < 10; i++)
		Push(stk, i);
	std::cout << isEmpty(stk) << std::endl;
	std::cout << length(stk) << std::endl;

	int item;
	Pop(stk, item);
	std::cout << length(stk) << std::endl;
	std::cout << "item = " << item << std::endl;

	top(stk, item);
	std::cout << "item = " << item << std::endl;

	ClearStack(stk);
	std::cout << isEmpty(stk) << std::endl;

	DestroyStack(stk);

	return 0;
}
