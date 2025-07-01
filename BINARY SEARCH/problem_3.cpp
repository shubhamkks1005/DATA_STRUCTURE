//problem:-find square root of a number using binary search
#include<iostream>
using namespace std;
int main()
{
 
    int num;
  cout<<"enter number whose you want to find square root"<<endl;
  cin>>num;
  int first=1,last=num,sqr;
  if (num<2)  //to cover 0 and 1
  {
   sqr=num;
   return 0;
  }
  
  int mid=first+(last-first)/2;
  while (first<=last)
  { 
    if (mid>num/mid) // convet mid*mid>num to mid>num/mid to overcome overflow
    {
        last=mid-1;
    }
    if (mid<num/mid)
    {
        sqr=mid;
       first=mid+1;
    }
    if (mid==num/mid)
    {
        sqr=mid;
        break;
    }
    
    mid=first+(last-first)/2;
  }
  
cout<<"square ="<<sqr;//
}