class Solution {
public:
    bool isValid(string s) {
       std::stack<char> st; // Khoi tao stack de chua cac dau ngoac
       for (char c : s){
        // Neu la ngoac mo, day vao trong stack
           if(c == '(' || c == '{' || c ==  '['){
              st.push(c);
           }
           // Neu la ngoac dong
           else {
              // Neu ngoac dong ma stack trong, tra ve false
              if(st.empty()) return false;
              char top = st.top(); // Lay ngoac gan nhat cua stack
              if ((c == ')' && top == '(' ) || (c == ']' && top == '[' ) || (c == '}' && top == '{' )){
                  st.pop();
              }  else {
               return false; // Khong khop kieu ngoac
              } 
           }
       }
       return st.empty();
    }
};