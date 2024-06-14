#include<iostream>
#include<math.h>

using namespace std;

extern "C"{
    double my_sqrt(double x){
        return sqrt(x);
    }
}

int main()
{
    double x=100;
    double y=my_sqrt(x);
    cout<<"Square roor of"<<x<<"is"<<y<<endl;
    return 0;
}
