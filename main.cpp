#include <iostream>
#include<fstream>
#include"account.h"
#include"creataccount.h"
#include<list>
using namespace std;
enum accounttype {saving,checking};
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
            aclist.push_back(createac(sp,s.substr(7,s.size()-7),balan));
            delete sp;
        }
        if(s.substr(0,8) == "checking")
        {
            sp = create(checking);
            aclist.push_back(createac(sp,s.substr(8,s.size()-8),balan));
            delete sp;
        }
    }
    while( !aclist.empty() )
    {
        ac = aclist.front();
        ac->display();
        aclist.pop_front();
        delete ac;
    }
    //for(string d;getline(inwithdrawal,d););
    cout << "Hello world!" << endl;
    return 0;
}
