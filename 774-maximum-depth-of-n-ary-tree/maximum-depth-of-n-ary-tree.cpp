// Bai toan su dung de quy DFS
// khoi tao 
class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr) {
            return 0;
        }
        int dfs = 0;
        for (Node* child : root->children) {
            dfs = max(dfs, maxDepth(child));
        }
        return dfs + 1;
    }
};