class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int x = floor(n/2);
        int tmp_index = 0;
        //sorting array using stl
        sort(nums.begin(),nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i]==nums[tmp_index]) {
                count += 1;
                if(count>x) {
                    return nums[i];
                }
            }
            else {
                tmp_index = i;
                count = 1;
            }
            
        }

        return -1;
    }
};