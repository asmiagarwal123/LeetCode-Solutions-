class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int n = arr.size();

        int bestStart = 0;
        int minDistance = INT_MAX;

        // Try every window of size k
        for (int start = 0; start <= n - k; start++) {

            int distance = 0;

            // Calculate total distance of this window from x
            for (int i = start; i < start + k; i++) {
                distance += abs(arr[i] - x);
            }

            // Keep the window with minimum distance
            if (distance < minDistance) {
                minDistance = distance;
                bestStart = start;
            }
        }

        // Build answer
        vector<int> ans;

        for (int i = bestStart; i < bestStart + k; i++) {
            ans.push_back(arr[i]);
        }

        return ans;
    }
};