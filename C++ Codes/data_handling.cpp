#include <bits/stdc++.h>
using namespace std;
/*
1]Data Persistence
2]Streams-input stream and output stream
*/
int main(){
   	ios_base::sync_with_stdio(false);
   	//ofstream's object used for writing in a file
   	ofstream fout;	
   	fout.open("my_file.txt");
   	fout<<"Hello\nWorld\n";
   	fout<<"WeLoveYou";
   	fout.close();
   	//ifstream.s object used for reading from file
   	ifstream fin;
   	fin.open("my_file.txt");
   	char ch;
   	fin>>ch;	//also ch=fin.get()
   	while(!fin.eof()){
   		cout<<ch;
   		fin>>ch;	//also ch=fin.get()
   	}
   	fin.close();
   	
	return 0;
}