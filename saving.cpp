#include"saving.h"
#include<iostream>
double saving::minbalance = 0;
//--------------------------------------------------
saving::saving(string acntno,double balan):account(acntno,balan){}
//------------------------------------------------------
void saving::display()const
{
    std::cout<<"savings\n";
}
//-----------------------------------------------------
void saving::withdrawal(double amount)
{
    if(balance + minbalance < amount)
    {
        std::cout<<"Insufficient funds withdrawal : "<<amount<<"\n";
    }
    else
    {
        balance -= amount;
    }
}
//------------------------------------------------------
