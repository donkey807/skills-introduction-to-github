//#include<iostream>
//#include<cmath>
//#include<map>
//#include<string>
//#include<functional>
//#include <vector>
//#include <algorithm>
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::map;//string���ź�function�� ��Ӧ
//using std::function;//��
//////class b;
//class a {
//	friend class b;
//public:
//private:
//	int a_age=10;
//};
//class b {
//public:
//	void func1();
//	void func(class a&a)
//	{
//		cout << "������a�ĳ�Ա" << a.a_age;
//
//	}
//	int b_age;
//};
//void b::func1()
//{
//
//
//}
//void test()
//{
//	class a aaa;
//	class b bbb;
//	bbb.func(aaa);
//
//}
//int main()
//{
//	test();
//
//
//
//}
//
//
//class Base {
//public:
//	void show() { cout << "Base class" << endl; }
//};
//
//class Derived : public Base {
//public:
//	void display() { cout << "Derived class" << endl; }
//};
//
//
//class Base {
//public:
//	virtual void show() { cout << "Base class" << endl; }
//};
//
//class Derived : public Base {
//public:
//	void show() override { cout << "Derived class" << endl; }
//};
//
//
//
//template <typename T>
//T add(T a, T b) {
//	return a + b;
//}
//
//
//int main() {
//	std::vector<int> vec = { 1, 2, 3, 4 };
//	std::sort(vec.begin(), vec.end());
//}
//
//
//try {
//	// ���ܻ��׳��쳣�Ĵ���
//}
//catch (const std::exception& e) {
//	// �����쳣
//	cout << "Exception caught: " << e.what() << endl;
//}
//
//
//class Complex {
//public:
//	float real;
//	float imag;
//
//	Complex operator+(const Complex& other) {
//		return Complex{ real + other.real, imag + other.imag };
//	}
//};
//
//
//#include <memory>
//
//std::unique_ptr<int> ptr = std::make_unique<int>(10);
////7. Lambda ���ʽ
////C++11 ������ Lambda ���ʽ��ʹ�ÿ��Զ���������������������Ҫ������Ϊ�����ĳ���ʹ�á�
//
//auto add = [](int a, int b) { return a + b; };
////8. �����Ƶ���Type Inference��
////C++11 ������ auto �ؼ��֣�������������ݳ�ʼ�����ʽ�Զ��Ƶ����������͡�
//
//auto x = 10; // x �� int ����
