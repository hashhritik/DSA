/* input 3
  output:
   
    AAA
   
    BBB
   
    CCC
*/
#include<iostream>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    
    while (row<=n)
    {
        int col=1;
        
        while (col<=n)
        {   
            
            cout<<ch;
            col++;

        }
        ch++;
        cout<<endl;
        row++;
    }
    
    
}