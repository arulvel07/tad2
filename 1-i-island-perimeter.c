#include <stdio.h>
#include <stdlib.h>

int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int perimeter=0;
    int cols = gridColSize[0];
    for(int i=0; i<gridSize; i++){
    for(int j=0; j<cols; j++){
        if(grid[i][j]==1){
            perimeter+=4;

            if (i > 0 && grid[i - 1][j] == 1) {
                perimeter -= 1;
            }
            if (i < gridSize - 1 && grid[i + 1][j] == 1) {
                perimeter -= 1;
            }
            if (j > 0 && grid[i][j - 1] == 1) {
                perimeter -= 1;
            }
            if (j < gridColSize[i] - 1 && grid[i][j + 1] == 1) {
                perimeter -= 1;
            }
        }
    }
    }
    return perimeter;   
}


