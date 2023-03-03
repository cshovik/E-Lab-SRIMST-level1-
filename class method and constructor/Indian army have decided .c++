#include <iostream>
using namespace std;
class IndianArmy
{
    public:int ResumesofCamdidates(){
        long long n;
        cin>>n;
        long long k=n*(n-1)*(n-2)*(n-3)*(n-4)/120;
        cout<<k+k*(n-5)/6+k*(n-5)*(n-6)/42;
    return 1;
    }
};
int main(){
    IndianArmy GroupingofResumes;
    GroupingofResumes.ResumesofCamdidates();

	return 0;
}
