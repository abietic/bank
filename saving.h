#ifndef SAVING__H
#define SAVING__H
//-------------------------------------------------------
#include"account.h"
//-------------------------------------------------------
class saving : public account
{
protected:
    static double minbalance;
public:
    saving(string acntno,double balan = 0.0);
    virtual void display() const;
    void withdrawal(double amount);
    virtual void getmoney(account& mount);
    virtual void getpass(string pass){}
};
#endif // SAVING__H
