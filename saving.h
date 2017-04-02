#ifndef SAVING__H
#define SAVING__H
//-------------------------------------------------------
#include"account.h"
//-------------------------------------------------------
class saving : public account
{
private:
    static double minbalance;
public:
    saving(string acntno,double balan = 0.0);
    void display() const;
    void withdrawal(double amount);
};
#endif // SAVING__H
