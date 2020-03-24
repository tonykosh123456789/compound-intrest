#include <iostream>

using namespace std;

int main()
{
    float p,r,t,i,j;
    cout << "enter principal" << endl;
    cin>>p;
    cout<<"enter time in years"<<endl;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cout<<"enter rate"<<endl;
        cin>>r;
        i=p*r/100;
        p+=i;
    }
    cout<<"compound intrest is equal to"<<"  "<<i<<endl;

}
