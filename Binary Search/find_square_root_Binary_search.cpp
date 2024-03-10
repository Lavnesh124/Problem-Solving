#include<bits/stdc++.h>
using namespace std;

int floorSqt(int n){
      int l=0,h=n;
    int ans=0;
    while(l<=h){
        long long  mid=l+(h-l)/2;
        if( mid*mid<=(n)){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return h;
  
}

int main(){
    int n;
    cin>>n;
    cout<<floorSqt(n)<<endl;

}