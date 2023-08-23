#include<iostream>
using namespace std;
int factorial(int c){
int f=1;
for (int i=1; i <=c; i++)
{
  f=f*i;
}

return f;
}
long double exponent(double r, int n) {
    long double p=1;
    for(int i=0;i<n;i++){
        p=p*r;
    }
    return p;
}
int main()
{
    int cal;
    int c,n;
    double a,b,r;
    cout<<"choose any one operation given below\n 1=>+\n 2=>-\n 3=>*\n 4=>/\n 5=>exponent\n 6=>factorial\n"<<endl;
    cin>>cal;
    switch(cal)
    {
    case 1:
    cout<<"choose any two numbers"<<endl;
    cin>>a>>b;
    cout<<"the sum is "<<(a+b)<<endl;
    break;
    case 2:
    cout<<"choose any two numbers"<<endl;
    cin>>a>>b;
    cout<<"the difference is "<<(a-b)<<endl;
    break;
    case 3:
    cout<<"choose any two numbers"<<endl;
    cin>>a>>b;
    cout<<"the answer is "<<(a*b)<<endl;
    break;
    case 4:
    cout<<"choose any two numbers"<<endl;
    cin>>a>>b;
    cout<<"the answer is "<<(a/b)<<endl;
    break;
    case 5:
    cin>>a>>b;
    cout<<"the answer is "<<exponent(a,b)<<endl;
    break;
    case 6:
    cin>>c;
    cout<<"the answer is "<<factorial(c)<<endl;
    break;
    }
    
    return 0;
} 