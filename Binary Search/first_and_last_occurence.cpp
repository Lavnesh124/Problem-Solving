#include<bits/stdc++.h>
using namespace std;

int secondOccurence(vector<int> v,int target){
    int l=0,h=v.size()-1;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(v[mid]==target){
            ans=mid;
            l=mid+1;
        }
        else if(v[mid]>target){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;

}

int firstOccurence(vector<int> v,int target){
     int l=0,h=v.size()-1;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(v[mid]==target){
            ans=mid;
            h=mid-1;
        }
        else if(v[mid]>target){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;

}

pair<int,int> solve(vector<int> v,int target){
    int firstt=firstOccurence(v,target);
    int secondd=secondOccurence(v,target);
    pair<int,int> p;
    p.first=firstt;
    p.second=secondd;
    return p;

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
   cout<<"fj         ff"<<endl;
    pair<int,int> p=solve(v,target);

    cout<<p.first<<" "<<p.second<<endl;

    return 0;


    return 0;

}