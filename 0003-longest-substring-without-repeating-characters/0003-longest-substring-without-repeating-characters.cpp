class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set < char  > st ; 
        
        
        int left =0 ;
        int ans=0 ; 

        for ( int right =0 ; right < s.length(); right ++){
            while ( st.count(s[right])){
                st.erase(s[left]);
                left ++;
            }
            st.insert(s[right]);
            int s_size= st.size() ; 
            ans= max( ans , s_size );
        }


        return ans ;
    }
};