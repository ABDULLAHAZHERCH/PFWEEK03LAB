#include <iostream>
using namespace std;
main()
{
string Movie;
float Adult_T_Price;
float Child_T_Price;
float Adult_Ticket;
float Child_Ticket;
float Donate;
float Total;
float Remain_Amount;

cout<<"Enter Movie name :";
cin >> Movie;

cout<<"Enter Adult Ticket Price :";
cin >> Adult_T_Price;

cout<<"Enter Child Ticket Price :";
cin >> Child_T_Price ;

cout<<"Enter Number of Adult Tickets Sold :";
cin >> Adult_Ticket ;

cout <<"Enter Number of Child Tickets Sold :";
cin >> Child_Ticket ;

cout<<"Enter Percentage to Donate :";
cin >> Donate ;

cout<<"*************************************" <<endl;

Total=(Adult_T_Price*Adult_Ticket)+(Child_T_Price*Child_Ticket) ;
cout<<"Total Amount Generated :" << Total << endl;

Remain_Amount=Total-(Total*Donate/100);
cout<<"Amount After Donation :" << Remain_Amount ;




}