class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int arr[]=new int[2];
         int n=grid[0].length;
        int freq[]=new int [n*n+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }

        }
        for(int k=0;k<freq.length;k++){
            if(freq[k]==0){
                arr[1]=k;
            }
             if(freq[k]==2){
                arr[0]=k;
            }
        }
        return arr;
    }
}
