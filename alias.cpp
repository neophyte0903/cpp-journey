#include<iostream>
#include<vector>
using namespace std;

//typedef vector<pair<string , int>> pairlist_t;
typedef string text_t; // use only where it is benificial 
using num_t = int; // works better with templates 

int main()
{
    /* code */
    text_t firstName="gaga";
    num_t age = 19;

    cout << firstName << endl;
    cout << age << endl;

    return 0;
}
 