class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end()); //sorting array elements
        int size=nums.size();          //storing the size of array
        int i;                         //counter variable for indexes
        for(i=0;i<size-1;i++)
        {
            if(nums[i]==nums[i+1])     //comparing every element to its preceeding element
            {
                return true;
            }
        }
        return false;
    }
};