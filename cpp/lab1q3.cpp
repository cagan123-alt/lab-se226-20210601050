#include <iostream>
using namespace std;

int main(){
    
  int lab,midterm,finall;
  cout << "Type your lab score ";
  cin >> lab;
  cout << "Type your midterm score ";
  cin >> midterm;
  cout << "Type your final score ";
  cin >> finall;
  cout << "Type your average score ";
  cout << ((lab)*25/100)+((midterm)*35/100)+((finall)*40/100);
  return 0;
}