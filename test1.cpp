#include<iostream>
#include<vector>
#include<algorithm>
using std::bind2nd;
#include<functional>
using std::bind;

using namespace std;


int main(){

    int ia[6] = {27, 210, 12, 47, 109, 83};
    //cout<<*(ia + 6)<<endl;
    vector<int> vec(ia,ia + 6);  //这是一个左闭右开的区间
    for (auto &c : vec) {

        cout<<c<<endl;
    }

    cout<<count_if(vec.begin(), vec.end(),std::not1(bind2nd(std::less<int>(), 40)))<<endl;

    char str[10]={0,};
    cout<<sizeof(str)<<endl;
    return 0;
}
