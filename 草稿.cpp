//#include <fstream>
//#include <iostream>
//#include<string>
//int main() 	
//{
//		std::string filename = "your_data_file";
//		std::fstream file(filename, std::ios::in); // ���ļ�
//		// ����ļ��Ƿ�ɹ���
//		if (!file.is_open()) 
//		{
//			std::cerr << "Failed to open the file: " << filename << std::endl;
//			return 1;
//		}
//		std::string line;
//		// ���ж�ȡ�ļ�����
//		while (std::getline(file, line)) 
//		{
//			/* ��ȡ��һ�����ݣ�������������� */
//		}
//		// �ر��ļ�
//		file.close();
//		return 0;
//	
//
//}

#include <fstream>
#include <iostream>
#include<string>
int main()
{
	std::ifstream file("C:\\Users\\���쿭\\Desktop\\������14��ѵ����Ŀ���ύʱ��143����ĩǰ��.docx");
    std::string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    }
    else {
        std::cerr << "Unable to open file" << std::endl;
    }
    return 0;


}
