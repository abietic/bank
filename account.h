#ifndef ACCOUNT__H
#define ACCOUNT__H
//---------------------------------------
#include<string>
using std::string;
//-----------------------------------------------
class account
{
protected:
    string acntnumber;
    double balance;
public:
    virtual void display()const = 0;
    //------------------------------------------------------
    virtual void withdrawal(double amount) = 0;
    //------------------------------------------------------
    virtual void getmoney(account& mount) = 0;
    //------------------------------------------------------
    virtual void getpass(string pass){}
    //------------------------------------------------------
    double getbalance() const;
    //-------------------------------------------------------
    void deposit(double amount);
    //-------------------------------------------------------
    virtual ~account(){}
    //---------------------------------------------------------
    account(string acntno,double balan);
    //-------------------------------------------------------
    bool operator==(const account& a);
    //----------------------------------------------------------
};
//------------------------------------------------------
#endif
