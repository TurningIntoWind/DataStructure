#include "stack.h"

bool InitStack(Stack& S)
{
	S.base = new(std::nothrow) int[S.STACKMAXSIZE];
	if (!S.base) return false; // �ڴ����ʧ��
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
	// ���ٵ�ǰ����ջ�ѳ�ʼ��
	if (S.base != nullptr) 
	{
		// �ж�S.base�Ƿ�Ϊ�ս�����Ϊ�˱����ظ�����
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
	if (isFull(S)) return false; // ջ����
	*S.top++ = item;
	return true;
}

bool Pop(Stack& S, int& item)
{
	if (isEmpty(S)) return false; // ջ��
	item = *--S.top;
	return true;
}

bool top(const Stack& S, int& item)
{
	if (isEmpty(S)) return false; // ջ��
	item = *(S.top - 1);
	return true;
}
