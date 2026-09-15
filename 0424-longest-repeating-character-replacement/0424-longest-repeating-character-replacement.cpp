
class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int left = 0;
        int maxFreq = 0;
        int ans = 0;
        
        int count[26] = {0};

        for (int right = 0; right < s.length(); right++) {
            
            count[s[right] - 'A']++;
            
            maxFreq = max(maxFreq, count[s[right] - 'A']);
            
            int windowLength = right - left + 1;
            int replacements = windowLength - maxFreq;
            
            while (replacements > k) {
                
                count[s[left] - 'A']--;
                left++;
                
                windowLength = right - left + 1;
                replacements = windowLength - maxFreq;
            }
            
            ans = max(ans, right - left + 1);
        }
        
        return ans;
    }
};

