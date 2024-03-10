#include<bits/stdc++.h>
using namespace std;
int func( int mid, int n, int m){
  long long ans = 1;
  for(int i =1;i<=n;i++){
    ans = ans * mid;
    if (ans > m) {
      return 2;
    }
  }
  if (ans == m) {
    return 1;
  }
  return 0; 
}

int solve(int n, int m) {
  int l=1,h=m;
  while(l<=h){
    int mid=(l+h)/2;
    int midValue=func(mid,n,m);
    if(midValue==1){
      return mid;
    }
    else if(midValue==0){
      l=mid+1;
    } else {
      h = mid - 1;
    }
  }
    return -1;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<solve(n,m)<<endl;
}