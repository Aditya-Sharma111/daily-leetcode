class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int n=piles.size();
        int hi=*max_element(piles.begin(),piles.end());
        int ans=hi;
        while(l<=hi){
            int mid=l+(hi-l)/2;
            long long tHr=0;
            for(int i=0;i<n;i++){
                tHr+=ceil((double)piles[i]/mid);
            }
            if(tHr<=h){
                hi=mid-1;
                ans=mid;
            }
            else{
                l=mid+1;
            }

        }
        return ans;
    }
};