#include"creatsaving.h"
#include"saving.h"
account* creatsaving::createaccount(string acntno,double balan)
{
    return new saving(acntno,balan);
}
//---------------------------------------------------------------------------------
creataccount* creataccountsaving()
{
    return new creatsaving;
}
//----------------------------------------------------------------------------------
