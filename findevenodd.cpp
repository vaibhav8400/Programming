#include<bits/stdc++.h>
using namespace std;

class EvenOdd{
    public:
    int n;

    EvenOdd(int n){
        this->n=n;
    }

    void EvenOrOdd(){
        if(n%2==0){
            cout<<"Input is Even."<<endl;
        } else{
            cout<<"Input is Odd."<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    EvenOdd obj(n);
    obj.EvenOrOdd();
    return 0;
}