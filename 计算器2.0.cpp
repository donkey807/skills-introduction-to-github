//�����1.0,2.0����map��function��װִ�к�����������else if��ʹ�ã������ں����Ż��������������
#include<iostream>
#include<cmath>
#include<map>
#include<string>
#include<functional>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;//string���ź�function�Ķ�Ӧ
using std::function;//��װ����
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
    //���岿��
    
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
                cout << "ֵ����";
            }
            else
            {
                return a / b;
            }
        };//b����Ϊ0
    operations1["pow"] = [](float a, float b) { return pow(a, b); };
    operations1["log"] = [](float a, float b)
        {
            if (a <= 0 || b <= 0)
            {
                cout << "ֵ����";
            }
            else
            {
                return log(a) / log(b);
            }
        };//ab����Ϊ��
    operations2["sin"] = [](float a) { return sin(a); };
    operations2["cos"] = [](float a) { return cos(a); };
    operations2["tan"] = [](float a) { return tan(a); };
    operations2["sec"] = [](float a) {return 1 / cos(a); };
    operations2["csc"] = [](float a) { return 1 / sin(a); };
    operations2["cot"] = [](float a) { return 1 / tan(a); };
    operations2["fabs"] = [](float a) { return fabs(a); };
    operations2["exp"] = [](float a) { return exp(a); };
    operations2["factorial"] = [](float a)//a��Ϊ����
        {
            int b = 1;
            for (int i = 1; i <= a; i++)
            {
                b = b * i;

            }
            return b;
        };
    
    
    for (int i = 0; i < 100; i++)//���Խ���100������
    { 
        string symbol = s();
        //�жϵ��÷�װ��operations1����operations2
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
                cout << "δ���ҵ���Ӧ���������";
                break;
            }

            //����1
        }
        else
        {
            //����2

            sum2 = num();
            if (operations1.find(symbol) != operations1.end())
            {
                cout << operations1[symbol](sum1, sum2);
                sum1= operations1[symbol](sum1, sum2);
            }
            else
            {
                cout << "δ���ҵ���Ӧ���������";
                break;
            }

            //����1
        }




    }
}
// std::setprecision(n)�޶���λС��
//�Ż��׳�
//��չ����