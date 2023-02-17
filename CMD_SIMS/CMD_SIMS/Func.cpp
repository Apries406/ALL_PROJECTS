#include "Func.h"

using namespace std;



void FreeStudentLIST(struct STU* hnode)
{
	struct STU* p = hnode;
	while (p != NULL)
	{
		hnode = p->next;
		free(p);
		p = hnode;
	}
}

void HOMEPAGE()
{
	cout << "\n\n\n";
	cout << "                    |-********************************************-|" << '\n';
	cout << "                    |-·····欢迎使用学生信息管理系统·····-|" << '\n';
	cout << "                    |**********************************************|" << '\n';
	cout << "                    |                                 --by <yunxia>|" << '\n';
	cout << "                    |----------------------------------------------|" << '\n';
	cout << "                    |-·-······以下是功能按钮·······--|" << '\n';
	cout << "                    |--·····按下对应数字键即可使用·····--|" << '\n';
	cout << "                    |----------------------------------------------|" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿        ＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜①增加学生信息｜···｜②修改学生信息｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣        ￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿        ＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜③删除学生信息｜···｜④查找学生信息｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣        ￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿        ＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜⑤显示学生信息｜···｜⑥  退出系统  ｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣        ￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |----------------------------------------------|" << '\n';
	cout << "\n\n\n";
}

void Show(struct STU* hnode)
{
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-······显示学生信息······-|" << '\n';
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-······选择显示方式······-|" << '\n';
	cout << "                    *当前共[" << getListLen(hnode)<< "]名学生*" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜        ①按班级显示          ｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜        ②按照语文成绩排序    ｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜        ③按照数学成绩排序    ｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜        ④按照英语成绩排序    ｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜        ⑤按照C语言成绩排序   ｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜        ⑥按总成绩排序        ｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |--------------------------------------|" << '\n';
	cout << "\n\n";
	int op;
	cout << " ＿＿＿＿＿＿＿＿" << '\n';
	cout << "|请输入您的选择：|" << '\n';
	cout << " ￣￣￣￣￣￣￣￣" << "\n";
	cin >> op;
	switch (op)
	{
	case 1:
		clssshow(hnode);
		break;
	case 2:
		chinesesort(hnode);
		break;
	case 3:
		mathsort(hnode);
		break;
	case 4:
		englishsort(hnode);
		break;
	case 5:
		ccodesort(hnode);
		break;
	case 6:
		sumsort(hnode);
		break;
	default:
		cout << "您的输入有误，请重新选择！" << '\n';
		break;
	}

	HOMEPAGE();
}

void clssshow(STU* hnode)
{
	char num[50];
	cout << " ＿＿＿＿＿＿＿＿＿＿＿＿" << '\n';
	cout << "|请输入您需要显示的班级：|" << '\n';
	cout << " ￣￣￣￣￣￣￣￣￣￣￣￣" << "\n";
	cin >> num;

	struct STU* tmp = NULL;
	if (hnode != NULL)
	{
		tmp = hnode->next;
		while (tmp != NULL)
		{
			if (strcmp(tmp->infor.classnum,num) == 0)
			{
				printf(TITLE);
				printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n", tmp->infor.idnum, tmp->infor.classnum, tmp->infor.name,
					tmp->infor.sex, tmp->infor.old, tmp->infor.chinese, tmp->infor.math, tmp->infor.english,
					tmp->infor.ccode, tmp->infor.sum);
			}
			tmp = tmp->next;
		}
	}

}

