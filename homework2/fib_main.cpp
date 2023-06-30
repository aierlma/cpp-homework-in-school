#include <iostream>
int main()
{
    using namespace std;
    int fib(int n);
    cout << "input n of fibnacci n should be greater than 2" << endl;
    int n=0;
    cin >> n;
    cout << "the n th term of fibnacci is " << fib(n) << endl;

}
int fib(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else 
        return fib(n - 1)+fib(n - 2);
}