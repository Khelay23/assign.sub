#include<iostream>
using namespace std;
int main(){
  double num1, num2, num3;
  double sum, average;
  cout << "Please Enter three Numbers\n";
  cout << "Enter 1st Numbers :: ";
  cin >> num1;
  cout << "Enter 2nd Numbers :: "; 
  cin >> num2; 
  cout << "Enter 3rd Numbers :: ";
  cin >> num3;
  sum = num1 + num2 + num3;
  average = sum / 3;
  cout << "Average = " << average << endl;
  return 0;
}
