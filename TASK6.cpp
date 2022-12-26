#include <iostream>
using namespace std;
main()
{
float Size;
float Cost;
float Area;
float CostPerPound;
float AreaFeet;

cout<<"Enter Bag Size In Pounds :";
cin >> Size;

cout<<"Enter Cost of Bag :";
cin >> Cost;

cout <<"Enter Area Covered by each bag in Square feet :";
cin >> Area;

cout<<"**********************************************" << endl;
CostPerPound=Cost/Size ;
cout<<"Cost of Fertilizer per pound :" << CostPerPound << endl;

AreaFeet=Cost/Area;
cout <<"Cost of Fetilizing the area per square feet :"<< AreaFeet ;






}