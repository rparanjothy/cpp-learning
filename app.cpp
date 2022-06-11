// Ram Paranjothy
// June 11 2022
#include <iostream>

using std::cout;
using std::endl;

void hi()
{
    cout << "Greetings..." << endl;
}

void bye()
{
    cout << "Bye Bye!!..." << endl;
}

void runFn(void (*x)()) // need the return and the args of the passed in function
{
    x();
}

int main()
{
    cout << "hi" << endl;
    int a = 77;
    cout << "a is : " << a << "\t &a is :" << &a << "\t *(&a) is " << *(&a) << endl;

    // * to the left of = is datatype;
    int *aPtr = &a;
    cout << "\naPtr is a pointer that stores the address of a : " << aPtr << endl;

    // * to the right of = get the value at the address stored in the pointer variable.
    int valueOfa = *aPtr;
    cout << "\nint valueOfa = *aPtr; \n ^^ means read the value stored in the address stored in aPtr and assigns to valueOfa: " << valueOfa << endl;

    // so we play
    cout << "\nvalueOfa is : " << valueOfa << "\t &valueOfa is :" << &valueOfa << "\t *(&valueOfa) is " << *(&valueOfa) << endl;
    cout << endl;
    cout << endl;
    cout << "Comparing a and valueOfa" << endl;
    cout << "a is : " << a << "\t &a is :" << &a << "\t *(&a) is " << *(&a) << endl;
    cout << "valueOfa is : " << valueOfa << "\t &valueOfa is :" << &valueOfa << "\t *(&valueOfa) is " << *(&valueOfa) << endl;
    cout << endl;
    cout << &a << endl;

    cout << "\nNow that I know the address of a via aPtr, I can put new value(v2) in that address by assiging like this (*aPtr = 99;)\n value stores in this ptr should be set to 99" << endl;

    *aPtr = 99;
    cout << "a is : " << a << "\t &a is :" << &a << "\t *(&a) is " << *(&a) << endl;

    // mutate value via the address instead of the variable name.
    *(&a) = 88;
    cout << "a is : " << a << "\t &a is :" << &a << "\t *(&a) is " << *(&a) << endl;

    // now using just one pointer, we can update that pointer to go to any variable and then update those vars via their address

    int x, y;
    int *bPtr;
    // point bPtr to the address of var x
    bPtr = &x;
    // bPtr = 10; // Error bc you are putting int in a pointer type
    *bPtr = 98; // put 98 in the address stored by bPtr
    cout << "bPtr is : " << bPtr << " value in this address is " << *bPtr << " var x is " << x << endl;
    cout << "\npointing " << bPtr << " to var y" << endl;
    bPtr = &y;
    cout << "bPtr is : " << bPtr << " value in this address is " << *bPtr << " var y is " << y << endl;
    *bPtr = 97;
    cout << "After assign via pointer" << endl;
    cout << "bPtr is : " << bPtr << " value in this address is " << *bPtr << " var y is " << y << endl;
    int m, n, b, v;
    cout << &m << endl;
    cout << &n << endl;
    cout << &b << endl;
    cout << &v << endl;
    cout << &m - &n << endl;
    cout << &n - &b << endl;
    cout << &n - &v << endl;
    cout << &n + 1 << endl;
    cout << &n + 2 << endl;

    for (int a = 1; a <= 5; a++)
    {
        cout << &m + a << " : " << *(&m + a) << endl;
    }
    cout << "======================" << endl;

    void *vPtr;
    cout << vPtr << endl;
    cout << &vPtr << endl;
    cout << *&vPtr << endl;
    cout << sizeof(*&vPtr) << endl;
    cout << sizeof(&vPtr) << endl;
    cout << sizeof(vPtr) << endl;
    cout << "======================" << endl;

    cout << sizeof(*&a) << endl;
    cout << sizeof(&a) << endl;
    cout << sizeof(a) << endl;

    cout << "======================" << endl;
    cout << "Function pointers" << endl;
    cout << "======================" << endl;
    hi();
    // Pointer to a function => wrap the fn name in () and put a * in front of the function name,
    (*hi)();
    cout << "hi() pointer is :" << (*hi) << endl; // not sure why it prints 1.
    // sorta kinda like lambda
    void (*xx)() = hi;
    runFn(xx);
    // pass the pointer of the function to run
    runFn((*hi));
    runFn((*bye));

    return 0;
}
