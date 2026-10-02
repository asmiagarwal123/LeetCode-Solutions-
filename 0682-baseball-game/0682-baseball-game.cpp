class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack < int > st ; 


        for ( string op : operations){
            if ( op == "C"){
                st.pop();
            }
            else if (op =="D"){
                st.push(2 * st.top());

            }
            else if (op == "+"){
                int last=st.top();
                st.pop();
                int lastsecond=st.top();
               st. push(last);
                st.push(last+lastsecond);

            }

            else{
                int num = stoi(op);
                st.push(num);
            }
        }

            int total = 0;
        while (!st.empty()) {
            total += st.top();
            st.pop();
        }

        return total ; 
        
    }
};