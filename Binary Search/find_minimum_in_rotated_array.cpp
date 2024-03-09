#include<bits/stdc++.h>
using namespace std;

int search(vector<int> v){
  int l=0,h=v.size()-1;
        while(l<h){
            int mid=(l+h)/2;
            if(v[mid]<v[h]){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }
        return v[l];
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

    int t=search(v);
    cout<<t<<endl;
    return 0;


}