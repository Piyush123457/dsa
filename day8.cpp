class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxs = 1;
        int l = 0;
        int x = 0;
        for(int  r=0;r<n;r++){
              while((x&nums[r])!=0){
                x=x^nums[l];
                ++l;
              } 
              x|=nums[r];
              maxs=max(maxs,r-l+1);
        }  return maxs;
        }
      
  //  lc2401
};
