//
//#include <iostream>
//using std::cout;
//
//// �ݹ��ӡ����������
//template <typename T, typename... Args>
//void a(T first, Args... rest) {
//    std::cout << first << " "; // ��ӡ��һ������
//    a(rest...); // �ݹ���ã�����ʣ�����
//}
//
//// ���������û�в���ʱ
//void a() {
//    std::cout << "No more arguments." << std::endl;
//}
//
//int main() {
//    a(1); // ʾ�����ã����Դ�ӡ��ͬ���͵Ĳ���
//    return 0;
//}
//#include<iostream>
//namespace MyNamespace {
//    // ���� printtt ����
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
//    MyNamespace::printtt(1, 2.5, "Hello", 'a'); // ʹ�������ռ����
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
//    printtt(1); // ���Ե�������
//    return 0;
//}