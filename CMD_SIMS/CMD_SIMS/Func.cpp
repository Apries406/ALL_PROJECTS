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
	cout << "                    |-������������ӭʹ��ѧ����Ϣ����ϵͳ����������-|" << '\n';
	cout << "                    |**********************************************|" << '\n';
	cout << "                    |                                 --by <yunxia>|" << '\n';
	cout << "                    |----------------------------------------------|" << '\n';
	cout << "                    |-��-�����������������ǹ��ܰ�ť��������������--|" << '\n';
	cout << "                    |--�������������¶�Ӧ���ּ�����ʹ�á���������--|" << '\n';
	cout << "                    |----------------------------------------------|" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣ�        �ߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--��������ѧ����Ϣ�������������޸�ѧ����Ϣ��--|" << '\n';
	cout << "                    |-- ����������������        ���������������� --|" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣ�        �ߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--����ɾ��ѧ����Ϣ�����������ܲ���ѧ����Ϣ��--|" << '\n';
	cout << "                    |-- ����������������        ���������������� --|" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣ�        �ߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--������ʾѧ����Ϣ������������  �˳�ϵͳ  ��--|" << '\n';
	cout << "                    |-- ����������������        ���������������� --|" << '\n';
	cout << "                    |----------------------------------------------|" << '\n';
	cout << "\n\n\n";
}

void Show(struct STU* hnode)
{
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-��������������ʾѧ����Ϣ������������-|" << '\n';
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-������������ѡ����ʾ��ʽ������������-|" << '\n';
	cout << "                    *��ǰ��[" << getListLen(hnode)<< "]��ѧ��*" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--��        �ٰ��༶��ʾ          ��--|" << '\n';
	cout << "                    |-- �������������������������������� --|" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--��        �ڰ������ĳɼ�����    ��--|" << '\n';
	cout << "                    |-- �������������������������������� --|" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--��        �۰�����ѧ�ɼ�����    ��--|" << '\n';
	cout << "                    |-- �������������������������������� --|" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--��        �ܰ���Ӣ��ɼ�����    ��--|" << '\n';
	cout << "                    |-- �������������������������������� --|" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--��        �ݰ���C���Գɼ�����   ��--|" << '\n';
	cout << "                    |-- �������������������������������� --|" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--��        �ް��ܳɼ�����        ��--|" << '\n';
	cout << "                    |-- �������������������������������� --|" << '\n';
	cout << "                    |--------------------------------------|" << '\n';
	cout << "\n\n";
	int op;
	cout << " �ߣߣߣߣߣߣߣ�" << '\n';
	cout << "|����������ѡ��|" << '\n';
	cout << " ����������������" << "\n";
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
		cout << "������������������ѡ��" << '\n';
		break;
	}

	HOMEPAGE();
}

void clssshow(STU* hnode)
{
	char num[50];
	cout << " �ߣߣߣߣߣߣߣߣߣߣߣ�" << '\n';
	cout << "|����������Ҫ��ʾ�İ༶��|" << '\n';
	cout << " ������������������������" << "\n";
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
	cout << "                    |-������������ɾ��ѧ����Ϣ������������-|" << '\n';
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-������������֧�ְ�ѧ��ɾ������������-|" << '\n';
	cout << "                    |--------------------------------------|" << '\n';
	cout << "\n\n";

	char idnumber[50];
	cout << " �ߣߣߣߣߣߣߣߣߣߣ�" << '\n';
	cout << "|�������ɾ��ѧ��ѧ�ţ�|" << '\n';
	cout << " ����������������������" << "\n";
	
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
				a = a->next;//������ȣ��Ͳ���һ��
			}
		}
		cout << "ѧ�� [" << tname << "] ѧ�� [" << tidnum << "] ��Ϣɾ���ɹ�\n";
	}
	else cout << "ѧ�� [" << tidnum << "] �޶�Ӧѧ�����������������\n";

	HOMEPAGE();
}

