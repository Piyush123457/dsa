LC POTD
class Solution {
public:
    vector<int> pivotArray(vector<int>& v, int pivot) {
        int n = v.size();
        vector<int> ans(n,pivot);
        int i = 0,j=n-1;
        for(int k=0;k<n;k++){
            if(v[k]<pivot) ans[i++] = v[k];
            if(v[n-k-1]>pivot) ans[j--] = v[n-k-1];
        }
        return ans;
    }
};
TC: O(N)
SC: O(N)
