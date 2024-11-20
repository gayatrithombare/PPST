#include<iostream>
using namespace std;
int main() {
const float safehumidity =70.0; \\safen humidty limit float humidity;
cout<<" Enter the current humidity level in the green house (%):";
cin>> humidity;
if (humidity>safeHumidity) {
cout<<" Alert: Humidity is too high!("<<humidity<<"%)"<<endl;
}else
{
cout<<"Humidity is within the safe range.("<<humidity<<"%)"<<endl;
}
return 0;
}
