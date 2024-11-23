#include <iostream>
using namespace std;

class adder {
public:
    void add(int x, int y) {
        cout << "Sum of x and y is " << x + y << endl;
    }
    void add(double x, double y) {
        cout << "Sum of x and y is " << x + y << endl;
    }
    void add(int x, int y, int z) {
        cout << "Sum of x and y is " << x + y + z << endl;
    }
};

int main() {
    adder obj1;
    obj1.add(7,7);

    obj1.add(9.132,10.890);
    obj1.add(10,10,10);
    return 0;
}
