#include <iostream>
using namespace std;
bool isSafe(int board[][10], int i, int j, int n){
    //check for columns
    for(int row=0;row<i;row++){
        if(board[row][j]==1)
            return false;
    }
    //check for left diagonal
    int x=i, y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1)
            return false;
        x--;
        y--;
    }
    //check for right diagonal
    x=i, y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1)
            return false;
        x--;
        y++;
    }
    return true;
}
bool solveNqueen(int board[][10], int i, int n){
    if(i==n){
        // n queens have been placed succesfully
        for(int p=0;p<n;p++){
            for(int j=0;j<n;j++){
                if(board[p][j]==1){
                    cout<<"Q ";
                }
                else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        return false;//to get all the cases
    }
    for(int j=0;j<n;j++){
        if(isSafe(board, i, j, n)){
            board[i][j]=1;
            bool nextquuenfine=solveNqueen(board, i+1, n);
            if(nextquuenfine)
                return true;
            board[i][j]=0;//backtracking
        }
    }
    return false;
}
int main() {
    int n;
    cin>>n;
    int board[10][10]={0};
    bool see=solveNqueen(board, 0, n);
}
