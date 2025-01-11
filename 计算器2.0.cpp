//相比于1.0,2.0用了map和function封装执行函数，减少了else if的使用，更利于后期优化，看起来更简洁
#include<iostream>
#include<cmath>
#include<map>
#include<string>
#include<functional>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;//string符号和function的对应
using std::function;//封装函数
float num() 
{
    float a;
    cin >> a;
    return a;
}
string s() 
{   
    string s;
    cin >> s;
    return s;
}
int main() {
    //定义部分
    
    float sum1 = num();
    string symbol;
    float sum2;
    map<string, function<float(float, float)>> operations1;
    map<string, function<float(float)>> operations2;
    operations1["+"] = [](float a, float b) { return a + b; };
    operations1["-"] = [](float a, float b) { return a - b; };
    operations1["*"] = [](float a, float b) { return a * b; };
    operations1["/"] = [](float a, float b)
        {
            if (b == 0)
            {
                cout << "值错误";
            }
            else
            {
                return a / b;
            }
        };//b不能为0
    operations1["pow"] = [](float a, float b) { return pow(a, b); };
    operations1["log"] = [](float a, float b)
        {
            if (a <= 0 || b <= 0)
            {
                cout << "值错误";
            }
            else
            {
                return log(a) / log(b);
            }
        };//ab不能为负
    operations2["sin"] = [](float a) { return sin(a); };
    operations2["cos"] = [](float a) { return cos(a); };
    operations2["tan"] = [](float a) { return tan(a); };
    operations2["sec"] = [](float a) {return 1 / cos(a); };
    operations2["csc"] = [](float a) { return 1 / sin(a); };
    operations2["cot"] = [](float a) { return 1 / tan(a); };
    operations2["fabs"] = [](float a) { return fabs(a); };
    operations2["exp"] = [](float a) { return exp(a); };
    operations2["factorial"] = [](float a)//a不为负数
        {
            int b = 1;
            for (int i = 1; i <= a; i++)
            {
                b = b * i;

            }
            return b;
        };
    
    
    for (int i = 0; i < 100; i++)//可以进行100次运算
    { 
        string symbol = s();
        //判断调用封装的operations1还是operations2
        if (symbol == "cos" || symbol == "sin" || symbol == "tan" ||
            symbol == "sec" || symbol == "cot" || symbol == "csc" ||
            symbol == "fabs" || symbol == "exp" || symbol == "!")
        {

            if (operations2.find(symbol) != operations2.end())
            {
                cout << operations2[symbol](sum1);
                sum1= operations2[symbol](sum1);
            }
            else
            {
                cout << "未能找到对应的运算符号";
                break;
            }

            //调用1
        }
        else
        {
            //调用2

            sum2 = num();
            if (operations1.find(symbol) != operations1.end())
            {
                cout << operations1[symbol](sum1, sum2);
                sum1= operations1[symbol](sum1, sum2);
            }
            else
            {
                cout << "未能找到对应的运算符号";
                break;
            }

            //调用1
        }




    }
}
// std::setprecision(n)限定后几位小数
//优化阶乘
//扩展运算