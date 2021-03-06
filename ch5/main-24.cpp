#include "std_lib_facilities.h"

int main()
try {
    int x = 4;
    double d = 5/(x-2);
    if (d==5/(x-2))     //made the comparison equal the declared value
        cout << "Success!\n";
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
