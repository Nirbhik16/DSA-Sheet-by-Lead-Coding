//Q10. Squares of a Sorted Array
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> res(n);
        
        int i=0;
        int j=n-1;
        int index=n-1;
        
        while(i<=j){
            int n1 = nums[i]*nums[i];
            int n2 = nums[j]*nums[j];
            
            if(n1>n2){
                res[index]=n1;
                i++;
            }
            else{
                res[index]=n2;
                j--;
            }
            index--;
        }
        return res;
        /*
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
        */
    }
};
