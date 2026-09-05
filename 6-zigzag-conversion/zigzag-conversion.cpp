// theo pattern, vd: numRows = 3 => 123212321.....
// numRows = 4 => 1234321234321............
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) return s;
        string row[numRows]; // ex: numRows = 3 => row[0],row[1],row[2]
        int curRow = 0;
        bool goingDown = true;
        // Lấy từng chữ trong string s để bỏ vào 1 ô
        for(char c : s){
            row[curRow] += c;
            if(curRow == 0) goingDown = true;
            if(curRow == numRows - 1) goingDown = false;
            if(goingDown == true) curRow++;
            else curRow--;
        }
    string ans = "";
    for(int i = 0;i < numRows;i++){
        ans += row[i];
    }
    return ans;
    }
};  