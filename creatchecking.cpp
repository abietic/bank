#include"creatchecking.h"
#include"checking.h"
account* creatchecking::createaccount(string acntno,double balan)
{
    return new checking(acntno,balan);
}
//-------------------------------------------------------------
creataccount* creataccountchecking()
{
    return new creatchecking;
}
//-----------------------------------------------------------------------------------
