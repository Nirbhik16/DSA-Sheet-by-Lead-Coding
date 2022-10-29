//Q4. Insert Delete GetRandom O(1
class RandomizedSet {
    vector<int> nums;
    unordered_map<int,int> position;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(position.find(val)!=position.end()){
            return false;
        }
        nums.push_back(val);
        int elem=nums.size()-1;
        position.insert({val,elem});
        return true;
    }
    
    bool remove(int val) {
        if(position.find(val)==position.end()){
            return false;
        }
        int pos=position[val];
        nums[pos]=nums[nums.size()-1];
        position[nums[pos]]=pos;
        nums.pop_back();
        position.erase(val);
        return true;
    }
    
    int getRandom() {
        return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
