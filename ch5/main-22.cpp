#include "std_lib_facilities.h"

int main()
try {
    string s = "Success!\n";    //removed unnecessary <char>
    for (int i=0; i<=8; ++i)    //changed 10 to 8 to prevent i from overflowing
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
