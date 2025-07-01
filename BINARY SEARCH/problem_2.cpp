//problem:-what will be the position of element if it is/will present in sorted array.
#include<iostream>
using namespace std;
int main()
{int arr[1000];
  int size,key;
  cout<<"size of array =";
  cin>>size;
  cout<<"\nenter "<<size<<"elements(elements must be sorted)\n";
  //to take input(array)
  for (int i = 0; i < size; i++)
  {
    cin>>arr[i];
    
  }

  cout<<"enter element";
  cin>>key;
  int first=0,last=size-1;
  int mid=first+(last-first)/2;
  while (first<=last)
  {
    if (arr[mid]==key)
    {
       
       break;
    }
    else if (key<arr[mid])
    {
        last=mid-1;
    }
    else if (key>arr[mid])
    {
        first=mid+1;
    }
     mid=first+(last-first)/2;
  }
  cout<<mid;
  return 0;
//
}
