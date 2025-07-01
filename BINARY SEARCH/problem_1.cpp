//Problem:-First and last position a element in sorted array.
#include<iostream>
using namespace std;
 int star( int *a,int key, int last) //gives first occurence
 {  int first=0;
    int mid=first+(last-first)/2;
    int count=-1;
   
   
   
    while (first<=last)
    {
        if (key==a[mid])
        {
            last=mid-1;
            count=1;
        }else if (key<a[mid])
        {
          last=mid-1;
        }else if (key>a[mid])
        {
           first=mid+1;
        }
        
        
        mid=first+(last-first)/2;
    }
    
    if (count==-1)
    {
       return -1;
    }
    else return mid;
 }
 int las( int *a,int key,int first,int last)
{
 
    int mid=first+(last-first)/2;
    
   while (first<=last)
    {
        if (key==a[mid])
        {
            first=mid+1;
            
        }else if (key<a[mid])
            last=mid-1;
           mid=first+(last-first)/2;

    }
    return mid-1;

}
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

  cout<<"enter element, whom you want to search first and last position";
  cin>>key;
  int first=0,last=size-1;
  int start,end;
  start=star(arr,key,last);
  if (start==-1)
  {
    cout<<"element not found";
    return 1;
 }
 cout<<"\n start="<<start;

   end=las(arr,key,start,last);
   cout<<"end="<<end;


     //
}