void Erase(struct STU* hnode)
{
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-······删除学生信息······-|" << '\n';
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-·····仅支持按学号删除·····-|" << '\n';
	cout << "                    |--------------------------------------|" << '\n';
	cout << "\n\n";

	char idnumber[50];
	cout << " ＿＿＿＿＿＿＿＿＿＿＿" << '\n';
	cout << "|请输入待删除学生学号：|" << '\n';
	cout << " ￣￣￣￣￣￣￣￣￣￣￣" << "\n";
	
	cin >> idnumber;
	struct STU* stu;
	char tname[50];
	char tidnum[50];

	if (stu = idnumsearch(hnode, idnumber))
	{
		strcpy(tname, stu->infor.name);
		strcpy(tidnum, stu->infor.idnum);
		struct STU* a = NULL, * b = NULL; 
		if (hnode != NULL)
		{
			a = hnode->next;
			
			while (a != NULL)
			{
				b = a;
				if (strcmp(a->infor.idnum, idnumber) == 0)
				{
					b->next = a->next;
					a->next = NULL;
					free(a);
					break;
				}
				a = a->next;//如果不等，就查下一个
			}
		}
		cout << "学生 [" << tname << "] 学号 [" << tidnum << "] 信息删除成功\n";
	}
	else cout << "学号 [" << tidnum << "] 无对应学生，请检查后重新输入\n";

	HOMEPAGE();
}

void Modify(struct STU* hnode)
{
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-······修改学生信息······-|" << '\n';
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-·····仅支持按学号修改·····-|" << '\n';
	cout << "                    |--------------------------------------|" << '\n';
	cout << "\n\n";

	char idnumber[50];
	cout << " ＿＿＿＿＿＿＿＿＿＿＿" << '\n';
	cout << "|请输入待修改学生学号：|" << '\n';
	cout << " ￣￣￣￣￣￣￣￣￣￣￣" << "\n";
	cin >> idnumber;

	struct STU* tmp = idnumsearch(hnode, idnumber);

	if (tmp == NULL)
	{
		cout << "学号：“ " << idnumber << " ”无对应学生" << '\n';
	}
	else
	{
		struct INFO* infor = &(tmp->infor); //把信息提出来
		//输出原来信息
		cout << "学号“ " << idnumber << " ”对应信息：" << '\n';
		cout << TITLE;
		cout << infor->idnum << '\t' << infor->classnum << '\t' << infor->name << '\t' << infor->sex << '\t' <<
			infor->old << '\t' << infor->chinese << '\t' << infor->math << '\t' << infor->english << '\t' << infor->english
			<< '\t' << infor->ccode << '\t' << infor->sum << '\t';

		cout << "\n仅支持修改“姓名”“性别”“班级”以及“各科成绩”" << '\n';
		cout << "请依次输入一下提示对应信息(每个数据间以空格隔开)：" << '\n';
		cout << MTITLE;

		struct INFO moinfo;
		cin >> moinfo.classnum >> moinfo.name >> moinfo.sex >> moinfo.old >> moinfo.chinese >> moinfo.math
			>> moinfo.english >> moinfo.ccode;

		strcpy(infor->classnum, moinfo.classnum);
		strcpy(infor->name, moinfo.name);
		strcpy(infor->sex, moinfo.sex);

		infor->old = moinfo.old;
		infor->chinese = moinfo.chinese;
		infor->math = moinfo.math;
		infor->english = moinfo.english;
		infor->ccode = moinfo.ccode;

		infor->sum = infor->chinese + infor->math + infor->english + infor->ccode;

		cout << "\n修改成功，修改后信息如下：\n";
		cout << TITLE;
		cout << infor->idnum << '\t' << infor->classnum << '\t' << infor->name << '\t' << infor->sex << '\t' <<
			infor->old << '\t' << infor->chinese << '\t' << infor->math << '\t' << infor->english 
			<< '\t' << infor->ccode << '\t' << infor->sum << '\t';

	}
	HOMEPAGE();
}

