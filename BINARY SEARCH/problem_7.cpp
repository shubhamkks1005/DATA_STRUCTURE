//search nth missing number
#include<iostream>
using namespace std;
int main()
{   int arr[1000];
    int size,key;
    cout<<"enter size of array=";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
    cout<<"search nth missing number";
    cin>>key;
    int first=0,last=size-1,mid,result;
    while (first<=last)
    {  mid=first+(last-first)/2;
        if (arr[mid]-mid-1>=key)
        {
            result=mid;
            last=mid-1;
        }
        else first=mid+1;
     }

     cout<<result+key;
    
}