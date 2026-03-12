#include <iostream>
using namespace std;

int main(){
  int age, n;
  int eligibleVoter = 0;
  int i = 0;
  cout <<"Enter the number of people: ";
  cin >> n;
  while (i < n)
  {
    cout <<"Enter your age: ";
    cin >>age;

    if (age >= 18)
    {
      cout <<"You're eligible to vote\n";
      eligibleVoter++;

    }
    else
    {
      cout <<"You're not eligible to vote\n";
    }
    i++;
  }

  cout <<"Total eligible voter = " <<eligibleVoter;



  return 0;
}