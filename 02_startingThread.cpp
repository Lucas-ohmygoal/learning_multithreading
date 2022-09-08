//
// Created by Lucas Liu on 2022/9/7.
//

#include <iostream>
#include <thread>
using namespace std;

class background_task{
public:
    void operator ()() const{
        cout << "do something" << endl;
        cout << "do something else" << endl;
    }
};

//int main(){
//    background_task f;
//    thread my_thread(f);
//    my_thread.join();
//
//    //thread my_thread(background_task());  error this line declares a function, it does not start a thread
//
//    // thread my_thread((background_task())); correct
//    // thread my_thread{background_task()};   correct
//
//    // using Lambda functions
//    // thread my_thread([]{ do_something(); do_something_else(); });
//}