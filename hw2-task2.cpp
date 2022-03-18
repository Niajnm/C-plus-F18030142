#include <iostream>
using namespace std;
 
int main()
{
    int num;
		
    cout << " Input the number : ";
    cin >> num;
  if( 80>= num && num >=60 ){
          cout << " good   : " << num << endl;
  }else if (num <60){
        cout << " Fail   : " << num << endl;
  }

	cout << endl;
    return 0;
}