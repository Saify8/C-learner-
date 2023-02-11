#include<iostream>
using namespace std;

int main()
   {
    int n,i;

    cout << "Enter a number: "<<endl;
    cin >> n;

    // run a loop to print multiplication table
    for ( i = 1; i <= 10; i++)
     {
        cout << n << " × " << i << " = " << n * i << endl;
    }
    
    return 0;
}