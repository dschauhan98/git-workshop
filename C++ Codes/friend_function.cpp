#include <bits/stdc++.h>
using namespace std;
class friend_function2;
class friend_function1{
private:
	int a,b,c,d;
public:
	void get_data(){
		cin>>a>>b>>c>>d;
	}
	void show_data(){
		cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
	}
	friend int add(friend_function1,friend_function2);
};
class friend_function2{
private:
	int a,b,c,d;
public:
	void get_data(){
		cin>>a>>b>>c>>d;
	}
	void show_data(){
		cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
	}
	friend int add(friend_function1,friend_function2);
};
int add(friend_function1 z,friend_function2 y){
	return z.a+z.b+z.c+z.d+y.a+y.b+y.c+y.d;
}
int main(){
	friend_function1 ff;
	friend_function2 gg;
	ff.get_data();
	ff.show_data();
	gg.get_data();
	gg.show_data();
	cout<<add(ff,gg)<<endl;
	return 0;
}