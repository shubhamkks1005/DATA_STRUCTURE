//problem:- search any element using binary search in array
// take array from user
#include<iostream>
using namespace std;
int main()
{
  int arr[1000];
  int size,key;
  cout<<"size of array =";
  cin>>size;
  cout<<"\nenter "<<size<<"elements(elements must be sorted)\n";
  //to take input(array)
  for (int i = 0; i < size; i++)
  {
    cin>>arr[i];
    
  }

  cout<<"enter element you want to search";
  cin>>key;
  int first=0,last=size-1,mid,count=0;
  mid=first+(last-first)/2;
  while (first<=last)
  {
      if (key==arr[mid])
      {
          cout<<"element found";
          count=1;
          break;
        }
        if (key>arr[mid])
        {
            first=mid+1;
        }
        if (key<arr[mid])
        {
            last=mid-1;
        }
        mid=first+(last-first)/2;
            
            
     }
        
 if (count==0)
 {
   cout<<"element not found";
 }
 
  

}