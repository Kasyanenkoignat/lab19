#include <iostream>
using namespace std;

template<typename T>
T gcd(T a, T b) {
    while (b != 0) {
        T temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 56;
    int b = 98;
    cout << "NSD " << a << " та " << b << " equals " << gcd(a, b) << endl;

    long c = 1234567890L;
    long d = 9876543210L;
    cout << "NSD " << c << " та " << d << " equals " << gcd(c, d) << endl;

    return 0;
} 