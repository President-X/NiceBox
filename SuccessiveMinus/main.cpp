#include <iostream>
using namespace std;

int main()
{int n,d;
double LMD=0;
double f;

cout<<"��������������"<<endl;
cin>>n;
cout<<"������������"<<endl;
cin>>d;
cout<<"������г��Ƶ��(Hz)"<<endl;
cin>>f;
double statics[n];
int m=n/2;
cout<<"���������"<<endl;
for(int i=0;i<n;i++)cin>>statics[i];
for(int j=0;j<m;j++){
 LMD+=(statics[j+m]-statics[j])/m/m/d/d;}
    cout<<"����Ϊ"<<2*LMD<<"cm"<<endl;
    cout<<"����Ϊ"<<2*LMD*f*10<<"m/s"<<endl;
    return 0;
}
