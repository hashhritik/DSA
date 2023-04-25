/*
intput:4

output
D
CD
BCD
ABCD
*/

#include<iostream>
using namespace std;

    
 // namespace std;

int main()
{
    int n;
    int row=1;
    cin>>n;
        //char ch ='A';
    while (row<=n)
    {
     int col=1;
     char ch='A'+n-row;
      while (col<=row)
      {
        cout<<ch;
        ch++;
        col++;

      }
      cout<<"\n";
      row++;
    }
    

}