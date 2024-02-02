#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define easy_count 10
void initeboard(char board[ROWS][COLS], int row, int col, char set);
void displayboard(char board[ROWS][COLS],int row,int col);
void set(char board[ROWS][COLS], int row, int col);
void find(char board[ROWS][COLS], char showboard[ROWS][COLS],int row,int col);
 int math(char board[ROWS][COLS], int x, int y);