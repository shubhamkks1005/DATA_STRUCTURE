#include<iostream>
#include<string>
using namespace std;
int main()
{
  string para;
  cout<<"enter any paragraph";
  getline(cin,para);
  int size=para.size();
  int i=0,j=0,check,finalcheck;
for (char a='a'; i<26;a++,i++)
{  check=0;
    j=0;
    for (char n=para[0]; n!='\0'; )
    {  
       if (n==a)
       {
        check=1;
        break;
       }
       j++;
       n=para[j];
       
    }
    
 if (check==0)
 {
   finalcheck=1;
    break;
 }
 
}
if (finalcheck==1)
{
   cout<<"fail";
}
else
cout<<"win";

}