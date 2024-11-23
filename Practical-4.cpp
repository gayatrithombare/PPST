#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    
    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    
    void putdata() const {
        cout << "Name: " << name << ", Age: " << age;
    }
};
class Professor : public Person {
public:
    int id;
    int publications;

    
    void getdata() {
        Person::getdata(); // Calls the base class method to get common attributes
        cout << "Enter professor ID: ";
        cin >> id;
     cout << "Enter number of publications: ";
        cin >> publications;
    }
    
    void putdata() const {
        Person::putdata();
 cout << ", ID: " << id << "Publications: " << publications << endl;
    }
};


class Student : public Person {
public:
    int student_id;
    float percentage;
    
    void getdata() {
       Person::getdata();
        cout << "Enter student ID: ";
        cin >> student_id;
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    
    void putdata() const {
        Person::putdata();
        cout << ", Student ID: " << student_id << ", Percentage: " << percentage << "%" << endl;
    }
};
int main() {
    
    Professor prof;
    Student stud;
cout << "Enter details for Professor:" << endl;
    prof.getdata();
    cout << "\nProfessor details:" << endl;
    prof.putdata();
cout << "\nEnter details for Student:" << endl;
    stud.getdata();
    cout << "\nStudent details:" << endl;
    stud.putdata();
    return 0;
}

