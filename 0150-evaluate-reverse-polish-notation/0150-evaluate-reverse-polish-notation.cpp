class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack < int > st ; 

        for ( string token : tokens){
            
            if (token == "+" || token == "-" ||
                token == "*" || token == "/") 
                {

                 int el1 = st.top();
                st.pop();

                int el2 = st.top();
                st.pop();

                int num;
                if ( token == "+"){
                    num= el2+el1;

                }
                else if ( token == "-"){
                    num= el2-el1;

                }
                 else if ( token == "*"){
                    num= el2*el1;

                }
                 else {
                    num= el2/el1;

                }
                st.push(num);



                }


            else {
                    st.push(stoi(token));
                }

          



           }
        

        return st.top();
        
    }
};
