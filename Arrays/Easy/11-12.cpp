//Q11. Pascal's Triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> nums(numRows);
        for(int i=0;i<numRows;i++){
            nums[i].resize(i+1);
            nums[i][0]=1;
            nums[i][i]=1;
            for(int j=1;j<i;j++){
                nums[i][j]=nums[i-1][j-1]+nums[i-1][j];
            }
        }
        return nums;
    }
};

//Q12. Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if(nums.size()==0) return 0;
        
        int i =0;
        
        for(int j = 0;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;

    }
    
};