void Modify(struct STU* hnode)
{
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-�������������޸�ѧ����Ϣ������������-|" << '\n';
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-������������֧�ְ�ѧ���޸ġ���������-|" << '\n';
	cout << "                    |--------------------------------------|" << '\n';
	cout << "\n\n";

	char idnumber[50];
	cout << " �ߣߣߣߣߣߣߣߣߣߣ�" << '\n';
	cout << "|��������޸�ѧ��ѧ�ţ�|" << '\n';
	cout << " ����������������������" << "\n";
	cin >> idnumber;

	struct STU* tmp = idnumsearch(hnode, idnumber);

	if (tmp == NULL)
	{
		cout << "ѧ�ţ��� " << idnumber << " ���޶�Ӧѧ��" << '\n';
	}
	else
	{
		struct INFO* infor = &(tmp->infor); //����Ϣ�����
		//���ԭ����Ϣ
		cout << "ѧ�š� " << idnumber << " ����Ӧ��Ϣ��" << '\n';
		cout << TITLE;
		cout << infor->idnum << '\t' << infor->classnum << '\t' << infor->name << '\t' << infor->sex << '\t' <<
			infor->old << '\t' << infor->chinese << '\t' << infor->math << '\t' << infor->english << '\t' << infor->english
			<< '\t' << infor->ccode << '\t' << infor->sum << '\t';

		cout << "\n��֧���޸ġ����������Ա𡱡��༶���Լ������Ƴɼ���" << '\n';
		cout << "����������һ����ʾ��Ӧ��Ϣ(ÿ�����ݼ��Կո����)��" << '\n';
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

		cout << "\n�޸ĳɹ����޸ĺ���Ϣ���£�\n";
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
	cout << "                    |-����������������ѧ����Ϣ������������-|" << '\n';
	cout << "                    |-************************************-|" << '\n';
	cout << "\n\n";
	cout << "�밴������ʾ������Ҫ���ѧ����Ϣ(�Կո�ָ�)��\n";
	cout << INTITLE;
	struct INFO stu;
	cin >> stu.idnum >> stu.classnum >> stu.name >> stu.sex >> stu.old
		>> stu.chinese >> stu.math >> stu.english >> stu.ccode;
	if (idnumsearch(hnode, stu.idnum) != NULL)
	{
		cout << "��ѧ���Ѿ����ڣ�������������룡\n";
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

		cout << "ѧ�� " << stu.name << "ѧ�� " << stu.idnum << "����Ϣ�Ѿ���ӳɹ���\n";
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
	cout << "                    |-����������������ѧ����Ϣ������������-|" << '\n';
	cout << "                    |-************************************-|" << '\n';
	cout << "                    |-������������ѡ����ҷ�ʽ������������-|" << '\n';
	cout << "                    |--------------------------------------|" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--��        �ٰ���������          ��--|" << '\n';
	cout << "                    |-- �������������������������������� --|" << '\n';
	cout << "                    |-- �ߣߣߣߣߣߣߣߣߣߣߣߣߣߣߣ� --|" << '\n';
	cout << "                    |--��        �ڰ�ѧ�Ų���          ��--|" << '\n';
	cout << "                    |-- �������������������������������� --|" << '\n';
	cout << "                    |--------------------------------------|" << '\n';
	cout << "\n\n";

	int op;
	cout << " �ߣߣߣߣߣߣߣ�" << '\n';
	cout << "|����������ѡ��|" << '\n';
	cout << " ����������������" << "\n";
	cin >> op;

	switch (op)
	{
	case 1:
		cout << " �ߣߣߣߣߣߣߣߣ�" << '\n';
		cout << "|�����������������|" << '\n';
		cout << " ������������������" << "\n";

		char name[50];
		cin >> name;
		namesearch(hnode, name);
		break;
	case 2:
		cout << " �ߣߣߣߣߣߣߣߣ�" << '\n';
		cout << "|�����������ѧ�ţ�|" << '\n';
		cout << " ������������������" << "\n";

		char idnum[50];
		cin >> idnum;
		idnumsearch(hnode, idnum);
		break;
	default:
		cout << "������������������ѡ��" << '\n';
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
		else cout << "���ļ�ʧ�ܣ����飡\n";
	}
}
STU* readfileinfo(STU* hnode)
{
	struct INFO stu;
	FILE* fp;
	if ((fp = fopen("./STUInfo.txt", "r")) == NULL)
	{
		cout << "���ļ�ʧ��\n";
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
		while ((p1 = p1->next) != NULL) //p1���ܸ�
		{
			min = p1;
			p2 = p1;

			while ((p2=p2->next) != NULL)//p2Ҳ���ܸ�
			{
				if ((p2->infor.chinese) < (p1->infor.chinese)) min = p2;
			}

			if (min != p1)//���p2<p1
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
		while ((p1 = p1->next) != NULL) //p1���ܸ�
		{
			min = p1;
			p2 = p1;

			while ((p2 = p2->next) != NULL)//p2Ҳ���ܸ�
			{
				if ((p2->infor.math) < (p1->infor.math)) min = p2;
			}

			if (min != p1)//���p2<p1
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
		while ((p1 = p1->next) != NULL) //p1���ܸ�
		{
			min = p1;
			p2 = p1;

			while ((p2 = p2->next) != NULL)//p2Ҳ���ܸ�
			{
				if ((p2->infor.english) < (p1->infor.english)) min = p2;
			}

			if (min != p1)//���p2<p1
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
		while ((p1 = p1->next) != NULL) //p1���ܸ�
		{
			min = p1;
			p2 = p1;

			while ((p2 = p2->next) != NULL)//p2Ҳ���ܸ�
			{
				if ((p2->infor.ccode) < (p1->infor.ccode)) min = p2;
			}

			if (min != p1)//���p2<p1
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
		while ((p1 = p1->next) != NULL) //p1���ܸ�
		{
			min = p1;
			p2 = p1;

			while ((p2 = p2->next) != NULL)//p2Ҳ���ܸ�
			{
				if ((p2->infor.sum) < (p1->infor.sum)) min = p2;
			}

			if (min != p1)//���p2<p1
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
