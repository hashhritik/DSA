/*
intput:3

ouput
ABC
BCD
CDE

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
     char ch='A'+row-1;
      while (col<=n)
      {
        cout<<ch;
        ch++;
        col++;

      }
      cout<<"\n";
      row++;
    }
    

}