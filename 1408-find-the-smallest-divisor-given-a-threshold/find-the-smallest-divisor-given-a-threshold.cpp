class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int n=nums.size();
        int h=*max_element(nums.begin(),nums.end());
        int ans=h;
       
        while(l<=h){
            int mid=l+(h-l)/2;
             int sum=0;
            for(int i=0;i<n;i++){
                sum+=ceil((double)nums[i]/mid);
            }
            if(sum<=threshold){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};