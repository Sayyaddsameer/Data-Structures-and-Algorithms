class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int s = 0;
        for(int i = 0; i < k; i++){
            s += arr[i];
        }
        int res=s;
        for(int i = 1; i < arr.size() - k + 1; i++){
            s = s - arr[i-1] + arr[i+k-1];
            res=max(res,s);
        }
        return res;
    }
};