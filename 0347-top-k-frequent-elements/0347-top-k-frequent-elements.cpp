class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

       map < int , int > mpp;

       for ( int x : nums){
        mpp[x]++;
       }

       priority_queue< pair< int , int >> pq;

       for (auto el : mpp) {
    pq.push({el.second, el.first});
}

vector < int > ans ; 

 for (int i = 0; i < k; i++) {
            auto temp = pq.top();
            ans.push_back(temp.second);
            pq.pop();
        }

return ans;


        
    }
};