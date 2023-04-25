 #include<iostream>
 using namespace std;
  int main()
 {
    char ch;
    cout<<"enter lower case , upper case or numeric : ";
    cin>>ch;
     if(ch>='a' && ch<='z')
        cout<<ch<<" is lower case .";
        else if (ch>='A' && ch<'Z')
            cout<<ch<<" is upper case .";
            else if (ch>=48 && ch<=57)
                cout<<ch<<" is numeric .";
                
            
       return 0;   
  } // namespace std;
