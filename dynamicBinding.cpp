#include <iostream>
using namespace std;

class Demo1 {
public:

	virtual void test() {
		cout << "I am in Demo1 class";
	}

};

class Demo2 : public Demo1 {
public:

	void test() {
	 cout << "I am in Demo2 class";
	}
};

int main(){
	Demo1 *demo1 = new Demo2();
	demo1->test();
}

