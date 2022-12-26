#include <iostream>
using namespace std;
main()
{
float VegPrice;
float FruitPrice;
float VegKgs;
float FruitKgs;
float T_Veg;
float T_Fruit;
float Total;

cout<<"Enter Vegetable price Per kg :";
cin >> VegPrice;

cout<<"Enter Fruit Price Per Kg :";
cin >> FruitPrice;

cout<<"Enter total Kg's of Vegetables :";
cin >>VegKgs;

cout<<"Enter total Kg's of Fruits :";
cin >> FruitKgs;

T_Veg=VegPrice*VegKgs;
T_Fruit=FruitPrice*FruitKgs;
Total=(T_Veg+T_Fruit)/1.94;
cout<<"_____________________________"<< endl;
cout<<"Total Earnings : Rs." << Total ;



}