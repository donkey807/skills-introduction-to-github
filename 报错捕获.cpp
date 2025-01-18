//#include <iostream>
//#include <stdexcept>  // 引入标准异常类库
//
//// 定义一个函数，用于执行除法操作
//double divide(int numerator, int denominator)
//{
//    if (denominator == 0)
//    {
//        throw std::runtime_error("Division by zero is not allowed");  // 抛出异常
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
//        double result = divide(numerator, denominator);  // 调用divide函数
//        std::cout << "Result: " << result << std::endl;
//    }
//    catch (const std::exception& e)  // 捕获标准异常
//    {
//        std::cout << "Caught exception: " << e.what() << std::endl;
//    }
//    catch (...)  // 捕获所有其他类型的异常
//    {
//        std::cout << "Caught an unknown exception" << std::endl;
//    }
//
//    std::cout << "Program continues to run after exception handling" << std::endl;
//
//    return 0;
//}