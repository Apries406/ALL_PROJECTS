#include<iostream>
#include<stdlib.h>
#include"Func.h"

using namespace std;

int main()
{
	struct STU* List = (struct STU*)malloc(sizeof(struct STU));
	List->next = NULL;
	readfileinfo(List);

	HOMEPAGE();
	while (true)
	{
		cout << "请输入您的选择：";
		int op ;
		cin >> op;
		switch (op)
		{
		case 1:
			Add(List);
			break;
		case 2:
			Modify(List);
			break;
		case 3:
			Erase(List);
			break;
		case 4:
			Search(List);
			break;
		case 5:
			Show(List);
			break;
		case 6:
			Exit(List);
			exit(0);
		default:
			cout << "您输入的按键无对应功能！\n请检查后重新输入" << endl;
			break;
		}
	}
	return 0;
}