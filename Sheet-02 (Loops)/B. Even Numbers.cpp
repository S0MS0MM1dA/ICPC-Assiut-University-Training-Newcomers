#include<bits/stdc++.h>
using namespace std;

#define ll long long int
const int N = 3e5 + 9;
const int RANGE = 255;

int32_t main(){
  int n; cin>>n;
  for(int i=1; i<=n; i++){
    if(i%2==0)
      cout<<i<<'\n';
  }
  return 0;
}
