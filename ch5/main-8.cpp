#include "std_lib_facilities.h"

int main()
try {
    bool c = false;
    if (!c)     //added ! negation; condition now fulfills if c is false
        cout << "Success!\n";
    else cout << "Fail!\n";

    keep_window_open();
    return 0;
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}
