#include <iostream>
#include <thread>
using namespace std;

void mythread(){
    cout << "the other file: test2.cpp" << endl;
}
int main(){
    thread a(mythread);
    a.join();
    return 0;
}