#include "std_lib_facilities.h"

int main()
try {
    int x = 2;
    double d = 5/(x-1); //changed 2 to 1 to avoid dividing by 0
    if (d==5/(x-1))     //made the comparison equal the declared value
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
