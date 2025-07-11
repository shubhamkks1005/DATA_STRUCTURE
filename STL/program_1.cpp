#include<iostream>
#include<vector>
using namespace std;
int main()
{ vector<int>v;
    cout<<v.size()<<"   "<<v.capacity();
    v.push_back(1);
    v.push_back(5);
    v.push_back(10);
    cout<<v.size()<<"   "<<v.capacity();
    



}