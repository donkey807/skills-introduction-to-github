////�ڼ̳������������͹��캯���ĵ���˳��
//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//class person {
//public:
//	person()
//	{
//		cout << "����Ĺ��캯������"<<endl;
//
//	}
//	~person()
//	{
//		cout << "�����������������"<<endl;
//
//	}
//};
//class son : public person {
//public:
//	son()
//	{
//		cout << "����Ĺ��캯��"<<endl;
//	}
//	~son()
//	{
//		cout << "�������������"<<endl;
//	}
//};
//void test()
//{
//	son aaa;
//}
//int main()
//{
//	test();
//
//}
////�Ӹ�����ͬ���ĳ�Ա���ƣ�ֱ�ӷ��ʻ��ӡ�����(��Ա����Ҳ������)������Ҫ����������
//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//class Person {
//public:
//	Person()
//	{
//		m_A = 100;
//	}
//	int m_A;
//};
//class Son :public Person {
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	int m_A;
//};
//void test01()
//{
//	 Son b;
//	cout << b.Person::m_A<<endl;//������m_A��ֵ
//	cout << b.Son::m_A << endl;//������m_A��ֵ
//
//
//}
//int main()
//{
//	test01();
//
//}
//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//class person {
//public:
//	person()
//	{
//		cout << "����Ĺ��캯������"<<endl;
//
//	}
//	~person()
//	{
//		cout << "�����������������"<<endl;
//
//	}
//};
//class son : public person {
//public:
//	son()
//	{
//		cout << "����Ĺ��캯��"<<endl;
//	}
//	void func()
//	{
//		cout << "����ĳ�Ա��������";
//
//	}
//	~son()
//	{
//		cout << "�������������"<<endl;
//	}
//};
//void test()
//{
//	son aaa;
//	aaa.func();
//}
//int main()
//{
//	test();
//
//}//ע�⣬�������ò�����ͬ��Ҳ���У���Ϊʵ�����໹�Ǽ̳��˸���ú�����ֻ����Ϊͬ�������������ˣ������Է��ʲ��� ��              

//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//class Person2
//{
//public:
//	static int m_A;
//};
//int Person2::m_A = 1;
//class Son2 :public Person2 
//{
//public:
//
//	static int m_A;
//};
//int Son2::m_A = 2;
//void test3()
//{
//	Son2 c;
//	cout << c.Person2::m_A<<endl;//1
//	cout << Son2::Person2::m_A << endl;//1
//	cout << c.Son2::m_A << endl;//2
//}  
//int main()
//{
//	test3();
//}



////��̳н�����μ̳У��̳е���ָ�룩,ʵ������ֻ��һ�ݱ��������μ̳е��³�Ա�˷�
////�������๲��һ�ݻ��������
//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//class animal {//�����
//public:
//	int m_age;
//};
//class sheep :virtual public animal{};//��̳�
//class tuo :virtual public animal {};//��̳�
//class sheeptuo :public sheep,public tuo{};
//void test()
//{
//	class sheeptuo st;
//	st.sheep::m_age = 1;
//	st.tuo::m_age = 2;
//	cout << st.sheep::m_age << endl;
//	cout << st.tuo::m_age << endl;
//	cout << st.m_age;//������̳У�������ֲ���ȷ�����
//	cout << st.sheeptuo::m_age<<endl;
//}
//int main()
//{
//	test();
//
//
//
//}

#include<iostream>
using std::cout;
using std::endl;
using std::cin;
class person {



};