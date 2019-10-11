#include <iostream>

using namespace std;

int fib (int n){
    int sum=0;
    int next=1;
    int prev=1;

    for (int i = 2; i<n; i++){

        sum = next+prev;
        prev=next;
        next=sum;

    }
    return sum;
}

int main() {

    int n;
    cin>>n;

    cout<<fib(n);

    return 0;
}