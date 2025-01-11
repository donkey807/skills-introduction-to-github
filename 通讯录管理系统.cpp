#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#define MAX 1000
//��ϵ�˽ṹ��
struct People
{
	string m_name;
	int m_sex;
	int m_age;
	string m_phone;
	string m_addr;
};
//ͨѶ¼�ṹ��
struct Addresbooks
{
	struct People arr[1000];
	int m_size;
};
void ShowMenu()
{
	cout << "*********************\n";
	cout << "*****1�����ϵ��*****\n";
	cout << "*****2��ʾ��ϵ��*****\n";
	cout << "*****3ɾ����ϵ��*****\n";
	cout << "*****4������ϵ��*****\n";
	cout << "*****5�޸���ϵ��*****\n";
	cout << "*****6�����ϵ��*****\n";
	cout << "*****0�˳�ͨѶ¼*****\n";
	cout << "*********************\n";
}

void addPerson(Addresbooks* abs)//�����ϵ�˺���
{
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼�Ѿ�����";
		return;
	}
	else
	{
		string name;
		cout << "����������";
		cin >> name;
		abs->arr[abs->m_size].m_name = name;

		cout << "�������Ա�";
		cout << "1--��";
		cout << "2--Ů";
		int sex = 0;
		while (true) //��whileѭ�������������1��2����������ֱ��������ȷ
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->arr[abs->m_size].m_sex = sex;
				break;
			}
			cout << "��������ȷ���Ա�";
		}

		int age = 0;
		cout << "����������";
		cin >> age;
		abs->arr[abs->m_size].m_age = age;

		string phone;
		cout << "������绰";
		cin >> phone;
		abs->arr[abs->m_size].m_phone = phone;

		string addres;
		cout << "������סַ";
		cin >> addres;
		abs->arr[abs->m_size].m_addr = addres;

		cout << "��ӳɹ�";
		abs->m_size++;
		system("pause");
		system("cls");
	}
}
void showPerson(Addresbooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "��û����ϵ��";
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "����Ϊ��" << abs->arr[i].m_name << "\t";
			cout << "�Ա�Ϊ��" << (abs->arr[i].m_sex == 1 ? "��" : "Ů") << "\t";
			cout << "����Ϊ��" << abs->arr[i].m_age << "\t";
			cout << "�绰Ϊ" << abs->arr[i].m_phone << "\t";
			cout << "סַΪ��" << abs->arr[i].m_addr << "\t";
			cout << "\n";
		}
	}
	system("pause");
	system("cls");

}

int searchPerson(Addresbooks* abs, string name)//name������������ҵ�����
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->arr[i].m_name == name)//�ҵ���Ӧ�������Ϣ
		{
			return i;//���ظ������������е�λ�����

		}
		else//û�ҵ�
		{
			return -1;//û�ҵ�
		}
	}

}


void deletePerson(Addresbooks* abs)//ͨ��������������ǰ�Ƹ���ɾ�������ݣ�ͬʱm_size-1
{
	cout << "��������Ҫɾ������ϵ������";
	string name;
	cin >> name;
	int ret1 = searchPerson(abs, name);
	if (ret1 != -1)
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			abs->arr[i] = abs->arr[i + 1];//����ɾ����Ա����
			abs->m_size--;//����ͨѶ¼��Ա��Ŀ

		}

		cout << "ɾ���ɹ�";

	}
	else
	{
		cout << "û�и���ϵ��";
	}
}
void findPerson(Addresbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ������";
	string name;
	cin >> name;
	int ret2 = searchPerson(abs, name);//���ص��Ǹó�Ա�������е�λ�����
	if (ret2 != -1)//�������
	{

		cout << "����Ϊ��" << abs->arr[ret2].m_name << "\t";
		cout << "�Ա�Ϊ��" << (abs->arr[ret2].m_sex == 1 ? "��" : "Ů") << "\t";
		cout << "����Ϊ��" << abs->arr[ret2].m_age << "\t";
		cout << "�绰Ϊ" << abs->arr[ret2].m_phone << "\t";
		cout << "סַΪ��" << abs->arr[ret2].m_addr << "\t";
		cout << "\n";
	}
	else
	{
		cout << "���޴���";
	}
}

void modifyPerson(Addresbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ������";
	string name;
	cin >> name;
	int ret2 = searchPerson(abs, name);
	if (ret2 != -1)
	{
		string name;
		cout << "����������";
		cin >> name;
		abs->arr[ret2].m_name = name;

		cout << "�������Ա�";
		cout << "1--��";
		cout << "2--Ů";
		int sex = 0;
		while (true) //��whileѭ�������������1��2����������ֱ��������ȷ
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->arr[ret2].m_sex = sex;
				break;
			}
			cout << "��������ȷ���Ա�";
		}

		int age = 0;
		cout << "����������";
		cin >> age;
		abs->arr[ret2].m_age = age;

		string phone;
		cout << "������绰";
		cin >> phone;
		abs->arr[ret2].m_phone = phone;

		string addres;
		cout << "������סַ";
		cin >> addres;
		abs->arr[ret2].m_addr = addres;

		cout << "�޸ĳɹ�";

		system("pause");
		system("cls");
	}

}
void cleanPerson(Addresbooks* abs)
{
	abs->m_size = 0;
	cout << "ͨѶ¼�����";
	system("pause");
	system("cls");
}
int main()
{
	struct Addresbooks abs;//��ͨѶ¼����Ϊabs
	abs.m_size = 0;//��ʼ��ͨѶ¼����ͨѶ¼��Ϊ0��
	int select;
	while (true)
	{
		ShowMenu();

		cin >> select;
		switch (select)
		{
		case 1://1�����ϵ��
			addPerson(&abs);
			break;
		case 2://2��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3ɾ����ϵ��   ��������������
			deletePerson(&abs);
			break;
		case 4://4������ϵ��
			findPerson(&abs);
			break;
		case 5://5�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://6�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://0�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��";
			system("pause");
			return 0;

		default:
			break;
		}
	}
	return 0;
}