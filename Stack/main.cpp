#include <iostream>
#include "Stack.cpp"
#include "Stack.h"
int main()
{
    std::cout << "hello1" << std::endl;
    Stack S;
    S.push(10);
    std::cout << S.top() << std::endl;
    S.push(20);
    for (int i = 1; i< 11; i++)
        S.push(100*i);
    for (int i = 1; i< 11; i++)
        S.pop();
    std::cout << S.top() << std::endl;
    return 0;

}
