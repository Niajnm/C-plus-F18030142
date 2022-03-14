#include <iostream>
using namespace std;

int main()
{
    int n = 40, t1 = 0, t2 = 1, nextTerm = 0, per_line = 5, sum = 1;

    cout << "Fibonacci Series of 40 items- \n";

    for (int i = 1; i <= n; ++i)
    {
        if(per_line==0)
        {
            cout<<"\n";
            per_line=5;
        }
        per_line--;
        if(i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2)
        {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        sum = sum + nextTerm;
        cout << nextTerm << ", ";
    }

    cout << "\n\nThe sum of the sequence: "<<sum <<"\n";
    float average = (float)sum/40;
    cout << "The average of the sequence: "<<average<<"\n";

    return 0;
}