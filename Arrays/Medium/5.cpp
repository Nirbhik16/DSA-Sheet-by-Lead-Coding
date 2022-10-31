//Q5. Subarray Sum Equals K
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> sol;
        int count=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k){
                count++;
            }
            if(sol.find(sum-k)!=sol.end()){
                count=sol[sum-k]+count;
            }
            if(sol.find(sum)!=sol.end()){
                sol[sum]++;
            }
            else{
                sol[sum]=1;
            }
        }
        return count;
    }

/*
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int s=nums[i];
            if(s==k){
                count++;
            }
            for(int j=i+1;j<nums.size();j++){
                s+=nums[j];
                if(s==k){
                    count++;
                }
            }
        }
        return count;
    }
*/
};
