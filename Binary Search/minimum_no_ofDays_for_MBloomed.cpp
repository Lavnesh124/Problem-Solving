#include<bits/stdc++.h>
using namespace std;

  bool check(vector<int>& bD,int ind, int m, int k){
        int bqt=0,curr=0;
        for(int i=0;i<bD.size();i++){
            if(bD[i]<=ind){
                curr++;
            }
            else{
                bqt+=(curr/k);
                curr=0;
            }    
        }
          bqt+=(curr/k);
           return  bqt>= m;
    }
    int minDays(vector<int> bD, int m, int k) {
          long long val = m * 1ll * k * 1ll;
          int n = bD.size();
          if (val > n) return -1;
        int maxi=*max_element(bD.begin(), bD.end());
        int mini=*min_element(bD.begin(), bD.end());
        int l=mini,h=maxi;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(check(bD,mid,m,k)){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
        
    }

int main(){
      int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int m,k;
        cin>>m>>k;
        cout<<minDays(v,m,k)<<endl;

    return 0;

}