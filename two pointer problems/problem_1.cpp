//segrigrate 0 and 1
#include<iostream>
using namespace std;
int main()
{
    int arr[1000],size;
    cout<<"enter size of array";
    cin>>size;
    cout<<"\nenter elements only 0 and 1"<<"\n";
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];

    }
   int first=0,last=size-1,swap;
   while (first<=last)
   {  
      if (arr[first]==0)
            first++;

      else if (arr[last]==1)
            last--;
      
      else { swap=arr[first];
            arr[first]=arr[last];
            arr[last]=swap;}
   }
  for (int i = 0; i < size; i++)
    {
       cout<<"\n"<<arr[i]<<" ";
    }
}