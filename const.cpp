#include<iostream>
using namespace std;

int main()
{
    /* code */
    const double PI=3.14159;
    // const double PI=420.69 will generate error as the variable is read only 
    double radius= 10;
    double circum= 2*PI*radius;

    cout << circum << " cms"<<endl;
    return 0;
}
