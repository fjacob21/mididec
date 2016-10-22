#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
#include <cstdint>
#include <memory>
#include <chrono>
#include <thread>

using std::string;
using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::thread;
using std::chrono::milliseconds;
// using namespace std::chrono;


void f1(int n) {
    for (int i = 0; i < 5; ++i) {
        // std::cout << "Thread 1 executing\n";
        ++n;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

float toto(string bar) {
        string addon = bar + "addon";
        // cout << addon << endl;
        return 3.1416;
}

int main(int argc, char *argv[]) {
        int test = 21;
        int i = 0;
        // cout << "Test solution " << test << endl;
        test++;
        vector<shared_ptr<thread>> threads;
        for (int i=0; i < 10; i++)
                threads.push_back(make_shared<thread>(&f1, i));

        toto("Allo");

        for (i=0; i < 10; i++)
               threads[i]->join();

       return 0;
}
