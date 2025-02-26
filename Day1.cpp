//potd lc 1749
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        int maxs=INT_MIN;
        int mins=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            sum2+=nums[i];
            maxs=max(maxs,sum1);
            mins=min(mins,sum2);
            if(sum1<0)sum1=0;
              if(sum2>0)sum2=0;
        }
        int x=abs(mins);
        if(x>maxs){
            return x;
        }
        else{
            return maxs;
        }
            }
};
