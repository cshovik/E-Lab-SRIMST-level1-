#include <iostream>
using namespace std;
class Store{
    public:
    void itemcount(int id){
        cout<<id<<'\n';
    }
    void itemcount(int totalavl,int consumed){
        cout<<totalavl-consumed<<'\n';
    }
};
int main()
{
    Store purchase;
    int id,totalavl,consumed;
    cin>>id>>totalavl>>consumed;
    purchase.itemcount(id);
    purchase.itemcount(totalavl,consumed);

	return 0;
}
