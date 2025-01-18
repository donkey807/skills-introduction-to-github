//#include <fstream>
//#include <iostream>
//#include<string>
//int main() 	
//{
//		std::string filename = "your_data_file";
//		std::fstream file(filename, std::ios::in); // 打开文件
//		// 检查文件是否成功打开
//		if (!file.is_open()) 
//		{
//			std::cerr << "Failed to open the file: " << filename << std::endl;
//			return 1;
//		}
//		std::string line;
//		// 逐行读取文件内容
//		while (std::getline(file, line)) 
//		{
//			/* 获取到一行内容，做你的其他处理 */
//		}
//		// 关闭文件
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
	std::ifstream file("C:\\Users\\刘庆凯\\Desktop\\两江第14周训练题目（提交时间143周周末前）.docx");
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
