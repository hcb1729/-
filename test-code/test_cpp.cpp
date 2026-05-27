#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// 类和对象测试
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}
    
    void showInfo() {
        cout << "姓名: " << name << ", 年龄: " << age << endl;
    }
};

int main() {
    cout << " C++ 环境正常运行！" << endl;
    
    // STL容器测试
    vector<int> nums = {5, 2, 8, 1, 9};
    sort(nums.begin(), nums.end());
    
    cout << "排序后的数组: ";
    for (int num : nums) {  // for循环
        cout << num << " ";
    }
    cout << endl;
    
    // 字符串测试
    string str1 = "Hello";
    string str2 = " C++";
    cout << "字符串拼接: " << str1 + str2 << endl;
    
    // 类测试
    Student stu("Arch", 20);
    stu.showInfo();
    
    return 0;
}