class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n=arr.size(),k;
        bool f=false;
        for(int i= n-2;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    swap(arr[i],arr[j]);
                    f=true;
                    k=i;
                    break;
                }else{
                    continue;
                }
            }
            if(f){
                break;
            }
            sort(arr.begin()+i,arr.end());
        }
        sort(arr.begin()+k+1,arr.end());
    }
};