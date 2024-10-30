# secondTask c++
A normal constructor is called when we initialize new Number objects
```c++
    Number n1(1, "One");
    Number n2(2, "two");
```
an assignment copy operator is called when the right side of the assignment operation is an lvalue (stored in the memory and not temporary)
```c++
    n1 = n2;
```
an assignment move operator is called when the right side of the assignment operation is a temporary rvalue that is about to be destroyed
```c++
    Number n3;
    n3= Number(2,"Two");
```
a copy constructor is being called when pussing elements into a vector in the function processVector, that is because a copy of the class member being pushed is created when we execute the pushback instruction.
```c++
        Number num = Number(a, b);
        numbers.push_back(num);
```
a move constructor is being called when pushing there are more than one element in the vector being pushed back because the pushback function probably doesn't fine enough space inside the current vector to allocate a new element so a new copy is created with a bigger size, and the old elements are being moved to the new memory
```c++
        Number num = Number(a, b);
        numbers.push_back(num);
```
the destructor is being called when we delete the class members, or every time a temporary class member is destroyed.
The function used for processing vectors
```c++
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
```
The function used for processing vectors
```c++
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
```
passing class members and returning them, both by reference or not
```c++
Number doesNothing(Number num) {
    return num;
}
Number& doesNothin2(Number & num) {

    return num;
}
```
** for the definitions please see Number.h
** for implementation please see Number.cpp
** for the file using the Number class, please see secondTaskc++.cpp

## console output
```none
Normal constructor
Normal constructor
assigmenet copy operator
Normal empty constructor
Normal constructor
assigmenet move operator
destructor
Copy constructor
two
destructor
5
1 one
Normal constructor
Copy constructor
destructor
2 two
Normal constructor
Copy constructor
Move constructor
destructor
destructor
3 three
Normal constructor
Copy constructor
Move constructor
Move constructor
destructor
destructor
destructor
4 four
Normal constructor
Copy constructor
Move constructor
Move constructor
Move constructor
destructor
destructor
destructor
destructor
5 five
Normal constructor
Copy constructor
Move constructor
Move constructor
Move constructor
Move constructor
destructor
destructor
destructor
destructor
destructor
Copy constructor
Copy constructor
one
destructor
destructor
Copy constructor
Copy constructor
two
destructor
destructor
Copy constructor
Copy constructor
three
destructor
destructor
Copy constructor
Copy constructor
four
destructor
destructor
Copy constructor
Copy constructor
five
destructor
destructor
destructor
destructor
destructor
destructor
destructor
destructor
destructor
destructor

D:\secondTask c++\x64\Debug\secondTask c++.exe (process 17376) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
```
