//################################################################ Professior JD ##############################################################################

#include<bits/stdc++.h>
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    float b,leftside,rs1,rs2;
    cin>>b>>leftside;
    b = b*b;
    leftside = leftside*leftside;
    rs1 = sqrt(leftside-b);
    rs2 = sqrt(leftside+b);
    cout<<fixed<<setprecision(5)<<rs1<<' '<<rs2;

	return 0;
}
