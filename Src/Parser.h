#pragma once
#include<vector>
#include<string>
#include<sstream>
#include<fstream>
#include<iostream>
#include<iomanip>
using namespace std;

#define BEGIN 1
#define END 2
#define INTEGER 3
#define IF 4
#define THEN 5
#define ELSE 6
#define FUNCTION 7
#define READ 8
#define WRITE 9
#define IDENTIFIER 10
#define CONSTANT 11
#define EOLN 24
#define EOF 25

//��������
#define LACK_OF " LACK OF "
#define VARIABLE_ALREADY_DEFINED " VARIABLE ALREADY DEFINED "
#define VARIABLE_NOT_DEFINED " VARIABLE NOT DEFINED "
#define DOES_NOT_MATCH " DOES NOT MATCH "

class Statements
{
public:
	string statement;  //���
	int code;   //������
	static void ReadFile();  //���ļ�
};


class Processes
{
	string pname;  //������
	string ptype;   //�������ͣ�Ĭ��integer
	int plev;    //���̲��
	int fadr;    //��һ�������ڱ��������е�λ��
	int ladr;   //���һ�������ڱ��������е�λ��
public:
	Processes(string, int, string,int,int);
	static void WriteFile();    //д�ļ�
	bool IfInTheTable();   //�����Ƿ��Ѿ��ڱ�����
};


class Variables
{
	string vname;  //������
	string vproc;  //��������
	bool vkind;  //����
	string vtype; //��������
	int vlev;//�������
	int vadr;//����λ��
public:
	Variables(string, string, bool, int, int,string);//��ʼ����
	bool IfNotDefined();  //�ж��Ƿ��Ѷ���
	bool IfParameter();    //�ж��Ƿ��ǲ���
	static void WriteFile();   //д�ļ�
	friend void Processes::WriteFile();
};


class Error
{
	string ErrorType;   //���������
	int ErrorLine;     //������������
	string ErrorDisCription;  //��������//
public:
	Error(int, string,string);   
	static void WriteFile();   //д�ļ�
};


void Advance();


void  Program();   //����
void  SubProgram();  //�ֳ���
void  StatementList(); //˵������
void  StatementListA(); //˵������'
void  ExecutionStatementList();  //ִ������
void  ExecutionStatementListA();  //ִ������'
void  ExplanatoryStatement();  //˵�����
void  VariableDescription();   //����˵��
void  FunctionDescription();  //����˵��
void  Variable();  //����
void  Identifier(); //��ʶ��
//void  IdentifierA(); //��ʶ��'
//void  Letter(); //��ĸ
//void  Number(); //����
void  Parameter(); //����
void  FunctionBody(); //������
void  ExecuteStatement();//ִ�����
void  ReadSentence(); //�����
void  WriteSentence(); //д���
void  AssignmentStatement(); //��ֵ���
void  ConditionalStatement(); //�������
void  ArithmeticExpression(); //��������ʽ
void  ArithmeticExpressionA(); //��������ʽ'
void  Item();//��
void  ItemA();//��'
void  Factor();//����
void  Constant();//����
void  FunctionCall();//��������
//void  UnsignedInteger(); //�޷�������
//void  UnsignedIntegerA(); //�޷�������'
void  ConditionalExpression(); //��������ʽ
void  RelationalOperator();  //��ϵ�����

