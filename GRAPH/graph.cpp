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
    cout<<"  ";
  }

  cout<<"enter element you want to search";
  cin>>key;
  

}