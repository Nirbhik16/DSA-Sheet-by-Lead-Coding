//Q1. Merge Intervals
class Solution {
    static bool fun(vector<int>&a,vector<int>&b){
        if(a[0]<b[0])
            return true;
        if(a[0]>b[0])
            return false;
        return a[1]<b[1];
    }
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),fun);
        int i=0,n=intervals.size();
        vector<vector<int>> res;
        while(i<n){
            int start=intervals[i][0], end=intervals[i][1],j=i+1;
            while(j<n&&end>=intervals[j][0]){
                end=max(intervals[j][1],end);
                j++;
            }
            res.push_back({start,end});
            i=j;
        }
        return res;
    }
};


//Q2. 3Sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> vec;
        sort(nums.begin(),nums.end());
        for( int i=0;i<=n-1;i++)   // traversing till 3rd last element
        {
           int low=i+1;    // next element to the selected element
           int high=n-1;    // last elemet selected for iteration
            
            while(low<high)
            {
                int ans=nums[low]+nums[high]+nums[i];
                
                if((ans)==0)
                {
                    // cout<<k<<" ";
                    vector<int> v{nums[i],nums[low],nums[high]};
                    vec.insert(v);
                   low++;
                    high--;
                    //break;
                }
                else if(ans>0)
                {
                  high--;  
                }
                else
                {
                    low++;
                }
            }
        }
        vector<vector<int>> mp;
        copy(vec.begin(), vec.end(),inserter(mp, mp.begin()));
        return mp;
    }
};

/*
Time Limit exceeded after 235cases out of 311 cases
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int>check;
                        check={nums[i],nums[j],nums[k]};
                        sort(check.begin(),check.end());
                        int count=0;
                        for(int i=0;i<ans.size();i++){
                            vector<int>check1;
                            check1={ans[i][0],ans[i][1],ans[i][2]};
                            sort(check1.begin(),check1.end());
                            if(check1==check){
                                count++;
                            }
                        }
                        if(count==0){
                            ans.push_back({nums[i],nums[j],nums[k]});
                        }
                    }
                }
            }
        }
        return ans;
    }
*/
