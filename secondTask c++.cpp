// secondTask c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iostream>
#include<list>
#include "Number.h"
Number doesNothing(Number num) {
    return num;
}
Number& doesNothin2(Number & num) {

    return num;
}
void print(Number n1) {
    std::cout << n1.getNumberName() << std::endl;

}
void print2(Number *n1) {
    std::cout << n1->getNumberName() << std::endl;

}
void procesVector(std::vector<Number> numbers, int len) {
    if (len > 10 || len < 5) return;
    for (int i = 0; i < len; i++) {
        int a;
        std::string b;
        std::cin >> a >> b;
        Number num = Number(a, b);

        numbers.push_back(num);
    }
    for (Number num : numbers) {
        print(num);

    }

}
void procesList(std::list<Number> numbers, int len) {
    if (len > 10 || len < 5) return;
    for (int i = 0; i < len; i++) {
        int a;
        std::string b;
        std::cin >> a >> b;
        Number num = Number(a, b);
        numbers.push_back(num);
    }
    for (Number num : numbers) {
        print(num);

    }

}
int main()
{
    // static class instance 
    Number n1(1, "One");
    Number n2(2, "two");
    n1 = n2;
    //n1 = &n2;
    // dynamci class instance 
    Number* n3 = new Number(2, 
        "Two");
    print(n1);
    print2(n3);
    delete n3;
    int vector_length;
    std::cin >> vector_length;
    std::vector<Number> number_vector;
    procesVector(number_vector, vector_length);


    
    
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
