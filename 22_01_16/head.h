
#define ROW 3
#define COL 3

// �����ĺ���

// �ж���Ϸ��Ӯ
int isWin(char board[ROW][COL], int row, int col);
// ��������
void computedMove(char board[ROW][COL], int row, int col);
// ��ӡ����
void DiaplayBoard(char board[ROW][COL], int row, int col);
// ��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
// ������Ϸѭ��
void startGame();
// ��ӡ�˵�
void menu();

void threeGame();