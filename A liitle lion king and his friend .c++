#include <iostream>
using namespace std;
int main()
{
    long sum,C;
    int N,t,input;
    cin>>t;
    while(t--)
    {
        cin>>N>>C;
        sum = 0;
        for(int i=0;i<N;i++)
        {
            cin>>input;
            sum+=input;
        }
        if(sum<=C)
            cout<<"Yes\n";
        
        else
            cout<<"No\n";
    }

}
