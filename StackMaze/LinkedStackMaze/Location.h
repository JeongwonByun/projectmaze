// https://eboong.tistory.com/33 �� ���� p.127�� 3.10 Location2D ����
#include <cstdio>
class Location {
	int row;	 
	int col;	 
public:
	Location(int r = 0, int c = 0) : row(r), col(c) {}
	bool isNeighbor(Location& p) { 
		return ((row == p.row && (col == p.col - 1 || col == p.col + 1)) // row���� ���� col���� ��������
			|| (col == p.col && (row == p.row - 1 || row == p.row + 1))); // col���� ���� row���� ��������
	}
	bool operator==(Location& p) { return row == p.row && col == p.col; } 	// ��ġ p�� �ڽŰ� ���� ��ġ������ �˻��ϴ� �Լ� 

	void display() 
	{ 
		printf("row : %d, col : %d\n", row+1, col+1); 
	}

	int getRow() 
	{ 
		return row; 
	}
	void setRow(int r)
	{
		row = r;
	}
	int getCol() 
	{ 
		return col; 
	}
	void setCol(int c) 
	{ 
		col = c; 
	}

	
};
