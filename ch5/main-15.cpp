#include "std_lib_facilities.h"

int main()
try {
    string s = "Success!\n";
    for (int i=0; i<9; ++i)     //i now goes up to 9, as to write out the entire string
        cout << s[i];
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
