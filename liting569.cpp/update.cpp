/*
建立一个学生类Student，学生信息包括学号(id)、姓名(name)、性别(gender)、分数(score)。
(1)?建立类Student的带参构造函数及复制构造函数；
(2)?建立一个显示学生全部信息的成员函数；
(3)?创建主程序，从键盘输入5个学生的信息，按照分数进行排序，输出每个学生的信息；
(4)?在主程序中显示所有性别为男性的学生信息；
(5) 统计全班同学的平均成绩，并在主程序中显示输出。
*/
//请用您的姓名全拼音+学号后三位命名您的源程序文件，如：zhengshuo821.cpp


//测试数据
//001 Linda female 98
//002 Jhon male 89
//003 Lily female 90
//004 Jack male 97
//005 Mike male 94
#include<iostream>
#include<string>
using namespace std;
class Student
{
	//行为
	//显示全部信息
	//构造函数
public:
	Student(){}//默认构造函数
	Student(string s_id, string s_name, string s_gender, int s_score);//带参构造函数
	Student(Student& s);//复制构造函数
	void setMessage(string ID, string Name, string Gender, int Score);//设置所有信息
	void showmessage();//显示所有信息
	int getScore() { return score; }//获取分数
	string getGender() { return gender; }//获取性别
	//属性
	//学号 姓名  性别 分数
private:
	string id;
	string name;
	string gender;
	int score;
};
//带参构造函数的实现
Student::Student(string s_id, string s_name, string s_gender, int s_score)
{
	id = s_id;
	name = s_name;
	gender = s_gender;
	score = s_score;
}
//复制构造函数的实现
Student::Student(Student& s)
{
	id = s.id;
	name = s.name;
	gender = s.gender;
	score = s.score;
}
//成员函数的实现
void Student::setMessage(string ID, string Name, string Gender, int Score)
{
	id = ID;
	name = Name;
	gender = Gender;
	score = Score;
}
void Student::showmessage()
{
	cout << "学号 ：" << id << endl;
	cout << "姓名：" << name << endl;
	cout << "性别：" << gender << endl;
	cout << "分数：" << score << endl;
}
int main()
{
	int i, j;
	string ID;
	string Name;
	string Gender;
	int Score;
	Student stu[5];
	//输入学生信息
	for (i = 0; i < 5; i++)
	{
		cin >> ID >> Name >> Gender >> Score;
		stu[i].setMessage(ID, Name, Gender, Score);
	}


	//按照分数从高到低输出
	int score[5] = { 0,1,2,3,4 };
	for (i = 0; i < 4; i++)
	{
		for (j = i+1; j < 5; j++)
		{
			if (stu[i].getScore()<stu[j].getScore())
			{
				int temp = score[i];
				score[i] = score[j];
				score[j] = temp;
			}
			for (i = 0; i < 5; i++)
				cout << score[i] << endl;
		}
	}
	/*
	cout << "按成绩从高到低：" << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (score[i] == stu[j].getScore())
				stu[j].showmessage();
		}
	}


	//输出所有男生的信息
	cout << "所有男生的信息为：" << endl;
	for (i = 0; i < 5; i++)
	{
		if (stu[i].getGender() == "male")
			stu[i].showmessage();
	}


	//输出平均成绩
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += stu[i].getScore();
	}
	double average = sum / 5;
	cout << "平均成绩为： " << average << endl;
	*/
}
//测试数据
//001 Linda female 98
//002 Jhon male 89
//003 Lily female 90
//004 Jack male 97
//005 Mike male 94