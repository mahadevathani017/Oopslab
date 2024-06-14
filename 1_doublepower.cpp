#include<iostream>
using namespace std;

double power(double n,int p=2)
{
    
    double res=1;
    for(int i=1;i<=p;i++)
    {
        res=res*n;
    }
    return res;
}

int main()
{
    double n,result;
    int p;
    cout<<"Enter n and p value"<<endl;
    cin>>n>>p;
    result=power(n,p);
    cout<<n <<"Raised to the power"<< p<<"is"<<result<<endl;
    result=power(n);
    cout<<"By default argument"<<n<<"power 2 is"<<result<<endl;
    return 0;
}
