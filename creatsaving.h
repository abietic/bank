#ifndef CREATSAVING__H
#define CREATSAVING__H
//-----------------------------------------------------
#include"creataccount.h"
//------------------------------------------------------
class creatsaving : public creataccount
{
public:
    account* createaccount(string acntno,double balan = 0.0);
};
//-----------------------------------------------------------------------
creataccount* creataccountsaving();
#endif // CREATSAVING__H
