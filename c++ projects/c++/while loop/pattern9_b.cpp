/* n=3

output

  1 
  2 1 
  3 2 1 */


  #include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int row=1;
    


    while (row<=n)
    {
      int col=1;
      int value=row;
      
      while (col<=row)
      {
         
         
         cout<<row-col+1<<" ";
         
         col++;
         
      }
      cout<<"\n";
      row++;
      
    
    } 
}    
