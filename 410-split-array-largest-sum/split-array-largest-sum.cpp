class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int h=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        while(l<=h){
            int mid=l+(h-l)/2;
            int s=0;
            int e=1;
            for(int i=0;i<n;i++){
                if(s+nums[i]<=mid){
                    s=s+nums[i];
                }
                else{
                    e++;
                    s=nums[i];
                }
            }
            if(e<=k){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};