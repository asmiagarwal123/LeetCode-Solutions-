class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length())
            return false;

        int count[26] = {0};

        for (char c : s1)
            count[c - 'a']++;

        int i = 0;

        for (int j = 0; j < s2.length(); j++) {

            count[s2[j] - 'a']--;

            if (j - i + 1 > s1.length()) {
                count[s2[i] - 'a']++;
                i++;
            }

            bool match = true;

            for (int k = 0; k < 26; k++) {
                if (count[k] != 0) {
                    match = false;
                    break;
                }
            }

            if (match)
                return true;
        }

        return false;
    }
};