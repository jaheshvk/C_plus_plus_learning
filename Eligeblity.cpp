#include <iostream>
using namespace std;

int main() {
  int myAge;
  int votingAge;
  
  cout << "What is your age? ";
  cin >> myAge;
  cout << "What is the voting age? ";
  cin >> votingAge;

  if (myAge >= votingAge) {
    cout << "Old enough to vote!.\n";
  } else {
    cout << "Not old enough to vote.\n";
  }
  return 0;
}