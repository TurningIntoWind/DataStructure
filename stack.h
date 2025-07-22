#pragma once

#include <iostream>

// ˳��ջ
struct Stack {
	int* base;                    // ջ��ָ��
	int* top;                     // ջ��ָ�룬ָ��ջ����һλ��
	const int STACKMAXSIZE; // ջ��󳤶�
	Stack(int size) : base(nullptr), top(nullptr), STACKMAXSIZE(size) {}
};

// ��ʼ��
bool InitStack(Stack&);

// �ж�ջ�Ƿ�Ϊ��
bool isEmpty(const Stack&);

// �ж�ջ�Ƿ���
bool isFull(const Stack&);

// ��ȡջ�ĳ���
int length(const Stack&);

// ����ջ
bool DestroyStack(Stack&);

// ���ջ
void ClearStack(Stack&);

// ��ջ
bool Push(Stack&, int);

// ��ջ
bool Pop(Stack&, int&);

// ��ȡջ��Ԫ��
bool top(const Stack&, int&);
