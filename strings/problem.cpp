//reverse string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string arr;
    char swa;
    int size,front=0;
    cin>>arr;
    size=arr.size()-1;
    for (; front<size;front++,size-- )
    {
            swa=arr[front];
            arr[front]=arr[size];
            arr[size]=swa;
    }

    cout<<arr;
    
    

}