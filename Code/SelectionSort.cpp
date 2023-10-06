#include <bits/stdc++.h>
using namespace std;
void selection(vector<int>&v){

    for(int i=0;i<v.size();i++){
            int index=i;
        for(int j=i+1;j<v.size();j++){
            if(v[index]>v[j]){
                index=j;
            }
        }
        swap(v[index],v[i]);
    }


}
int main() {
    vector<int>arr;
  for(int i=0;i<arr.size();i++){
        arr.push_back(i);
    }
    selection(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
