///Alens Evra
///Project 1
// Fall 2020
/*/Write a program that presents a menu to user to choose a letter from the menu or type “Q” to
 quit.
 Menu:
 a- Find circumference and areas of circle.
 b- Find side surface area and volume of a regular cylinder
 c- Find surface area and volume of sphere
 q- Type  q to quit */
#include <iostream>
#include <vector>
using namespace std; //Circumference = 2* pi *radius and area = pi * radius 
const double pi= 3.14;
double a1(double r){

return 2*pi*r;
// these functions will be used to to calculate user input
}
double a2(double r ) {
 
  return pi*r*r;
}
double b1(double r, double h){

  return 2*pi*r*h; 
}
double b2(double r, double h){
  
  return pi*r*r*h;
}
double c1(double r){
  
  return 4*pi*r*r;
}
double c2(double r){
 
  return (4/3)*pi*r*r*r;
}
int main() {
  double radius;
  double height;
  
  char Menu;
 
  
  cout << "Menu"<< endl;

  cout << "a-Find circumfrence and areas of circle."<< endl;

  cout <<"b-Find side surface area and volume of a regular cylinder."<<endl;

  cout << "c-Find surface area and volume of sphere"<< endl;

  cout <<"q-Type q to quit"<< endl;
cin >> Menu; 
if(Menu==
'a'){
  cout << "provide radius value.";
  cin >> radius;
  cout << a1(radius);
  cout << endl;
  cout << a2(radius); 
  cout << endl;
}
else if(Menu=='b'){
  cout << "provide radius value.";
cin >> radius;

cout << "provide height value.";
cin >> height;
cout << b1(radius,height);
cout << endl;
cout << b2(radius,height);
}
else if (Menu=='c'){
  cout << "provide radius value.";
  cin >> radius;
  cout << c1(radius);
  cout << endl;
  cout << c2(radius);
  cout << endl;
}



else {
  cout <<"invalid input."; // checks if invalid
}
  
return 0;
}
