//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//#include <iostream>
//
//// 模板函数
//template <typename T>
//T add(T a, T b) {
//    return a + b;
//}
//
//int main() {
//    // 整数类型
//    int intResult = add(5, 10); // T 被推导为 int
//    std::cout << "Int result: " << intResult << std::endl;
//
//    // 双精度浮点数类型
//    double doubleResult = add(5.5, 10.2); // T 被推导为 double
//    std::cout << "Double result: " << doubleResult << std::endl;
//
//    // 字符串类型
//    std::string strResult = add(std::string("Hello, "), std::string("World!")); // T 被推导为 std::string
//    std::cout << "String result: " << strResult << std::endl;
//
//    return 0;
//}
//
//
////T为占位符，由编译器自动识别变量的类型，而模版不只能用于计算，还可以用于算法，数据结构，函数对象
//// 和回调， 类型特征和类型萃取，变长参数模板--有点兴趣，功能很多，