/* input 3
  output:
   
    ABC
   
    ABC
   
    ABC
*/
#include<iostream>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    int row=1;
    char ch;
    
    while (row<=n)
    {
        int col=1;
        
        /* code */
        while (col<=n)
        {
            /* code */
            ch='A'+col-1;
            cout<<ch;
            col++;

        }
        cout<<endl;
        row++;
    }
    
    
}