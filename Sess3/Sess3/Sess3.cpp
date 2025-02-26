#include <iostream>
using namespace std;

int main() {
    string s1;
    string s2 = "ana";
    //strcmp(s1, s2)
    cout << (s1 == s2) << "\n" << s1.compare(s2) << endl;
    return 0;
}