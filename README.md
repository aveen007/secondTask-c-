# secondTask c++
Нормальный конструктор вызывается, когда мы инициализируем новые объекты Number
```c++
    Number n1(1, "One");
    Number n2(2, "two");
```
Оператор копирования присваивания вызывается, когда правой стороной операции присваивания является lvalue (хранящийся в памяти, а не временный)
```c++
    n1 = n2;
```
Оператор перемещения присваивания вызывается, когда правой стороной операции присваивания является временное rvalue, которое собирается уничтожить
```c++
    Number n3;
    n3= Number(2,"Two");
```
Конструктор копирования вызывается, когда элементы добавляются в вектор в функции processVector, потому что создается копия члена класса, который добавляется, когда мы выполняем инструкцию pushback.
```c++
        Number num = Number(a, b);
        numbers.push_back(num);
```
Конструктор перемещения вызывается, когда добавляется более одного элемента в вектор, так как функция pushback, вероятно, не находит достаточно места в текущем векторе для выделения нового элемента, и поэтому создается новая копия с большими размерами, и старые элементы перемещаются в новую память.
```c++
        Number num = Number(a, b);
        numbers.push_back(num);
```
Деструктор вызывается, когда мы удаляем члены класса или каждый раз, когда временные члены класса уничтожаются.
Функция, используемая для обработки векторов
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
Функция, используемая для обработки списков
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
Передача членов класса и возврат их, как по ссылке, так и без
```c++
Number doesNothing(Number num) {
    return num;
}
Number& doesNothin2(Number & num) {

    return num;
}
```
** для определения, пожалуйста, смотрите Number.h
** для реализации, пожалуйста, смотрите Number.cpp
** для файла, использующего класс Number, пожалуйста, смотрите secondTaskc++.cpp

## консольный вывод
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
Чтобы автоматически закрыть консоль при остановке отладки, включите Tools->Options->Debugging->Automatically close the console when debugging stops.
Нажмите любую клавишу, чтобы закрыть это окно . . .
```

