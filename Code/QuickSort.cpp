#include <bits/stdc++.h>
using namespace std;
// for quick sort
 int partiotion(vector<int>&v,int low,int high){
     int i=low-1;
     int piviot=v[high];
     for(int j=low;j<high;j++){
         if(v[j]<piviot){
             i++;
             //swap(v[i],v[j]);
             int temp=v[i];
             v[i]=v[j];
             v[j]=temp;
         }
     }
     i++;
     //swap(v[i],piviot);
    int temp=v[i];
    v[i]=piviot;
    v[high]=temp;
     return i;
 }
 //quick sort algo
void quick(vector<int>&v,int low,int high){
    if(low>=high){
        return;
    }
    int piviotIndex=partiotion(v,low,high);
    quick(v,low,piviotIndex-1);
    quick(v,piviotIndex+1,high);

}

int main() {
    vector<int>arr;
  for(int i=0;i<arr.size();i++){
        arr.push_back(i);
    }
    quick(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
