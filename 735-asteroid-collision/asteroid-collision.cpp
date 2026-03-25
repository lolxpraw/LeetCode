class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        
        for(int a : asteroids){
            while(!st.empty() && st.top() > 0 && a < 0){
                if(abs(st.top()) < abs(a)){
                    st.pop();
                }   
                else if (abs(st.top()) == abs(a)){
                    st.pop();
                    a = 0;
                    break;
                }
                else {
                    a = 0;
                    break;
                }
            }
            if (a != 0) st.push(a);
        }
        vector<int> res(st.size());
        for(int i = st.size() - 1;i >= 0;i--){
            res[i] = st.top();
            st.pop();
        }
        return res;
    }
};