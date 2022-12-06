#include <bits/stdc++.h>
using namespace std;

void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int findGCD(int num1, int num2)
{

    if (num2 == 0)
        return num1;
	cout<<setprecision(10)<<num1/num2<<"\t"<<setprecision(10)<<num1<<"\t"<<setprecision(10)<<num2<<"\t"<<setprecision(10)<<num1%num2<<endl;
    return findGCD(num2, num1%num2);
}

int main()
{
    file();

    int num1, num2;
    cin >> num1 >> num2;
	
    int gcd = findGCD(num1, num2);
    cout << "GCD is " << gcd << endl;

    return 0;
}