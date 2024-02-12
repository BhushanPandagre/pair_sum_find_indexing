#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;

void twosum(vector<int>&v,int t)
{
  map<int,int>mp;
  int s=v.size();
  for(int i=0;i<s;++i)
  {
    int a=v[i];
    int sum=t-a;
    if(mp.find(sum)!=mp.end())
    {
cout<<mp[sum]<<","<<i<<"\n";
    }
    mp[a]=i;
  }
}
int main()
{
  vector<int>v{2,5,3,10,-2};
  int t=8;
  twosum(v,t);
}