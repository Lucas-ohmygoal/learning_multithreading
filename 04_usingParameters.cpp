//
// Created by Lucas Liu on 2022/9/11.
//
#include <iostream>
#include <thread>
using namespace std;

void hello(int num, const string str){
    cout << "hello concurrent world!" << endl;
    cout << num << " " << str;
}

int main(){
    thread t(hello, 10, "Hello");

    t.join();
    cout << "hello world!" << endl;
}

