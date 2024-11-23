#include<iostream>
using namespace std;
class Shape 
{ 
    protected: 
        float dimension; 
   public: 
       void getDimension()
       { 
           cin >> dimension; 
       }  
     virtual float calculateArea()=0; 
}; 
class Square : public Shape  
{ 
   public: 
     float calculateArea() 
     { 
     
return dimension * dimension; 
     } 
};
class Circle : public Shape 
{
    public: 
    float calculateArea()
	{
	
return 3.14*dimension*dimension;  
}
};
int main()
{
    Shape *s1;
    
	Square s;	
Circle c;
cout<<"enter dimension";
s.getDimension();
s1=&s;
cout<<"area of square is"<<s1->calculateArea();
s1=&c;
cout<<"area of cirle";
cout<<s1->calculateArea()<<endl;
return 0;
}

