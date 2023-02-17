#include<string>
#include<iostream>
#define TITLE "学号\t\t\t班级\t姓名\t性别\t年龄\t语文\t数学\t英语\tC语言\t总成绩\t\n"
#define MTITLE "班级\t姓名\t性别\t年龄\t语文\t数学\t英语\tC语言\n"
#define INTITLE "学号\t\t班级\t姓名\t性别\t年龄\t语文\t数学\t英语\tC语言\n"

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

void FreeStudentLIST(struct STU* node);//释放整个节点  √


void HOMEPAGE(); //√

//显示学生成绩(包括排序)
void Show(struct STU* node);  //√
void clssshow(struct STU* hnode);//分班显示  //√
void chinesesort(struct STU* node);//根据语文成绩排序  //√
void mathsort(struct STU* node);//根据数学成绩排序  //√
void englishsort(struct STU* node);//根据英语成绩排序  //√
void ccodesort(struct STU* node);//根据C语言成绩排序  //√
void sumsort(struct STU* node);//根据总成绩排序  //√


void Erase(struct STU* node);
void Modify(struct STU* node);
//增加学生信息
void Add(struct STU* node);

void Exit(struct STU* node);

//查找学生信息(附带查找方式)
void Search(struct STU* node);  //√
void namesearch(struct STU* node, char* name);//根据姓名查找  //√
struct STU* idnumsearch(struct STU* node, char* idnum);//根据学号查找  //√

//文件操作函数
void preserveinfo(struct STU* hnode);//保存文件信息
struct STU* readfileinfo(struct STU* hnode);//读取文件信息
int getListLen(struct STU* hnode);