void Add(struct STU* hnode)
{
	cout << "\n\n";
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-······增加学生信息······-|" << '\n';
	cout << "                    |-************************************-|" << '\n';
	cout << "\n\n";
	cout << "请按下列提示输入需要添加学生信息(以空格分隔)：\n";
	cout << INTITLE;
	struct INFO stu;
	cin >> stu.idnum >> stu.classnum >> stu.name >> stu.sex >> stu.old
		>> stu.chinese >> stu.math >> stu.english >> stu.ccode;
	if (idnumsearch(hnode, stu.idnum) != NULL)
	{
		cout << "该学号已经存在，请检查后重新输入！\n";
	}
	else
	{
		struct STU* node = (struct STU*)malloc(sizeof(struct STU));
		
		while (hnode->next != NULL) hnode = hnode->next;

		hnode->next = node;
		node->next = NULL;

		strcpy(node->infor.idnum, stu.idnum);
		strcpy(node->infor.classnum, stu.classnum);
		strcpy(node->infor.name, stu.name);
		strcpy(node->infor.sex, stu.sex);
		node->infor.old = stu.old;
		node->infor.chinese = stu.chinese;
		node->infor.math = stu.math;
		node->infor.english = stu.english;
		node->infor.ccode = stu.ccode;
		node->infor.sum = node->infor.chinese + node->infor.math + node->infor.english + node->infor.ccode;

		cout << "学生 " << stu.name << "学号 " << stu.idnum << "的信息已经添加成功！\n";
	}
	preserveinfo(hnode);
	HOMEPAGE();
}



void Exit(struct STU* hnode)
{
	preserveinfo(hnode);
	FreeStudentLIST(hnode);
	cout << " exit" << endl;
}

void Search(struct STU* hnode)
{
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-······查找学生信息······-|" << '\n';
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-······选择查找方式······-|" << '\n';
	cout << "                    |--------------------------------------|" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜        ①按姓名查找          ｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |-- ＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿＿ --|" << '\n';
	cout << "                    |--｜        ②按学号查找          ｜--|" << '\n';
	cout << "                    |-- ￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣ --|" << '\n';
	cout << "                    |--------------------------------------|" << '\n';
	cout << "\n\n";

	int op;
	cout << " ＿＿＿＿＿＿＿＿" << '\n';
	cout << "|请输入您的选择：|" << '\n';
	cout << " ￣￣￣￣￣￣￣￣" << "\n";
	cin >> op;

	switch (op)
	{
	case 1:
		cout << " ＿＿＿＿＿＿＿＿＿" << '\n';
		cout << "|请输入待查找姓名：|" << '\n';
		cout << " ￣￣￣￣￣￣￣￣￣" << "\n";

		char name[50];
		cin >> name;
		namesearch(hnode, name);
		break;
	case 2:
		cout << " ＿＿＿＿＿＿＿＿＿" << '\n';
		cout << "|请输入待查找学号：|" << '\n';
		cout << " ￣￣￣￣￣￣￣￣￣" << "\n";

		char idnum[50];
		cin >> idnum;
		idnumsearch(hnode, idnum);
		break;
	default:
		cout << "您的输入有误，请重新选择！" << '\n';
		break;
	}

	HOMEPAGE();
}

void namesearch(STU* hnode, char* name)
{
	struct STU* tmp = NULL;
	if (hnode != NULL)
	{
		tmp = hnode->next;
		while (tmp != NULL)
		{
			if (strcmp(tmp->infor.name, name) == 0)
			{
				printf(TITLE);
				printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n", tmp->infor.idnum, tmp->infor.classnum,tmp->infor.name, 
					tmp->infor.sex,tmp->infor.old, tmp->infor.chinese, tmp->infor.math,tmp->infor.english,
					tmp->infor.ccode,tmp->infor.sum);
			}
			tmp = tmp->next;
		}
	}
}

