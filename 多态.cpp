//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//
//// ���� Shape
//class Shape {
//public:
//    // ���麯��������һ��ͳһ�Ľӿ�
//    virtual void draw() = 0; // ���麯��
//};
//
//// ������ Circle
//class Circle : public Shape {
//public:
//    void draw() override { // ��д draw ����
//        cout << "Drawing Circle" << endl;
//    }
//};
//
//// ������ Rectangle
//class Rectangle : public Shape {
//public:
//    void draw() override { // ��д draw ����
//        cout << "Drawing Rectangle" << endl;
//    }
//};
//
//// �������� Shape ���͵�ָ��
//void renderShape(Shape* shape) {
//    shape->draw(); // ��̬����
//}
//
//int main() {
//    Circle circle;        // ���� Circle ����
//    Rectangle rectangle;  // ���� Rectangle ����
//
//    // ͨ������ָ����� draw ����
//    renderShape(&circle);    // ���: Drawing Circle
//    renderShape(&rectangle);  // ���: Drawing Rectangle
//
//    return 0;
//}
//
////�������ӿڣ����ݸ���ָ��Կ�ס������ò�ͬ���麯��