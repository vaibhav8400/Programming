#include<bits/stdc++.h>
using namespace std;

class Armstrong{
    public:
    int n;

    Armstrong(int a){
        this->n=a;
    }

    bool isArmstrong(int n){
        int num = n; int c=0; int sum=0;
        while(n>0){
            n=n/10;
            c++;
        }
        n=num;
        while(n>0){
            int r=n%10;
            sum+=pow(r,c);
            n=n/10;
        }
        return num == sum;
    }
};

int main(){
    int n;
    cin>>n;
    Armstrong obj(n);
    if(obj.isArmstrong(n)){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
}
