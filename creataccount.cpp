#include"creataccount.h"
//---------------------------------------------------------------------------------
creataccount* create(int a)
{
    switch(a)
    {
    case 1 : return creataccountchecking();
    case 0 : return creataccountsaving();
    }
}
//------------------------------------------------------------------
account* createac(creataccount* ac,string acntno,double balan)
{
    return (ac->createaccount(acntno,balan));
}
//----------------------------------------------------------------------------------
