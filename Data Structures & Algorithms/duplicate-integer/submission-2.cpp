class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int length = nums.size();
        if (length <= 1){
            return false;
        }
        for (int i = 0; i <= length-1; i++){
            for (int j = i+1; j <= length ; j++){
                if (nums[i] == nums[j]){
                    
                    printf("nums i: %d\n nums j: %d\n", nums[i], nums[j]);
                    return true;

                }
            }
        }
        if (nums[length] == nums[length-1]){
            return true;
        }
        else{
            return false;
        }
    }
};