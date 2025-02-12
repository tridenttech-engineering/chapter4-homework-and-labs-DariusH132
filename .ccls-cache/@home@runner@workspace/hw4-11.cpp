// Introductory11.cpp - displays ending balance
// Created/revised by <Darius Haywood> on <2/11/2025>

#include <iostream>
using namespace std;

int main() {
//declare name  
  double beginningBalance = 0.0;
  double totaldeposits = 0.0;
  double totalWithdrawals = 0.0;
  double newBalance = 0.0;

  cout << "Enter beginning balance: ";
  cin >> beginningBalance;
  cout << "Enter total deposits: ";
  cin >> totaldeposits;
  cout << "Enter total withdrawals: ";
  cin >> totalWithdrawals;

  newBalance = beginningBalance + totaldeposits - totalWithdrawals;
  cout << "New balance: $" << newBalance << endl;
  return 0;
} // end of main function