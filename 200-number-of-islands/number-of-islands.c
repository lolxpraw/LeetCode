void dfs(char** grid,int row,int col,int gridSize, int* gridColSize)
{
    if (row < 0 || row >= gridSize){
        return;
    }
    if (col < 0 || col >= gridColSize[row]){
        return;
    }
    if(grid[row][col] == '0'){
        return;
    }
    grid[row][col] = '0';
    dfs(grid, row + 1,col,gridSize,gridColSize);
    dfs(grid, row - 1,col,gridSize,gridColSize);
    dfs(grid, row,col + 1,gridSize,gridColSize);
    dfs(grid, row,col - 1,gridSize,gridColSize);
}
int numIslands(char** grid, int gridSize, int* gridColSize) {
    int count = 0;
    for(int i = 0;i < gridSize;i++){
        for(int j = 0;j < gridColSize[i];j++){
            if(grid[i][j] == '1'){
                count++;
                dfs(grid,i,j,gridSize,gridColSize);
            }
        }
    }
    return count;
}