#include<iostream>
using namespace std;
class Animal {
public:
void ent() {
cout<<"I can eat !" <<endl;
}
void sleep() {
cout<<"Ican sleep!"<<endl;
}
};
class Dog: public Animal {
public:
void bark () {
cout<<" I can baek! Woof woof !!"<<endl;
}
};
int main (){
Dog dog1;
dog1.eat();
dog 1.sleep();
dog 1'bark ();
rerurn 0;
}
