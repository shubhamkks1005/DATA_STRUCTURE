//problem:-find square root of a number using binary search
#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"enter number whose you want to find square root"<<endl;
  cin>>num;
  int first=1,last=num,sqr;
  int mid=first+(last-first)/2;
  while (first<=last)
  {
    if (mid*mid>num)
    {
        last=mid-1;
    }
    if (mid*mid<=num)
    {
       first=mid+1;
       sqr=mid;
    }
     mid=first+(last-first)/2;
  }
  
cout<<"square ="<<mid;
}