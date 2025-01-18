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
//using std::map;//string符号和function的 对应
//using std::function;//封
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
//		cout << "这是类a的成员" << a.a_age;
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
//	// 可能会抛出异常的代码
//}
//catch (const std::exception& e) {
//	// 处理异常
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
////7. Lambda 表达式
////C++11 引入了 Lambda 表达式，使得可以定义匿名函数，方便在需要函数作为参数的场合使用。
//
//auto add = [](int a, int b) { return a + b; };
////8. 类型推导（Type Inference）
////C++11 引入了 auto 关键字，允许编译器根据初始化表达式自动推导变量的类型。
//
//auto x = 10; // x 是 int 类型
