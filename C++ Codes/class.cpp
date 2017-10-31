#include <bits/stdc++.h>
using namespace std;
class Box{
private:
    long long int l,b,h;
public:

    //Making Constructors...
    Box(){                      //default constructor...
        l=0;b=0;h=0;
    }
    Box(int l,int b=1,int h=1){     //parameterised constructor...
        this->l=l;
        this->b=b;
        this->h=h;
    }
    Box(Box &B){                //copy constructor...
        l=2*B.l;
        b=2*B.b;
        h=2*B.h;
    }

    //Operator Overloading...
    friend istream& operator>>(istream &input,Box &B){      //operator>> 
        input>>B.l>>B.b>>B.h;
        return input;
    }
    friend ostream& operator<<(ostream &output,Box &B){     //operator<<
        output<<B.l<<" "<<B.b<<" "<<B.h;
        return output;
    }

    Box operator+(Box &B){              //operator +
        Box temp;
        temp.l=l+B.l;
        temp.b=b+B.b;
        temp.h=h+B.h;
        return temp;
    }

    Box operator-(Box &B){              //operator -
        Box temp;
        temp.l=l-B.l;
        temp.b=b-B.b;
        temp.h=h-B.h;
        return temp;
    }
    ~Box(){                            //destructor ...
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    Box B1,B2(2,4,5);
    cin>>B1;
    Box B3(B1);
    Box B4(6),B5(12,5);
    cout<<B1<<endl;
    cout<<B2<<endl;
    
    Box B6,B7,B8;

    B6=B1+B2;
    cout<<B6<<endl;

    B7=B1-B2;
    cout<<B7<<endl;
    return 0;
} 
