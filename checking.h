#ifndef CHECKING__H
#define CHECKING__H
//----------------------------------------
#include"account.h"
enum REMIT{remitbypost,remintbycable,other};
//---------------------------------------
class checking : public account
{
private:
    REMIT remittance;
public:
    checking(string acntno,double balan = 0.0);
    void withdrawal(double amount);
    void display() const;
    void setremit(REMIT re);
    void getmoney(account& mount);
};
#endif // CHECKING__H
