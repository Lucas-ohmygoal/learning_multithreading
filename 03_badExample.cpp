//
// Created by Lucas Liu on 2022/9/8.
//

#include <iostream>
#include <thread>
using namespace std;

struct func{
    int& i;
    func(int& i_):i(i_){}
    void operator ()(){
        for (unsigned j=0; j<100000; j++){
            cout << i << endl;
        }
    }
};

//int main(){
//    int a = 0;
//    func my_func(a);
//    thread my_thread(my_func);
//    my_thread.detach();
//}