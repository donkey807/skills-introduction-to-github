//#include <iostream>
//#include <stdexcept>  // �����׼�쳣���
//
//// ����һ������������ִ�г�������
//double divide(int numerator, int denominator)
//{
//    if (denominator == 0)
//    {
//        throw std::runtime_error("Division by zero is not allowed");  // �׳��쳣
//    }
//    return static_cast<double>(numerator) / denominator;
//}
//
//int main()
//{
//    int numerator = 10;
//    int denominator = 0;
//
//    try
//    {
//        double result = divide(numerator, denominator);  // ����divide����
//        std::cout << "Result: " << result << std::endl;
//    }
//    catch (const std::exception& e)  // �����׼�쳣
//    {
//        std::cout << "Caught exception: " << e.what() << std::endl;
//    }
//    catch (...)  // ���������������͵��쳣
//    {
//        std::cout << "Caught an unknown exception" << std::endl;
//    }
//
//    std::cout << "Program continues to run after exception handling" << std::endl;
//
//    return 0;
//}