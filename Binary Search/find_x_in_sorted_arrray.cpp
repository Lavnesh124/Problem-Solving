#include<bits/stdc++.h>
#include<vector>

using namespace std;


int solve(vector<int> v,int target){
    int l=0,h=v.size()-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(v[mid]==target){
            return mid;
        }
        else if(v[mid]>target){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

int main(){
   vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);
    v.push_back(12);
    v.push_back(16);
    v.push_back(17);

    int target=6;
 //   cout<<"fj         ff"<<endl;
    int ind=solve(v,target);

   cout<<ind<<endl;

    return 0;
}