struct STU* idnumsearch(STU* hnode, char* idnum)
{
	struct STU* tmp = NULL;
	if (hnode != NULL)
	{
		tmp = hnode->next;
		while (tmp != NULL)
		{
			if (strcmp(tmp->infor.idnum,idnum) == 0)
			{
				printf(TITLE);
				printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n", tmp->infor.idnum, tmp->infor.classnum, tmp->infor.name,
					tmp->infor.sex, tmp->infor.old, tmp->infor.chinese, tmp->infor.math, tmp->infor.english,
					tmp->infor.ccode, tmp->infor.sum);
				return tmp;
			}
			tmp = tmp->next;
		}
	}
	return tmp;
}
void preserveinfo(STU* hnode)
{
	if (hnode != NULL)
	{
		struct STU* tmp = hnode->next;
		FILE* fp = fopen("./STUInfo.txt", "w+");
		fprintf(fp, TITLE);
		if (fp != NULL)
		{
			struct INFO* Infor;
			while (tmp != NULL)
			{
				Infor = &(tmp->infor);
				fprintf(fp, "%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",
					Infor->idnum, Infor->classnum, Infor->name, Infor->sex, Infor->old
					, Infor->chinese, Infor->math, Infor->english, Infor->ccode, Infor->sum);
				tmp = tmp->next;
			}
			fclose(fp);
		}
		else cout << "打开文件失败，请检查！\n";
	}
}
STU* readfileinfo(STU* hnode)
{
	struct INFO stu;
	FILE* fp;
	if ((fp = fopen("./STUInfo.txt", "r")) == NULL)
	{
		cout << "打开文件失败\n";
		return NULL;
	}

	int jud;
	struct INFO tmpTitle;
	fscanf(fp, "%s%s%s%s%d%d%d%d%d%d", tmpTitle.idnum, tmpTitle.classnum, tmpTitle.name, tmpTitle.sex, &tmpTitle.old
		, &tmpTitle.chinese, &tmpTitle.math, &tmpTitle.english, &tmpTitle.ccode, &tmpTitle.sum);

	while (true)
	{
		jud = fscanf(fp, "%s%s%s%s%d%d%d%d%d%d", stu.idnum, stu.classnum, stu.name, stu.sex, &stu.old
			, &stu.chinese, &stu.math, &stu.english, &stu.ccode, &stu.sum);
		if (jud == -1) break
			;
		struct STU* node = (struct STU*)malloc(sizeof(struct STU));

		while (hnode->next != NULL) hnode = hnode->next;

		hnode->next = node;
		node->next = NULL;

		strcpy(node->infor.idnum, stu.idnum);
		strcpy(node->infor.classnum, stu.classnum);
		strcpy(node->infor.name, stu.name);
		strcpy(node->infor.sex, stu.sex);
		node->infor.old = stu.old;
		node->infor.chinese = stu.chinese;
		node->infor.math = stu.math;
		node->infor.english = stu.english;
		node->infor.ccode = stu.ccode;
		node->infor.sum = node->infor.chinese + node->infor.math + node->infor.english + node->infor.ccode;

	}
	fclose(fp);
}

int getListLen(STU* hnode)
{
	int cnt = 0;
	struct STU* p = NULL;
	if (hnode != NULL)
	{
		cnt++;
		p = hnode->next;
	}

	return cnt;
}

void chinesesort(struct STU* hnode)
{
	if (hnode != NULL)
	{
		struct STU* p1, * p2, * min;
		struct INFO info;

		p1 = hnode;
		while ((p1 = p1->next) != NULL) //p1还能搞
		{
			min = p1;
			p2 = p1;

			while ((p2=p2->next) != NULL)//p2也得能搞
			{
				if ((p2->infor.chinese) < (p1->infor.chinese)) min = p2;
			}

			if (min != p1)//如果p2<p1
			{
				info = p1->infor;
				p1->infor = min->infor;
				min->infor = info;
			}
		}

		struct STU* tmp = hnode;

		while (tmp!= NULL)
		{
			printf(TITLE);
			printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n", tmp->infor.idnum, tmp->infor.classnum, tmp->infor.name,
				tmp->infor.sex, tmp->infor.old, tmp->infor.chinese, tmp->infor.math, tmp->infor.english,
				tmp->infor.ccode, tmp->infor.sum);
			tmp = tmp->next;
		}
	}
}
void mathsort(struct STU* hnode)
{
	if (hnode != NULL)
	{
		struct STU* p1, * p2, * min;
		struct INFO info;

		p1 = hnode;
		while ((p1 = p1->next) != NULL) //p1还能搞
		{
			min = p1;
			p2 = p1;

			while ((p2 = p2->next) != NULL)//p2也得能搞
			{
				if ((p2->infor.math) < (p1->infor.math)) min = p2;
			}

			if (min != p1)//如果p2<p1
			{
				info = p1->infor;
				p1->infor = min->infor;
				min->infor = info;
			}
		}

		struct STU* tmp = hnode;

		while (tmp != NULL)
		{
			printf(TITLE);
			printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n", tmp->infor.idnum, tmp->infor.classnum, tmp->infor.name,
				tmp->infor.sex, tmp->infor.old, tmp->infor.chinese, tmp->infor.math, tmp->infor.english,
				tmp->infor.ccode, tmp->infor.sum);
			tmp = tmp->next;
		}
	}
}

