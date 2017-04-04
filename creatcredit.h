#ifndef CREATCREDIT__H
#define CREATCREDIT__H
//-----------------------------------------------------------
#include"creataccount.h"
#include"credit.h"
//-----------------------------------------------------------
class creatcredit : public creataccount
{
public:
    account* createaccount(string acntno , double balan = 0.0);
};
#endif // CREATCREDIT__H
