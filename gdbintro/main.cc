#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <chrono>
#include <sstream>
#include <map>
#include <vector>
#include <cstdint>
#include <thread>
#include <memory>

using namespace std;
using namespace std::chrono;


void f1(int n)
{
    for (int i = 0; i < 5; ++i) {
        //std::cout << "Thread 1 executing\n";
        ++n;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}

float toto(string bar) {
	string addon = bar + "addon";
	//cout << addon << endl;
	return 3.1416;
}

int main(int argc, char *argv[]) {
	int test = 21;
	//cout << "Test solution " << test << endl;
	test++;
	vector<shared_ptr<thread>> threads;
	for (int i=0;i<10;i++){
		//thread t2(f1, i); // pass by value

		threads.push_back(make_shared<thread>(f1,i));
	}

	toto("Allo");

	for (int i=0;i<10;i++){
		threads[i]->join();
	}

	return 0;
}
