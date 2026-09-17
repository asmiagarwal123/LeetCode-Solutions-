class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length()) {
            return false;
        }

        unordered_map<char, int> mpp;

        for (char c : s1) {
            mpp[c]++;
        }

        int i = 0;
        int j = s1.length() - 1;

        unordered_map<char, int> window;

        for (int k = i; k <= j; k++) {
            window[s2[k]]++;
        }

        while (j < s2.length()) {

            if (mpp == window) {
                return true;
            }

            window[s2[i]]--;

            if (window[s2[i]] == 0) {
                window.erase(s2[i]);
            }

            i++;
            j++;

            if (j < s2.length()) {
                window[s2[j]]++;
            }
        }

        return false;
    }
};