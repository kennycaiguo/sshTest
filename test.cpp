#include <string.h>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //char *转string
    char *pc = "hello pc!!!";
    string s1 = pc;
    cout << s1 << endl;
    cout << "\n";
    string s2 = "hello c++ string";
    char ps[100];
    strcpy(ps, s2.c_str());
    cout << ps;
    return 0;
}
