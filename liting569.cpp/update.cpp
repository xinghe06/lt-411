/*
����һ��ѧ����Student��ѧ����Ϣ����ѧ��(id)������(name)���Ա�(gender)������(score)��
(1)?������Student�Ĵ��ι��캯�������ƹ��캯����
(2)?����һ����ʾѧ��ȫ����Ϣ�ĳ�Ա������
(3)?���������򣬴Ӽ�������5��ѧ������Ϣ�����շ��������������ÿ��ѧ������Ϣ��
(4)?������������ʾ�����Ա�Ϊ���Ե�ѧ����Ϣ��
(5) ͳ��ȫ��ͬѧ��ƽ���ɼ�����������������ʾ�����
*/
//������������ȫƴ��+ѧ�ź���λ��������Դ�����ļ����磺zhengshuo821.cpp


//��������
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
	//��Ϊ
	//��ʾȫ����Ϣ
	//���캯��
public:
	Student(){}//Ĭ�Ϲ��캯��
	Student(string s_id, string s_name, string s_gender, int s_score);//���ι��캯��
	Student(Student& s);//���ƹ��캯��
	void setMessage(string ID, string Name, string Gender, int Score);//����������Ϣ
	void showmessage();//��ʾ������Ϣ
	int getScore() { return score; }//��ȡ����
	string getGender() { return gender; }//��ȡ�Ա�
	//����
	//ѧ�� ����  �Ա� ����
private:
	string id;
	string name;
	string gender;
	int score;
};
//���ι��캯����ʵ��
Student::Student(string s_id, string s_name, string s_gender, int s_score)
{
	id = s_id;
	name = s_name;
	gender = s_gender;
	score = s_score;
}
//���ƹ��캯����ʵ��
Student::Student(Student& s)
{
	id = s.id;
	name = s.name;
	gender = s.gender;
	score = s.score;
}
//��Ա������ʵ��
void Student::setMessage(string ID, string Name, string Gender, int Score)
{
	id = ID;
	name = Name;
	gender = Gender;
	score = Score;
}
void Student::showmessage()
{
	cout << "ѧ�� ��" << id << endl;
	cout << "������" << name << endl;
	cout << "�Ա�" << gender << endl;
	cout << "������" << score << endl;
}
int main()
{
	int i, j;
	string ID;
	string Name;
	string Gender;
	int Score;
	Student stu[5];
	//����ѧ����Ϣ
	for (i = 0; i < 5; i++)
	{
		cin >> ID >> Name >> Gender >> Score;
		stu[i].setMessage(ID, Name, Gender, Score);
	}


	//���շ����Ӹߵ������
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
	cout << "���ɼ��Ӹߵ��ͣ�" << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (score[i] == stu[j].getScore())
				stu[j].showmessage();
		}
	}


	//���������������Ϣ
	cout << "������������ϢΪ��" << endl;
	for (i = 0; i < 5; i++)
	{
		if (stu[i].getGender() == "male")
			stu[i].showmessage();
	}


	//���ƽ���ɼ�
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += stu[i].getScore();
	}
	double average = sum / 5;
	cout << "ƽ���ɼ�Ϊ�� " << average << endl;
	*/
}
//��������
//001 Linda female 98
//002 Jhon male 89
//003 Lily female 90
//004 Jack male 97
//005 Mike male 94