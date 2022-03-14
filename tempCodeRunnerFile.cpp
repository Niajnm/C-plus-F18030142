#include<iostream>
using namespace std;

int main ()
{
int score;
cin >> score;
char calculate(int score);
    do
	{
		cout<<"Enter the number between 0 and 100:\n"; 
                cin>> score;
	} while (score > 100 || score < 0); 
char rs =calculate(score);
	cout<<"your grade is "<<rs<<endl;
return 0;
}


char calculate(int score)
{


    char result;
	switch(score)
	{
		case 100:
		case 90:
			
			result='A';
			break;
		case 80:
		    result='B';
			break;
		case 70:
		    result='C';
			break;
		case 60:
			result='D';
			break;
		// default:
		// 	result='E';
		// 	break;
		
	}

	return result;
}
