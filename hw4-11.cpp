// Introductory11.cpp - displays ending balance
// Created/revised by Sean Archer on 02-05-25

#include <iostream>
using namespace std;

int main() {
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;
  double startBalance = 0.0;
  double endBalance = 0.0;

  cout << "Enter starting balance: ";
  cin >> startBalance;

  cout << "Enter total deposits: ";
  cin >> totalDeposits;

  cout << "Enter total withdrawals: ";
  cin >> totalWithdrawals;

  endBalance = startBalance + totalDeposits - totalWithdrawals;
  cout << "Ending balance: $" << endBalance << endl;

  return 0;
} // end of main function
