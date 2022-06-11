#include <iostream>

using std::cout;
using std::endl;

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

    return 0;
}