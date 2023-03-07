#include <iostream>
using namespace std;

int main() {
  string name;
  int number;
  cout << "Enter your name please "<< std::endl;;
  cin >> name; 
  cout << "Your name is: " << name << "." << std::endl;
  cout << "Your student number please"<< std::endl;
  cin >> number;
  cout << "Your student number is: " << number << "."<< std::endl;
  int x, y;
  int sum;
  int diff;
  int mult;
  cout << "Type a number: "<< std::endl;;
  cin >> x;
  cout << "Type another number: "<< std::endl;
  cin >> y;
  sum = x + y;
  diff = x - y;
  mult = x * y;
  cout << "First number is: " << x;
  cout << "Sum is: " << y;
  cout << "Sum is: " << sum;
  cout << "Difference is: " << diff;
  cout << "Multiplied is is: " << mult;
  int lab,midterm,finall;
  cout << "Type your lab score ";
  cin >> lab;
  cout << "Type your midterm score ";
  cin >> midterm;
  cout << "Type your final score ";
  cin >> finall;
  cout << "Type your average score ";
  cout << ((lab)*25/100)+((midterm)*35/100)+((finall)*40/100);
  int arr[]={1,2,3,2,1};
  for (int x : arr){
    std::string a(x, '*');
    std::cout << a << std::endl;

  }


  return 0;
}
