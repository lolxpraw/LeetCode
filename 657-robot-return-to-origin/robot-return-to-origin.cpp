class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(int i = 0; moves[i] != '\0';i++){
            char move = moves[i];
            if (move == 'U') y--; // di len giam toa do y - 1
            else if (move == 'D') y++; // di xuong tang toa do y + 1
            else if (move == 'L') x--; // di trai giam toa do x - 1
            else if (move == 'R') x++; // di phai tang toa do x + 1
        }
        return x == 0 && y == 0;
    }
};