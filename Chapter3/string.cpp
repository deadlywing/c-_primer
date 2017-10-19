
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    // test three ways of initialization
    string s1 = "I'm string****";
    string s2("i'm string");
    string s3(5, 'c');

    // examine the size of diffrent ways
    cout << s1 << "**********" << s2 << "******" << s3 << endl;
    cout << sizeof(s1) << "**********" << sizeof(s2) << "******" << sizeof(s3) << "****" << &s3 << endl;

    // reading strings
    cin >> s1 >> s2;
    cout << s1 << "***" << s2 << endl;
    // cin returns the address of istream
    cout << sizeof(s1) << "**********" << sizeof(s2) << "******" << (cin >> s3) << endl;
    // check if the return of getline is equal
    // yeah ... both cin and getline return the equal address(istream)
    cout << sizeof(s1) << "**********" << sizeof(s2) << "******" << (getline(cin, s3)) << endl;

    // use getline() to read into string！
    string s4;
    while (getline(cin, s4))
        cout << s4 << endl;

    return 0;
}