#include <vector>
#include<iostream>
#include <map>
#include<string>
using namespace std;

void func(){
    vector<int> v;
    v.push_back(5);
    v.push_back(5);

    for(auto c:v){
        cout<<c<<endl;
    }
}

int main()
{
    std::vector<int>        v1;
    std::map <int,string>   m1;
    cout<<12345<<endl;
    return 0;

}
