#include"credit.h"
#include<iostream>
//--------------------------------------
void credit::display() const
{
    std::cout<<"credit "<<acntnumber<<" "<<balance<<"\n";
}
//----------------------------------------------------------------------
void credit::getmoney(account& mount)
{
    string pass;
    std::cout<<"please input your password:\n";
    std::cin>>pass;
    if(pass != password)
    {
        std::cout<<"you have a wrong password can't get money\n";
        return;
    }
    if(minbalance > (balance - mount.getbalance()))
    {
        std::cout<<"you don't have enough money\n";
        return;
    }
    balance -= mount.getbalance();
}
//----------------------------------------------------------------------------
credit::credit(string acntno , double balan , string pass) : saving(acntno,balan),password(pass){}
//------------------------------------------------------------------------------
void credit::getpass(string pass)
{
    password = pass;
}
//-------------------------------------------------------------------------------
