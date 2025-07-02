//peak index in mountain array
#include<iostream>
using namespace std;
int main()
{ int arr[1000],size;
    cout<<"enter size of array=";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
    if (size==0)
    {cout<<"array empty";
        return 0;
    }
    else if (size==1)
    {
        cout<<arr[0];
         return 0;
    }
    else if (size==2)
    {if (arr[0]>arr[1])
    {
       cout<<arr[0];
        return 0;
    }else
    
      cout<<arr[1]; 
       return 0; 
    }
    
    int first=0,last=size-1;
    int mid=first+(last-first)/2;
    while(1)
    {
        if (arr[mid]<arr[mid-1])
        {
            last=mid-1;
        }
        else if(arr[mid]<arr[mid+1] )
        {
            first=mid+1;
        }
        else
        {
            cout<<"  "<<arr[mid];
            break;
        }
        mid=first+(last-first)/2;
        
    }

  }