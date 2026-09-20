class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i+1; j < nums.size(); j++) {
        //         if (nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        // Better Solution (Using Hashing) 
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); i++){
            if (st.count(nums[i])){
                return true;
            }
            else{
                st.insert(nums[i]);
            }
        }
        return false;
    }
};