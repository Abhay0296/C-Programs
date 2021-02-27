// board is valid or not
#include <iostream>
using namespace std;

// This matrix is used to find indexes to check all
// possible wining triplets in board[0..8]
int win[8][3] = {{0, 1, 2}, // Check first row.
				{3, 4, 5}, // Check second Row
				{6, 7, 8}, // Check third Row
				{0, 3, 6}, // Check first column
				{1, 4, 7}, // Check second Column
				{2, 5, 8}, // Check third Column
				{0, 4, 8}, // Check first Diagonal
				{2, 4, 6}}; // Check second Diagonal

// Returns true if character 'c' wins. c can be either
// 'X' or 'O'
bool is_win(char *board, char c)
{
	// Check all possible winning combinations
	for (int i=0; i<8; i++)
		if (board[win[i][0]] == c &&
			board[win[i][1]] == c &&
			board[win[i][2]] == c )
			return true;
	return false;
}

// Returns true if given board is valid, else returns false
bool is_valid(char board[9])
{
	// Count number of 'X' and 'O' in the given board
	int xCount=0, oCount=0;
	for (int i=0; i<9; i++)
	{
	if (board[i]=='X') xCount++;
	if (board[i]=='O') oCount++;
	}

	// Board can be valid only if either xCount and oCount
	// is same or xount is one more than oCount
	 if(xCount==oCount or xCount==oCount + 1){
       if(is_win(board,'O')==true){
           if(is_win(board,'X')==true){
               return false;
           }
          else
          {
              if(xCount == oCount)
              {
                  return true;
              }
              else{
                  return false;
              }

          }
       }
        if(is_win(board,'X')==true && xCount != oCount+1)
        {
           return false;
       }
         return true;
   }
   else
   {
     return false;
   }
}

// Driver program
int main()
{
 int t;
    cin>>t;
    while(t--){
        int i;
        char board[9];
        for(i=0;i<9;i++){
            cin>>board[i];
        }
        (is_valid(board)) ? cout<<"Valid"<<endl : cout<<"Invalid"<<endl;
    }
  return 0;
}

