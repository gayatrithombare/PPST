#inclde<iostream>
using namespace std;
class Rectangle {
public:
Rectangle (){ length=0; width=0;}
Rectangle (flot l, float w) { length=l; width=w;}
Rectangle (float l) {length=l; width=;}
float area() {return length*width;}
private:
float length, width;
};
int main() {
Rectangle r1;
Rectangle r2(5,7);
cout<<"Area 1:"<<r1 area() <<endl;
cout<<"Area 2:"<<r2 area() <<endl;
cout<<"Area 3:"<<r3 area() <<endl;
return 0;
}

