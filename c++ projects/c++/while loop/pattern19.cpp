/*
input:4

output:

****
***
**
*


*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    int row=1;
    cin>>n;
    while (row<=n)
    {
       int col=1;
        
        while (col<=(n-row+1))
        {
            cout<<"*";
            col++;
        }
        cout<<"\n";
        row++;
    }
}