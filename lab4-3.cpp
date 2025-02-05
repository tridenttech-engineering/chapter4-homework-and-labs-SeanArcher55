//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by Sean Archer on 02-05-25

#include <iostream>
using namespace std;

int main()
{
  //declare named constant and variables
  double rate = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  cout << "Sales amount: ";
  cin >> sales;

  cout << "Commission rate: ";
  cin >> rate;

  //calculate and display the commision
  commission = sales * rate;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function
