class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int high=accumulate(weights.begin(),weights.end(),0);
        int low=*max_element(weights.begin(),weights.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int rdays=1;
            int cweight=0;
            for(int i=0;i<n;i++){
                if(cweight+weights[i]<=mid){
                    cweight=cweight+weights[i];
                    
                }
                else{
                    rdays++;
                    cweight=weights[i];
                }
            }
            if(rdays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;

    }
};