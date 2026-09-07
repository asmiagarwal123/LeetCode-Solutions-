class NumMatrix {
public:

    vector<vector<int>> prefix;

    NumMatrix(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int col=matrix[0].size();

        prefix= vector< vector < int >> (rows+1 , vector < int > (col+1, 0));

        for ( int i =0 ; i < rows ; i ++){
            for ( int j =0 ; j < col ; j++){
                prefix[i+1][j+1]=matrix[i][j]+prefix[i+1][j]+prefix[i][j+1]-prefix[i][j];

            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {

        int result= prefix[row2+1][col2+1]-prefix[row1][col2+1]-prefix[row2+1][col1]+prefix[row1][col1];

        return result; 
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */