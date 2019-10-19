#ifndef cater_h
#define cater_h
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RED_COLOR        "\e[31m\e[1m%s\e[0m"
#define GREEN_COLOR      "\e[32m\e[1m%s\e[0m"
#define YELLOW_COLOR     "\e[33m\e[1m%s\e[0m"


/********************************类模块********************************/
//客户结构体声明
typedef struct _Guest
{
	int number; //桌号
	void *selected; //已选菜
	double consume; //消费
	
}Guest;
//出生日期声明
typedef struct _age{
	int year;
	int month;
	int day;
}Age;
//员工结构体声明
typedef struct _Staff
{
	int number; //工号
	char name[10]; //姓名
	char sex[10]; //性别
	Age birthday; //出生日期
	int telnumber[20]; //联系方式
	double salary; //工资
}Staff;
//店长结构体声明
typedef struct _Boos
{
	int number; //姓名
	char sex[10]; //性别
}Boos;
//菜类别声明
typedef struct _Type
{
	bool rice; //主食
	bool soup; //汤
	bool meat; //肉
	bool green; //蔬菜
	bool fruit; //水果
	bool drink; //饮料

}Type;
typedef struct _Formula
{
	
}Formula;
//菜结构体声明
typedef struct _Food
{
	int number; //菜号
	Type type; //类别
	char name[20]; //菜名
	double price; //价格
	Formula formula; //配方
};
/*****************************节点结构体模块************************************/

typedef struct _node{
	void *data;
	struct _node *next;
} Node;

typedef struct _linkedList{
	Node *head;
	Node *tail;
	Node *current;
} LinkedList;

/*****************************节点处理模块**************************************/

Student *initStu(char *name, int age, double record);
void outStu(Student *stu);
void initList(LinkedList *);
void addHead(LinkedList *, void *);
void addTail(LinkedList *, void *);
void delNode(LinkedList *, Node *);
Node *getNode(LinkedList *, void *);
void displayList(LinkedList *);

/*******************************界面函数模块********************************/


//用户登入
//用于调用员工、店长登入
void User_Login();
//员工登入
void Staff_Login();
//店长登入
void Boss_Login();
//客户登入
void Guest_Login();

//客户函数
//点单函数
void Order();
//反馈函数
void Feedback();

//员工函数
//查看点单
void ViewOrder();
//工资查询
void ViewSalary();

//店长函数
//营业额
double Turnover();
//员工查看
void ViewStaff();
//采购
void Buy();

/*******************************主菜单*********************************/

int mainMenu();










#endif