void englishsort(struct STU* hnode)
{
	if (hnode != NULL)
	{
		struct STU* p1, * p2, * min;
		struct INFO info;

		p1 = hnode;
		while ((p1 = p1->next) != NULL) //p1还能搞
		{
			min = p1;
			p2 = p1;

			while ((p2 = p2->next) != NULL)//p2也得能搞
			{
				if ((p2->infor.english) < (p1->infor.english)) min = p2;
			}

			if (min != p1)//如果p2<p1
			{
				info = p1->infor;
				p1->infor = min->infor;
				min->infor = info;
			}
		}

		struct STU* tmp = hnode;

		while (tmp != NULL)
		{
			printf(TITLE);
			printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n", tmp->infor.idnum, tmp->infor.classnum, tmp->infor.name,
				tmp->infor.sex, tmp->infor.old, tmp->infor.chinese, tmp->infor.math, tmp->infor.english,
				tmp->infor.ccode, tmp->infor.sum);
			tmp = tmp->next;
		}
	}
}

void ccodesort(struct STU* hnode)
{
	if (hnode != NULL)
	{
		struct STU* p1, * p2, * min;
		struct INFO info;

		p1 = hnode;
		while ((p1 = p1->next) != NULL) //p1还能搞
		{
			min = p1;
			p2 = p1;

			while ((p2 = p2->next) != NULL)//p2也得能搞
			{
				if ((p2->infor.ccode) < (p1->infor.ccode)) min = p2;
			}

			if (min != p1)//如果p2<p1
			{
				info = p1->infor;
				p1->infor = min->infor;
				min->infor = info;
			}
		}

		struct STU* tmp = hnode;

		while (tmp != NULL)
		{
			printf(TITLE);
			printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n", tmp->infor.idnum, tmp->infor.classnum, tmp->infor.name,
				tmp->infor.sex, tmp->infor.old, tmp->infor.chinese, tmp->infor.math, tmp->infor.english,
				tmp->infor.ccode, tmp->infor.sum);
			tmp = tmp->next;
		}
	}
}

void sumsort(struct STU* hnode)
{
	if (hnode != NULL)
	{
		struct STU* p1, * p2, * min;
		struct INFO info;

		p1 = hnode;
		while ((p1 = p1->next) != NULL) //p1还能搞
		{
			min = p1;
			p2 = p1;

			while ((p2 = p2->next) != NULL)//p2也得能搞
			{
				if ((p2->infor.sum) < (p1->infor.sum)) min = p2;
			}

			if (min != p1)//如果p2<p1
			{
				info = p1->infor;
				p1->infor = min->infor;
				min->infor = info;
			}
		}
		 
		struct STU* tmp = hnode;

		while (tmp != NULL)
		{
			printf(TITLE);
			printf("%s\t%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n", tmp->infor.idnum, tmp->infor.classnum, tmp->infor.name,
				tmp->infor.sex, tmp->infor.old, tmp->infor.chinese, tmp->infor.math, tmp->infor.english,
				tmp->infor.ccode, tmp->infor.sum);
			tmp = tmp->next;
		}
	}
}
