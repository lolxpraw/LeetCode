class Solution {
public:
    // tao ra mot mang token de chua input 
    int evalRPN(vector<string>& tokens) {
        // khai bao mang
        stack<int> st;
        // Xet tung gia tri cua mang token
        /* Vi du [2,1,+,3,*]
        -> gap so -> dua vao stack
        -> gap toan tu -> lay 2 gia tri so truoc toan tu cua stack -> pop 2 gia tri -> push gia tri theo toan tu
        */
        for(string &t : tokens){
            if(t == "+" || t == "-" || t == "*" || t == "/"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if (t == "+") st.push(a + b);
                else if (t == "-") st.push(a - b);
                else if (t == "*") st.push(a * b);
                else if (t == "/") st.push(a / b);
            } else st.push(stoi(t));
        }
        return st.top();
    }
};