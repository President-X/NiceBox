#include <iostream>
using namespace std;

int main()
{int n,d;
double LMD=0;
double f;

cout<<"请输入数据条数"<<endl;
cin>>n;
cout<<"请输入间隔步长"<<endl;
cin>>d;
cout<<"请输入谐振频率(Hz)"<<endl;
cin>>f;
double statics[n];
int m=n/2;
cout<<"请键入数据"<<endl;
for(int i=0;i<n;i++)cin>>statics[i];
for(int j=0;j<m;j++){
 LMD+=(statics[j+m]-statics[j])/m/m/d/d;}
    cout<<"波长为"<<2*LMD<<"cm"<<endl;
    cout<<"声速为"<<2*LMD*f*10<<"m/s"<<endl;
    return 0;
}
