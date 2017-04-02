#include"account.h"
//--------------------------------------------------------------------------------------
account::account(string acntno,double balan)
{
    acntnumber = acntno;
    balance = balan;
}
//------------------------------------------------------------------------------------------
double account::getbalance() const
{
    return balance;
}
//---------------------------------------------------------------------------------------
void account::deposit(double amount)
{
    balance += amount;
}
//-----------------------------------------------------------------------------------------
bool account::operator==(const account& a)
{
    return acntnumber == a.acntnumber;
}
//--------------------------------------------------------------------------------------------
