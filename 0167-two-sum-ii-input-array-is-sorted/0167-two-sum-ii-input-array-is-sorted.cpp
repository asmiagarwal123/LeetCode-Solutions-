class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector < int> v;

            int n  = numbers.size();
            int j = n-1;
            int i =0 ; 

            while  ( i < j ){

            int sum = numbers[i]+numbers[j];

            if( sum < target){
                i++;
            }
            else if (sum>target ){
                j--;
            }
            else{
                break;
            }
        }


        v.push_back(i + 1);
        v.push_back(j + 1);
        sort(v.begin(), v.end());

        return v;
        
    }
};