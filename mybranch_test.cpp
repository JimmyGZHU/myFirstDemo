#include <iostream>
using namespace std;

namespace{
    class A{
    public:
        void fun(){
            return;
        }
    };
}

int main(){
    A a;
    a.fun();
    return 0;
}