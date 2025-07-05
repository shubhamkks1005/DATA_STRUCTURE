//search smallest element in rotated array
#include<iostream>
using namespace std;
int main()
{ int arr[1000];
  int size;
  cout<<"enter size of element=";
  cin>>size;
  int first=0, last=size-1, mid,result;
  for (int i = 0; i < size; i++)
  {
        cin>>arr[i];
  }
  result=arr[0];
  while(first<=last)
  {
     mid=first+(last-first)/2;
     if (arr[mid]>=arr[0])
     {
        first=mid+1;
     }
     else
       {result=arr[mid];
        last=mid-1;}


  }
   
      cout<<result;
    //
}