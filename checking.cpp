#include"checking.h"
#include<iostream>
//----------------------------------------------
checking::checking(string acntno,double balan) : account(acntno,balan),remittance(other) {}
//----------------------------------------------
void checking::display() const
{
    std::cout<<"checking\n";
}
//----------------------------------------------
void checking::withdrawal(double amount)
{
    if(remittance == remitbypost)
    {
        amount += 30;
    }
    if(remittance == remintbycable)
    {
        amount += 60;
    }
    if(balance < amount)
    {
        std::cout<<"Insufficient funds withdrawal : "<<amount<<"\n";
    }
    else
    {
        balance -= amount;
    }
}
//----------------------------------------------------
void checking::setremit(REMIT re)
{
    remittance = re;
}
//----------------------------------------------------
