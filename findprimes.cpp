
#include<bits/stdc++.h>
using namespace std;

class PrimeNumbers{
    public:
    int n;

    PrimeNumbers(int n){
        this->n=n;
    }

    bool isPrime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3;i<=sqrt(n);i+=2){
            if(n%i==0) return false;
        }
        return true;
    }

    void findPrimes(){
        int c=0;
        cout<<"Prime Numbers upto "<<n<<" are : ";
        for(int i=2;i<=n;i++){
            if(isPrime(i)){
                cout<<i<<" ";
                c++;
            }
        }
        cout<<endl;
        cout<<"Total : "<<c<<endl;
    }

    void findfirstNPrime(){
        int c=0;
        int num =2;
        cout<<"First "<<n<<" prime numbers: ";
        while(c<n){
            if(isPrime(num)){
                cout<<num<<" ";
                c++;
            }
            num++;
        }
        cout<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    PrimeNumbers obj(n);
    obj.findPrimes();
    obj.findfirstNPrime();
}