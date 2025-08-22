#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a[26]={0};
    string arr;
    int i=0,j,check=1;
    cout<<"enter string";
    getline(cin,arr);
    if (arr[0]=='\0')
    {
        cout<<"fail";
        check=0;
    }
    
    for (char n=arr[i];n!='\0'; i++)
    {   n=arr[i];
       j=n-'a';
       a[j]=1;
    }
    for (int j = 0; j< 26; j++)
    {
        if (a[j]==0)
        {
           cout<<"fail";
           check=0;
           break;
        }
        
    }
    if (check==1)
        cout<<"win";
    
    
    
    
 
}