#include <iostream>
using namespace std;

class stud
{
  private ;
  string name;
  int rollno;
  int age ;
  public:
void accept ()
{
  cout<<" enter your name";
  cin>> name;
  cout<<"enter your rollno;
  cin>> rollno;
  cout<<" enter your age ";
  cin>> age;
}
void display ()
cout<<"name is"<<name <<endl;
cout<<"rollno is"<<rollno <<endl;
cout<<"age is"<<age <<endl;
}
} ;
int main()
stud s1;
s1. accept();
s1. display();
rerurn 0;
}


