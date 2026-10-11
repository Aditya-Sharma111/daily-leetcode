class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre=strs[0];
        for(int i=0;i<=pre.size()-1;i++){
            for(int j=0;j<=strs.size()-1;j++){
                if(i>=strs[j].size()){
                    return pre.substr(0,i);
                }
                if(pre[i]!=strs[j][i]){
                    return pre.substr(0,i);
                }
            }
        }
        return pre;
    }
};