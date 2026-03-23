class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n  = temperatures.size();
        vector<int> output(n,0);
        stack<int> st;
        // De bai temperatures = [73,74,75,71,69,72,76,73]
        /*  Cach vong lap hoat dong
        + xet i[0], stack rong -> push st = [0]
        + xet i[1], stack ko rong, temp[1] > temp[st.top()] ---- st.top() = 0
          prevIn = st.top() = 0 -> pop, st = [] -> output[prevIn] = i - prevIn = 1
        
        
        */
        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevIndex = st.top();
                st.pop();
                output[prevIndex] = i - prevIndex;
            }
            st.push(i);
        }
        return output;
    }
};