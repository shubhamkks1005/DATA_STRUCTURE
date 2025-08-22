//defanging an ip address(print)
#include<iostream>
#include<string>
using namespace std;
void clockwise(string &s)
{
    char a;
    a=s[s.size()-1];
    for (int i = s.size()-1; i >=0; i--)
    {
        s[i]=s[i-1];
    }
    s[0]=a;
} 

void anticlockwise(string &s)
{
    char a;
    a=s[0];
    for (int i = 0; i<s.size()-1; i++)
    {
        s[i]=s[i+1];
    }
    s[s.size()-1]=a;
} 

int main()
{
    string arr1,arr2,arr3;
   
    cout<<"enter original string"<<endl;
    getline(cin,arr1);
    cout<<"enter second string"<<endl;
    getline(cin,arr2);
    arr3=arr1;

    if (arr1.size()!=arr2.size())
    {
        cout<<"not a rotated array";
    }
    clockwise(arr1);
    clockwise(arr1);
    if (arr1==arr2)
    {
        cout<<"rotated array";
    }
    
 else {  anticlockwise(arr3);
    anticlockwise(arr3);
    if (arr3==arr2)
    {
        cout<<"rotated array";
    }
    else
    cout<<"not a rotated array";
  } 
}