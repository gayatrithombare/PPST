#include <iostream>
#include <stdexcept>  
using namespace std;

int compute(int a, int b) {
    if (a == 0) {
        throw bad_alloc(); 
    }
    if (b == 0) {
        throw runtime_error("Division by zero"); 
    }
    if (a == -1) {
        throw "Non-standard exception"; 
    }
    return a / b;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    try {
        int result = compute(a, b);
        cout << "Result: " << result << endl;
    } 
    catch (const bad_alloc&) {
        cout << "Not enough memory" << endl; 
    }
    catch (const runtime_error& e) {
        cout << "Exception: " << e.what() << endl;  
    }
    catch (...) {
        cout << "Other Exception" << endl;
    }

    return 0;
}
