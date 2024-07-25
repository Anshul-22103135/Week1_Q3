// reverse the inputed string
#include<iostream>
using namespace std;

int main()
{
    string ss;
    cout<<"Enter The String:";
    getline(cin,ss);
    int n = ss.length();
    int s =0,e=n-1;
    //Approach - Using the two pointer approach to get the string reversed
    while(s<=e)
    {
        swap(ss[s],ss[e]);
        s++;
        e--;
    }
    cout<<"The reversed String is "<<ss;
    return 0;
}
