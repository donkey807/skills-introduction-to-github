#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#define MAX 1000
//联系人结构体
struct People
{
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_addr;
};
//通讯录结构体
struct Addresbooks
{
	struct People arr[1000];
	int m_size;
};
void ShowMenu()
{
	cout << "*********************\n";
	cout << "*****1添加联系人*****\n";
	cout << "*****2显示联系人*****\n";
	cout << "*****3删除联系人*****\n";
	cout << "*****4查找联系人*****\n";
	cout << "*****5修改联系人*****\n";
	cout << "*****6清空联系人*****\n";
	cout << "*****0退出通讯录*****\n";
	cout << "*********************\n";
}

void addPerson(Addresbooks* abs)//添加联系人函数
{
	if (abs->m_size == MAX)
	{
		cout << "通讯录已经满了";
		return;
	}
	else
	{
		string name;
		cout << "请输入姓名";
		cin >> name;
		abs->arr[abs->m_size].m_name = name;

		cout << "请输入性别";
		cout << "1--男";
		cout << "2--女";
		int sex = 0;
		while (true) //用while循环，如果不输入1或2，不跳出，直到输入正确
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->arr[abs->m_size].m_sex = sex;
				break;
			}
			cout << "请输入正确的性别";
		}

		int age = 0;
		cout << "请输入年龄";
		cin >> age;
		abs->arr[abs->m_size].m_age = age;

		string phone;
		cout << "请输入电话";
		cin >> phone;
		abs->arr[abs->m_size].m_phone = phone;

		string addres;
		cout << "请输入住址";
		cin >> addres;
		abs->arr[abs->m_size].m_addr = addres;

		cout << "添加成功";
		abs->m_size++;
		system("pause");
		system("cls");
	}
}
void showPerson(Addresbooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "你没有联系人";
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名为：" << abs->arr[i].m_name << "\t";
			cout << "性别为：" << (abs->arr[i].m_sex == 1 ? "男" : "女") << "\t";
			cout << "年龄为：" << abs->arr[i].m_age << "\t";
			cout << "电话为" << abs->arr[i].m_phone << "\t";
			cout << "住址为：" << abs->arr[i].m_addr << "\t";
			cout << "\n";
		}
	}
	system("pause");
	system("cls");

}

int searchPerson(Addresbooks* abs, string name)//name是我输入想查找的姓名
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->arr[i].m_name == name)//找到对应的身份信息
		{
			return i;//返回该姓名在数组中的位置序号

		}
		else//没找到
		{
			return -1;//没找到
		}
	}

}


void deletePerson(Addresbooks* abs)//通过数组数据整体前移覆盖删除的数据，同时m_size-1
{
	cout << "请输入你要删除的联系人名称";
	string name;
	cin >> name;
	int ret1 = searchPerson(abs, name);
	if (ret1 != -1)
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			abs->arr[i] = abs->arr[i + 1];//覆盖删除成员内容
			abs->m_size--;//更新通讯录成员数目

		}

		cout << "删除成功";

	}
	else
	{
		cout << "没有该联系人";
	}
}
void findPerson(Addresbooks* abs)
{
	cout << "请输入你要查找的联系人名称";
	string name;
	cin >> name;
	int ret2 = searchPerson(abs, name);//返回的是该成员在数组中的位置序号
	if (ret2 != -1)//有这个人
	{

		cout << "姓名为：" << abs->arr[ret2].m_name << "\t";
		cout << "性别为：" << (abs->arr[ret2].m_sex == 1 ? "男" : "女") << "\t";
		cout << "年龄为：" << abs->arr[ret2].m_age << "\t";
		cout << "电话为" << abs->arr[ret2].m_phone << "\t";
		cout << "住址为：" << abs->arr[ret2].m_addr << "\t";
		cout << "\n";
	}
	else
	{
		cout << "查无此人";
	}
}

void modifyPerson(Addresbooks* abs)
{
	cout << "请输入你要修改的联系人名称";
	string name;
	cin >> name;
	int ret2 = searchPerson(abs, name);
	if (ret2 != -1)
	{
		string name;
		cout << "请输入姓名";
		cin >> name;
		abs->arr[ret2].m_name = name;

		cout << "请输入性别";
		cout << "1--男";
		cout << "2--女";
		int sex = 0;
		while (true) //用while循环，如果不输入1或2，不跳出，直到输入正确
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->arr[ret2].m_sex = sex;
				break;
			}
			cout << "请输入正确的性别";
		}

		int age = 0;
		cout << "请输入年龄";
		cin >> age;
		abs->arr[ret2].m_age = age;

		string phone;
		cout << "请输入电话";
		cin >> phone;
		abs->arr[ret2].m_phone = phone;

		string addres;
		cout << "请输入住址";
		cin >> addres;
		abs->arr[ret2].m_addr = addres;

		cout << "修改成功";

		system("pause");
		system("cls");
	}

}
void cleanPerson(Addresbooks* abs)
{
	abs->m_size = 0;
	cout << "通讯录已清空";
	system("pause");
	system("cls");
}
int main()
{
	struct Addresbooks abs;//对通讯录命名为abs
	abs.m_size = 0;//初始化通讯录，即通讯录内为0人
	int select;
	while (true)
	{
		ShowMenu();

		cin >> select;
		switch (select)
		{
		case 1://1添加联系人
			addPerson(&abs);
			break;
		case 2://2显示联系人
			showPerson(&abs);
			break;
		case 3://3删除联系人   按照姓名来操作
			deletePerson(&abs);
			break;
		case 4://4查找联系人
			findPerson(&abs);
			break;
		case 5://5修改联系人
			modifyPerson(&abs);
			break;
		case 6://6清空联系人
			cleanPerson(&abs);
			break;
		case 0://0退出通讯录
			cout << "欢迎下次使用";
			system("pause");
			return 0;

		default:
			break;
		}
	}
	return 0;
}