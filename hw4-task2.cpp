#include <iostream>
#include <string>
using namespace std;

void myFunction(int a, int b) {
    
       cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

}

int main() {
  myFunction(5, 3);

  return 0;
}