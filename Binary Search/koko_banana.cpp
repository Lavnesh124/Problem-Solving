#include<bits/stdc++.h>
using namespace std;

long long calculateTotalHours(vector<int> v, int hourly) {
    long long totalH = 0;
    int n = v.size();
    //find total hours:
    for (int i = 0; i < n; i++) {
        totalH += ceil((double)(v[i]) / (double)(hourly));
    }
    return totalH;
}

int minEatingSpeed(vector<int>& piles, int target) {
        int m=*max_element(piles.begin(), piles.end());
        //Brute Force;
       /* for(int i=1;i<=m;i++){
            if(calculateTotalHours(piles,i)<=h){
                return i;
            }
        }
        */
        int l=1,h=m;
       while(l<=h){
           int mid=l+(h-l)/2;
           long long t=calculateTotalHours( piles,mid);
           if(t<=target){
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
        int h;
        cin>>h;
        cout<<minEatingSpeed(v,h)<<endl; 

    }