#include <iostream>
#include<fstream>
#include"account.h"
#include"creataccount.h"
#include<list>
using namespace std;
enum accounttype {checking,saving};
int main()
{
    list<account*> aclist;
    //creataccount* sp = create(checking);
    //aclist.push_back(createac(sp,"1123",45));
    ifstream inaccount("account.txt");
    ifstream inwithdrawal("withdrawal.txt");
    creataccount* sp;
    account* ac;
    string s;
    double balan;
    for(;inaccount>>s>>balan;)
    {
        if(s == "x 0")
        {
            break;
        }
        if(s.substr(0,7) == "savings")
        {
            sp = create(saving);
            aclist.push_back(createac(sp,s.substr(6,s.size()-8),balan));
            delete sp;
        }
        if(s.substr(0,8) == "checking")
        {
            sp = create(checking);
            aclist.push_back(createac(sp,s.substr(7,s.size()-9),balan));
            delete sp;
        }
    }
    ac = aclist.back();
    ac->display();
    //for(string d;getline(inwithdrawal,d););
    cout << "Hello world!" << endl;
    return 0;
}
