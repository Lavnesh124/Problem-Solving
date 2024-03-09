#include<bits/stdc++.h>
using namespace std;


int search(vector<int> v,int target){
  int l=0,h=v.size()-1;
  while(l<=h){
    int mid=l+(h-l)/2;
    if(v[mid]==target){
        return mid;
    }
    if(v[l]<=v[mid]){
        if(v[l]<=target && v[mid]>=target){
            h=mid-1;
        }
        else{
            l+=mid+1;
        }
    }
    else{
        if(v[mid]<=target && target<=v[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
  }
  return -1;
}

int main(){
      vector<int> v;
    v.push_back(7);
    v.push_back(12);
    v.push_back(16);
    v.push_back(17);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    int t=search(v,4);
    cout<<t<<endl;
    return 0;


}