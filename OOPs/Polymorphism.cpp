#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << m.add(5, 3) << endl;
    cout << m.add(5.5, 2.3);
    return 0;
}
