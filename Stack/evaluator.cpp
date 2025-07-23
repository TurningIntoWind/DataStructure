#include "evaluator.h"

int Eval(const std::string& exp)
{
    Stack stk(100);
    InitStack(stk);

    for (int i = 0; i < exp.size(); i++)
    {
        if (isdigit(exp[i]))
            Push(stk, exp[i] - '0');

        else
        {
            int o1 = -1, o2 = -1, res = -1;
            Pop(stk, o2);
            Pop(stk, o1);

            switch (exp[i])
            {
            case '+': res = o1 + o2; break;
            case '-': res = o1 - o2; break;
            case '*': res = o1 * o2; break;
            case '/': res = o1 / o2;
            }

            Push(stk, res);
        }
    }

    int end = -1;
    top(stk, end);
    DestroyStack(stk);

    return end;
}
