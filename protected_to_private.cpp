#include<iostream>
using namespace std;
class Base {
 protected: int x;
 public:
  void setdata_Base(int a) {
	x = a;
	}
  void printdata_Base() {
	cout<<"x = "<<x<<endl; 
	}
};
class Derived:private Base  {
public: int m;
	void setdata_Derived(int a,int b) {	
		x = a; 
		m = b; 
	}
	void printdata_Derived() {
  cout<<"x = "<<x<<endl;   
	cout<<"m = "<<m<<endl; 
	}
};
main()
{

Base b;
cout << "base - " <<sizeof(b) <<endl;
cout << "x  - " << b.x  <<endl; //invalid,protected data
b.setdata_Base(10);
b.printdata_Base();
Derived d;
cout << "Derived - " <<sizeof(d) <<endl;
//cout << "x  - " << d.x  <<endl; //invalid ,private data
cout << "m  - " << d.m  <<endl;
//d.setdata_Base(10);  //invalid ,private data
//d.printdata_Base(); //invalid,private data
d.setdata_Derived(10,20);
d.printdata_Derived();

}








