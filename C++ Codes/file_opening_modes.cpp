#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    ofstream fout;
    fout.open("Page.txt");
    for(int i=1;i<=1000;i++){
    	fout<<i<<" 3\\n";
    }
    fout.close();
    return 0;
}
