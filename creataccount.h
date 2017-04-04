#ifndef CREATACCOUNT__H
#define CREATACCOUNT__H
//---------------------------------------------
#include"account.h"
//---------------------------------------------
class creataccount
{
public:
    virtual account* createaccount(string acntno,double balan = 0.0) = 0;
    //--------------------------------------------------------------------------
    virtual ~creataccount(){}
};
//---------------------------------------------------------------------------------
creataccount* create(int a);
//------------------------------------------------------------------
creataccount* creataccountsaving();
//----------------------------------------------------------------------------------
creataccount* creataccountchecking();
//-----------------------------------------------------------------------------------
creataccount* creataccountcredit();
//-----------------------------------------------------------------------------------
account* createac(creataccount* ac,string acntno,double balan);
//----------------------------------------------------------------------------------
#endif // CREATACCOUNT__H
