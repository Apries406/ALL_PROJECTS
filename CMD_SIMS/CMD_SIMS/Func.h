#include<string>
#include<iostream>
#define TITLE "ѧ��\t\t\t�༶\t����\t�Ա�\t����\t����\t��ѧ\tӢ��\tC����\t�ܳɼ�\t\n"
#define MTITLE "�༶\t����\t�Ա�\t����\t����\t��ѧ\tӢ��\tC����\n"
#define INTITLE "ѧ��\t\t�༶\t����\t�Ա�\t����\t����\t��ѧ\tӢ��\tC����\n"

using namespace std;

struct INFO
{
	char idnum[50];
	char classnum[50];
	char name[50];
	char sex[10];
	int old, chinese, math, english, ccode, sum;
};

struct STU
{
	struct INFO infor;
	struct STU* next;
};

void FreeStudentLIST(struct STU* node);//�ͷ������ڵ�  ��


void HOMEPAGE(); //��

//��ʾѧ���ɼ�(��������)
void Show(struct STU* node);  //��
void clssshow(struct STU* hnode);//�ְ���ʾ  //��
void chinesesort(struct STU* node);//�������ĳɼ�����  //��
void mathsort(struct STU* node);//������ѧ�ɼ�����  //��
void englishsort(struct STU* node);//����Ӣ��ɼ�����  //��
void ccodesort(struct STU* node);//����C���Գɼ�����  //��
void sumsort(struct STU* node);//�����ܳɼ�����  //��


void Erase(struct STU* node);
void Modify(struct STU* node);
//����ѧ����Ϣ
void Add(struct STU* node);

void Exit(struct STU* node);

//����ѧ����Ϣ(�������ҷ�ʽ)
void Search(struct STU* node);  //��
void namesearch(struct STU* node, char* name);//������������  //��
struct STU* idnumsearch(struct STU* node, char* idnum);//����ѧ�Ų���  //��

//�ļ���������
void preserveinfo(struct STU* hnode);//�����ļ���Ϣ
struct STU* readfileinfo(struct STU* hnode);//��ȡ�ļ���Ϣ
int getListLen(struct STU* hnode);