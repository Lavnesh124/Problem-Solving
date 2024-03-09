#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> v,int target){
    int l=0,h=v.size()-1;
    int ans=v.size();
    while(l<=h){
        int mid=l+(h-l)/2;
        if(v[mid]>=target){
            ans=mid;
            h=mid-1;    
        }
        else{
            l=mid+1;
        }
    }
    return  ans;
}
int main(){
     vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(6);
    v.push_back(6);
    v.push_back(12);
    v.push_back(16);
    v.push_back(17);

    int target=5;
   // int x=14;
    cout<<solve(v,target)<<endl;;

}