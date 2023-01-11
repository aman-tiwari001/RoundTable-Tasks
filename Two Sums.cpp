class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res; // result vector
        bool isExit= 0;

        for(int i = 0; i < nums.size(); i++) { //outer loop
            for(int j = i+1; j < nums.size(); j++) {//inner loop
                if((nums[i] + nums[j])==target) {
                    //inserting i & j in result vector
                    res.push_back(i);
                    res.push_back(j);
                    isExit = 1;
                    break; //break the loop when we got two desired numbers
                }
                if(isExit) { //it checks for break statement whether it was executed or not.
                    break;
                }
            }
        }
        return res;
    }
};