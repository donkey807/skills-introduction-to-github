////在继承中析构函数和构造函数的调用顺序
//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//class person {
//public:
//	person()
//	{
//		cout << "父类的构造函数调用"<<endl;
//
//	}
//	~person()
//	{
//		cout << "父类的析构函数调用"<<endl;
//
//	}
//};
//class son : public person {
//public:
//	son()
//	{
//		cout << "子类的构造函数"<<endl;
//	}
//	~son()
//	{
//		cout << "子类的析构函数"<<endl;
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
////子父类有同名的成员名称，直接访问会打印子类的(成员函数也是这样)，所以要考虑作用域
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
//	cout << b.Person::m_A<<endl;//父类里m_A的值
//	cout << b.Son::m_A << endl;//子类里m_A的值
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
//		cout << "父类的构造函数调用"<<endl;
//
//	}
//	~person()
//	{
//		cout << "父类的析构函数调用"<<endl;
//
//	}
//};
//class son : public person {
//public:
//	son()
//	{
//		cout << "子类的构造函数"<<endl;
//	}
//	void func()
//	{
//		cout << "子类的成员函数调用";
//
//	}
//	~son()
//	{
//		cout << "子类的析构函数"<<endl;
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
//}//注意，函数利用参数不同，也不行，因为实际子类还是继承了父类该函数（只是因为同名，都被隐藏了），所以访问不到 ；              

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



////虚继承解决菱形继承（继承的是指针）,实际生活只需一份变量，菱形继承导致成员浪费
////两个子类共享一份基类的数据
//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//class animal {//虚基类
//public:
//	int m_age;
//};
//class sheep :virtual public animal{};//虚继承
//class tuo :virtual public animal {};//虚继承
//class sheeptuo :public sheep,public tuo{};
//void test()
//{
//	class sheeptuo st;
//	st.sheep::m_age = 1;
//	st.tuo::m_age = 2;
//	cout << st.sheep::m_age << endl;
//	cout << st.tuo::m_age << endl;
//	cout << st.m_age;//用了虚继承，不会出现不明确的情况
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