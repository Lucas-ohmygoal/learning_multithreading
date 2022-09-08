//
// Created by Lucas Liu on 2022/9/7.
//
#include <iostream>
#include <thread>
using namespace std;

void hello(){
    cout << "hello concurrent world!" << endl;
}

//int main(){
//    thread t(hello);
//
//    t.join();
//    cout << "hello world!" << endl;
//}
