class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int temp=0;
            while(nums[i]>0){
                temp=temp+(nums[i]%10);
                nums[i]=nums[i]/10;
            }
            nums[i]=temp;
        }
        int min=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min) min=nums[i];
        }
        return min;
    }
};