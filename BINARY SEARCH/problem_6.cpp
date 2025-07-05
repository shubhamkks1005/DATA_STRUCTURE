//search any element in rotated array
#include<iostream>
using namespace std;
int main()
{ int arr[1000];
    int size,key;
    cout<<"enter size of array=";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
    cout<<"enter search element";
    cin>>key;
    int first=0,last=size-1,mid;
    while(first<=last)
    {
        mid=first+(last-first)/2;
        if (arr[mid]==key)
        {
           cout<<mid;
           break;
        }
        else if (arr[mid]<arr[0])
        {
            if (arr[mid]<key && key<=arr[last])
                first=mid+1;
            else
                last=mid-1;
        }
        else if (arr[first]<=key && key<arr[mid])
                last=mid-1;
             else
                first=mid+1;
    }                     

}