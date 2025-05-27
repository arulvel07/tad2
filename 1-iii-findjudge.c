#include <stdio.h>
#include <stdlib.h>
int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    if(n==1 && trustSize==0) return 1;  //then he is the judge
    int* trusts = (int*)calloc(n + 1, sizeof(int));
    int* trusted_by = (int*)calloc(n + 1, sizeof(int));
    for (int i = 0; i < trustSize; i++) {
        int a = trust[i][0]; // a trusts b
        int b = trust[i][1]; 
        trusts[a]++;
        trusted_by[b]++;
    }
    for (int i = 1; i <= n; i++) {
        if (trusted_by[i] == n - 1 && trusts[i] == 0) { //if i trusts no one and trusted_by all ie n-1
            return i; //i is judge
        }
    }
    return -1;
}


int main(){
    int n, trustSize;
    printf("Enter number of people in the village(n):- ");
    scanf("%d", &n);
    printf("Enter number of trust relationships: ");
    scanf("%d", &trustSize);
    int **trust =(int**)malloc(trustSize*sizeof(int*));  //2d array where [a,b] means a trusts b
    int *trustColSize=(int*)malloc(trustSize*sizeof(int));
    printf("Enter the trust pairs (a,b) where a trusts b:- ");
    for(int i=0; i<trustSize; i++){
        trust[i]=(int*)malloc(2*sizeof(int));
        scanf("%d", &trust[i][0]);
        scanf("%d", &trust[i][1]);
        trustColSize[i]=2;
    }

    int judge=findJudge(n, trust, trustSize, trustColSize);
    if(judge==-1) printf("judge do not exist");
    else printf("the judge is %d", judge);
    return 0;
}