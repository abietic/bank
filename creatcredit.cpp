#include"creatcredit.h"
//-----------------------------------------------------------------------------
account* creatcredit::createaccount(string acntno , double balan)
{
    return new credit(acntno,balan);
}
//------------------------------------------------------------------------------
creataccount* creataccountcredit()
{
    return new creatcredit;
}
//------------------------------------------------------------------------------
