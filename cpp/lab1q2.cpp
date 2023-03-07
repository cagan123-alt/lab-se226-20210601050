#include <iostream>
using namespace std;

int main(){
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
  return 0;
}
 