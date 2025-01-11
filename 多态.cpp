//#include<iostream>
//using std::cout;
//using std::endl;
//using std::cin;
//
//// 基类 Shape
//class Shape {
//public:
//    // 纯虚函数，定义一个统一的接口
//    virtual void draw() = 0; // 纯虚函数
//};
//
//// 派生类 Circle
//class Circle : public Shape {
//public:
//    void draw() override { // 重写 draw 方法
//        cout << "Drawing Circle" << endl;
//    }
//};
//
//// 派生类 Rectangle
//class Rectangle : public Shape {
//public:
//    void draw() override { // 重写 draw 方法
//        cout << "Drawing Rectangle" << endl;
//    }
//};
//
//// 函数接受 Shape 类型的指针
//void renderShape(Shape* shape) {
//    shape->draw(); // 动态调用
//}
//
//int main() {
//    Circle circle;        // 创建 Circle 对象
//    Rectangle rectangle;  // 创建 Rectangle 对象
//
//    // 通过基类指针调用 draw 方法
//    renderShape(&circle);    // 输出: Drawing Circle
//    renderShape(&rectangle);  // 输出: Drawing Rectangle
//
//    return 0;
//}
//
////定义多个接口，根据给的指向“钥匙”而调用不同的虚函数