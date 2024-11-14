#include <iostream>

using namespace std;

void addbyone(int& xref) {
    xref++;
    cout << "xref=" << xref << endl;
}

int main() {
    int x = 100;
    addbyone(x);
    cout << "x=" << x << endl;
    system("pause");
    return 0;
}
