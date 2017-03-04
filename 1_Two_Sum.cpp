class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> temp;
        vector<int> res;
        
        for(int i=0; i<nums.size(); i++)
        {
            int NumFind = target - nums[i];
            if(temp.find(NumFind) != temp.end())
            {
                res.push_back(temp[NumFind]);
                res.push_back(i);
                break;
            }
            temp[nums[i]] = i;
        }
        return res;
    }
};
