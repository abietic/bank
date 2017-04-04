#include <iostream>
#include<fstream>
#include"account.h"
#include"creataccount.h"
#include<list>
using namespace std;
enum accounttype {saving,checking,credit};
//-----------------------------------------------------------------------------
void getcom(ifstream& in,list<account*>& aclist)
{
    string s;
    double balan;
    creataccount* sp;
        for(;in>>s>>balan;)
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
}
//-----------------------------------------------------------------------------
void pickaccount(list<account*>& ac,list<account*>& gt)
{
    list<account*>::iterator g = gt.begin();
    while(!gt.empty())
    {
        for(list<account*>::iterator it = ac.begin();it != ac.end();it++)
        {
            if(it == ac.end())
            {
                cout<<"Invalide getmoney\n";
                return;
            }
            if(**it == **g)
            {
                (*it)->getmoney(**g);
                delete (*g);
                g++;
                gt.pop_front();
                break;
            }
        }
    }
}
//-----------------------------------------------------------------------------
void clear(list<account*>& a)
{
    list<account*>::iterator it = a.begin();
    while(!a.empty())
    {
        delete (*it);
        it++;
        a.pop_front();
    }
}
//-----------------------------------------------------------------------------
int main()
{
    list<account*> aclist;
    list<account*> getmonlist;
    creataccount* sp = create(credit);
    aclist.push_back(createac(sp,"1123",45));
    account* ab = aclist.back();
    ab->getpass("2236");
    account* cd = createac(sp,"1123",23);
    ab->getmoney(*cd);
    ab->display();
    delete ab;
    delete sp;
    aclist.pop_back();
    ifstream inaccount("account.txt");
    ifstream inwithdrawal("withdrawal.txt");
    account* ac;
    getcom(inaccount,aclist);
    getcom(inwithdrawal,getmonlist);
    pickaccount(aclist,getmonlist);
    while( !aclist.empty() )
    {
        ac = aclist.front();
        ac->display();
        aclist.pop_front();
        delete ac;
    }
    cout << "Hello world!" << endl;
    return 0;
}
