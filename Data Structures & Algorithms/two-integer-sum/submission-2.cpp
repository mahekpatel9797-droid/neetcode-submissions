class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        vector<int>ans(2);

        for(int i=0;i<nums.size();i++){
            int need = target-nums[i];

            if(map.find(need)!=map.end()){
                 ans[0]=map[need];
                 ans[1]=i;
            }else{
                map[nums[i]]=i;
            }
        }
        return ans;
    }
};
