#ifndef CREATCHECKING__H
#define CREATCHECKING__H
//--------------------------------------------------------
#include"creataccount.h"
//-----------------------------------------------------------------
class creatchecking : public creataccount
{
public:
    account* createaccount(string acntno,double balan = 0.0);
};
//---------------------------------------------------------------------
creataccount* creataccountchecking();
//------------------------------------------------------------------------
#endif // CREATCHECKING__H
