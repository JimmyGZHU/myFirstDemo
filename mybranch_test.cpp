#include <iostream>
using namespace std;

namespace{
    class A{
    public:
        void fun(){
            return;
            cout << "我在herbranch分支修改mybranch_test.cpp !!!";
            cout << "我在mybranch分支修改mybranch_test.cpp !!!";
        }
    };
}

int main(){
    A a;
    a.fun();
    return 0;
}