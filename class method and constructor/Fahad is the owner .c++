#include <iostream>
using namespace std;
class ITEM
{
    public:
    int n;
    float large =0,summ=0;
    float arr[100],code[100];
    void getdata(int b){
        n=b;
        for(int i=0;i<n;i++)
        cin>>code[i]>>arr[i];
    }
    void largest(){
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=large)
            large=arr[i];
        }
    }
    void sum(){
        for(int i=0;i<n;i++)
        summ+=arr[i];
    }
    void displayitems(){
        cout<<"Largest Price="<<large<<'\n';
        cout<<"Sum of Prices="<<summ<<'\n';
        cout<<"Code and Price"<<'\n';
        for(int i=0;i<n;i++)
        cout<<code[i]<<" and "<<arr[i]<<'\n';
    }
};
int main()
{
    ITEM order;
    int b;
    cin>>b;
    order.getdata(b);
    order.largest();
    order.sum();
    order.displayitems();
    return 0;
}
