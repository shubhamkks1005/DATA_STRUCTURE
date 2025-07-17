//2 sum problem
//segrigrate 0 and 1
#include<iostream>
using namespace std;
int main()
{
    int arr[1000],size,target;
    cout<<"enter size of array";
    cin>>size;
    cout<<"\nenter elements "<<"\n";
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];

    }
    cout<<"enter target value"<<endl;
    cin>>target;
   int first=0,last=size-1,sum;
   while (first<last)
   {  sum=arr[first]+arr[last];
      if (sum==target)
           { sum=-1;
            break;
           }

      else if (sum>target)
            last--;
      
      else first++;
   }
  
  if (sum==-1)
  {cout<<endl<<endl<<"      "<<arr[first]<<" + "<<arr[last]<<" = "<<target<<endl;
  cout<<"index are="<<first<<"  "<<last;
    
  }
 else  cout<<"two sum not possible";

  
}