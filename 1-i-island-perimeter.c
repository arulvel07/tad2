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
int main() {
    int gridSize, cols;

    printf("Enter number of rows: ");
    scanf("%d", &gridSize);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int* gridColSize = (int*)malloc(sizeof(int) * gridSize);
    int** grid = (int**)malloc(sizeof(int*) * gridSize);

    for (int i = 0; i < gridSize; i++) {
        grid[i] = (int*)malloc(sizeof(int) * cols);
        gridColSize[i] = cols;

        printf("Enter values for row %d: ", i + 1);
        for (int j = 0; j < cols; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    int result = islandPerimeter(grid, gridSize, gridColSize);
    printf("Island Perimeter: %d\n", result);
    return 0;
}

