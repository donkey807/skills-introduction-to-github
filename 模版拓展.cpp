//
//#include <iostream>
//using std::cout;
//
//// 递归打印函数的声明
//template <typename T, typename... Args>
//void a(T first, Args... rest) {
//    std::cout << first << " "; // 打印第一个参数
//    a(rest...); // 递归调用，处理剩余参数
//}
//
//// 基本情况：没有参数时
//void a() {
//    std::cout << "No more arguments." << std::endl;
//}
//
//int main() {
//    a(1); // 示例调用，可以打印不同类型的参数
//    return 0;
//}
//#include<iostream>
//namespace MyNamespace {
//    // 定义 printtt 函数
//    template <typename T, typename... Args>
//    void printtt(T first, Args... rest) {
//        std::cout << first << " ";
//        printtt(rest...);
//    }
//
//    void printtt() {
//        std::cout << "No more arguments." << std::endl;
//    }
//}
//
//int main() {
//    MyNamespace::printtt(1, 2.5, "Hello", 'a'); // 使用命名空间调用
//    return 0;
//}
//#include <iostream>
//using std::cout;
//
//template <typename T>
//void printtt(T arg) {
//    std::cout << arg << std::endl;
//}
//
//int main() {
//    printtt(1); // 测试单个参数
//    return 0;
//}