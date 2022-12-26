#include <iostream>
using namespace std;
main()
{
string Name;
float Subject1;
float Subject2;
float Subject3;
float Subject4;
float Subject5;
float Percentage;

cout<<"Enter Student Name :";
cin >> Name ;

cout<<"Enter Subject 01 Marks :";
cin >> Subject1;

cout<<"Enter Subject 02 Marks :";
cin >> Subject2;

cout<<"Enter Subject 03 Marks :";
cin >> Subject3;

cout<<"Enter Subject 04 Marks :";
cin >> Subject4;

cout<<"Enter Subject 05 Marks :";
cin >> Subject5;

Percentage=(Subject1+Subject2+Subject3+Subject4+Subject5)*100 /500 ;

cout <<"Your Percentage =" << Percentage <<"%" ;





}