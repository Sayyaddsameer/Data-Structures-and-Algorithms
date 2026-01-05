class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            int c=0,t=0;
            for(int j=2;j<=nums[i]/2;j++){
                if(nums[i]%j==0){
                    c++;
                    t+=j;
                }
                if(c>2){
                    break;
                }
            }
            if(c==2){
                s+=t+nums[i]+1;
            }
        }
        return s;
    }
};