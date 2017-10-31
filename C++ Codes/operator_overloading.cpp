#include <bits/stdc++.h>
using namespace std;
class complex_number{
private:
	int a,b;
public:
	void get_data(){
		cin>>a>>b;
	}
	void show_data(){
		cout<<a<<" "<<b<<endl;
	}
	complex_number operator+(complex_number c){  //binary operator +
		complex_number temp;
		temp.a=a+c.a;
		temp.b=b+c.b;
		return temp;
	}
	complex_number operator-(){  //unary operator -
		complex_number temp;
		temp.a=-a;
		temp.b=-b;
		return temp;
	}
	complex_number operator++(int){  //pre-increment ++
		complex_number temp;
		temp.a=++a;
		temp.b=++b;
		return temp;
	}
	complex_number operator--(int){  //pre-increment ++
		complex_number temp;
		temp.a=--a;
		temp.b=--b;
		return temp;
	}
	complex_number operator++(){  //post-increment ++
		complex_number temp;
		temp.a=a++;
		temp.b=b++;
		return temp;
	}
	complex_number operator--(){  //post-increment ++
		complex_number temp;
		temp.a=a++;
		temp.b=b++;
		return temp;
	}

};
int main(){
	complex_number c1,c2,c,c3,c4,c5;
	c1.get_data();
	c2.get_data();
	c=c1+c2;
	c3=-c;
	cout<<endl;
	c.show_data();
	cout<<endl;
	c3.show_data();
	c4=c++;
	c.show_data();
	c4.show_data();
	c5=++c;
	c.show_data();
	c5.show_data();
	return 0;
}
