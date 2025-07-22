#include "stack.h"

bool InitStack(Stack& S)
{
	S.base = new(std::nothrow) int[S.STACKMAXSIZE];
	if (!S.base) return false; // 内存分配失败
	S.top = S.base;
	return true;
}

bool isEmpty(const Stack& S)
{
	return S.base == S.top;
}

bool isFull(const Stack& S)
{
	return S.top - S.base == S.STACKMAXSIZE;
}

int length(const Stack& S)
{
	return S.top - S.base;
}

bool DestroyStack(Stack& S)
{
	// 销毁的前提是栈已初始化
	if (S.base != nullptr) 
	{
		// 判断S.base是否为空仅仅是为了避免重复销毁
		delete[] S.base;
		S.base = S.top = nullptr;
		return true;
	}
	return false;
}

void ClearStack(Stack& S)
{
	S.top = S.base;
}

bool Push(Stack& S, int item)
{
	if (isFull(S)) return false; // 栈已满
	*S.top++ = item;
	return true;
}

bool Pop(Stack& S, int& item)
{
	if (isEmpty(S)) return false; // 栈空
	item = *--S.top;
	return true;
}

bool top(const Stack& S, int& item)
{
	if (isEmpty(S)) return false; // 栈空
	item = *(S.top - 1);
	return true;
}
