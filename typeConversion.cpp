#include <iostream>
using namespace std;


class Demo2 {
public:
   int l1,l2;

   void setData(int l1, int l2) {
      this ->l1 = l1;
      this ->l2 = l2;
   }
};

class Demo1 {
public:
	int n1,n2;

	Demo1(){
	}

	Demo1(Demo2 demo) {
		n1 = demo.l1;
		n2 = demo.l2;
	}
	void displayDemo1() {
	 	cout << "\n N1 = " << n1;
      cout << "\n N2 = " << n2;
   }
};

int main(){
	Demo1 demo1;
	Demo2 demo2;
	demo2.setData(10,20);
	demo1 = demo2;
	demo1.displayDemo1();
}
