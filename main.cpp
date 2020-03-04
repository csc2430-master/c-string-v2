#include <iostream>
#include "string.h"

using std::cout;
using std::endl;

int main() {
    CString a = "Jesus";
    CString b = "is";
    CString c = "Love";

    a += " ";
    CString d = a + b + " " + c;

    cout << a.c_str() << endl;
    cout << b.c_str() << endl;
    cout << c.c_str() << endl;
    cout << d.c_str() << endl;

    for (size_t i = 0; i < a.length(); ++i) {
        cout << a[i] << endl;
    }

    cout << "--------------------" << endl;
    cout << "Finished" << endl;

    return 0;
}
