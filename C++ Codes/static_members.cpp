#include <bits/stdc++.h>
using namespace std;
class account{
	int balance;  //Insatnce Member Variable
	static double roi;  //Static(Class) Member Variable
public:
	void set_balance(int b){
		balance = b;
	}
	static void set_roi(double r){  //Static Member Function
		roi=r;
	}
	void show_roi(){  //Instance Member Function
		cout<<roi<<endl;
	}
    void show_balance(){  //Instance Member Function
		cout<<balance<<endl;
	}
};
double account :: roi=4.5; //must be declared outside the class
int main(){
	account sujeet,manit;
	sujeet.set_balance(1000000);
	account :: set_roi(9.67);	//Static Member Function can be called without an object
	sujeet.show_balance();
	sujeet.show_roi();
	manit.show_roi();
	return 0;
}