class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set < int> st ; 
        int left= 0 ; 
        int ans=0;

        for( int right =0 ; right < s.length();right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            int size= st.size();
            ans= max(ans, size );
        }
        return ans ;
    }
};