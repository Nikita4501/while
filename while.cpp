#include<iostream>
using namespace std;
int main()
{
    int int1 =15;
    int int2 = 20;
    cout << "int1=" << int1 << "  " << "int2=" << int2 << endl;
    while (int1 != int2) {
        int1++;

    }
    cout << "int1=" << int1 << "  " << "int2=" << int2 << endl;

    int int3 = 22;
    int int4 = 12;
    cout << "int3=" << int3 << "  " << "int4=" << int4 << endl;
    while (int3 > int4) {
        int4++;

    }
    cout << "int3=" << int3 << "  " << "int4=" << int4 << endl;

    int1 = 15;
    int2 = 20;
    cout << "int1=" << int1 << "  " << "int2=" << int2 << endl;
    while (int1 < int2) {
        int1++;

    }
    cout << "int1=" << int1 << "  " << "int2=" << int2 << endl;

    int3 = 22;
    int4 = 12;
    cout << "int3=" << int3 << "  " << "int4=" << int4 << endl;
    while (int3 >= int4) {
        int4++;
    }
    cout << "int3=" << int3 << "  " << "int4=" << int4 << endl;

    int1 = 15;
    int2 = 20;
    cout << "int1=" << int1 << "  " << "int2=" << int2 << endl;
    while (int1 <= int2) {
        int1++;
    }
    cout << "int1=" << int1 << "  " << "int2=" << int2 << endl;
}
