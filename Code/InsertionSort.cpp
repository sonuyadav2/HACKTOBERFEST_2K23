// for insertion sort
void insertion(vector<int>&v){
    for(int i=1;i<v.size();i++){
        int j=i-1,temp=v[i];
        while(j>=0&&v[j]>temp){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=temp;
    }
}
