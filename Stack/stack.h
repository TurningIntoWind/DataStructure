#pragma once

#include <iostream>

// 顺序栈
struct Stack {
	int* base;                    // 栈底指针
	int* top;                     // 栈顶指针，指向栈顶下一位置
	const int STACKMAXSIZE; // 栈最大长度
	Stack(int size) : base(nullptr), top(nullptr), STACKMAXSIZE(size) {}
};

// 初始化
bool InitStack(Stack&);

// 判断栈是否为空
bool isEmpty(const Stack&);

// 判断栈是否满
bool isFull(const Stack&);

// 获取栈的长度
int length(const Stack&);

// 销毁栈
bool DestroyStack(Stack&);

// 清空栈
void ClearStack(Stack&);

// 入栈
bool Push(Stack&, int);

// 出栈
bool Pop(Stack&, int&);

// 获取栈顶元素
bool top(const Stack&, int&);
