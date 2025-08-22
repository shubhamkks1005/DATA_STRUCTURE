//defanging an ip address(create)
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string arr,ans;
    cout<<"enter input";
   cin>>arr;

   
    for (int i = 0; arr[i]!='\0'; i++)
    {
       if (arr[i]=='.')
       {
       ans=ans+"[.]";
       }
       else 
      ans=ans+arr[i];
    }
    
   cout<<ans; 

}