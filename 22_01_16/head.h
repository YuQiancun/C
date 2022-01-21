
#define ROW 3
#define COL 3

// 声明的函数

// 判断游戏输赢
int isWin(char board[ROW][COL], int row, int col);
// 电脑下棋
void computedMove(char board[ROW][COL], int row, int col);
// 打印棋盘
void DiaplayBoard(char board[ROW][COL], int row, int col);
// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
// 进入游戏循环
void startGame();
// 打印菜单
void menu();

void threeGame();