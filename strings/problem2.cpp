//defanging an ip address(print)
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string arr;
    cout<<"enter input";
   cin>>arr;

   
    for (int i = 0; arr[i]!='\0'; i++)
    {
       if (arr[i]=='.')
       {
       cout<<"[.]";
       }
       else 
       cout<<arr[i];
      

    }
    
    

}