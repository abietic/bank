#ifndef CREDIT__H
#define CREDIT__H
//--------------------------------------------
#include"saving.h"
//--------------------------------------------
class credit : public saving
{
    string password;
public:
    credit(string acntno , double balan = 0.0 , string password = "000000");
    void display() const ;
    void getmoney(account& mount);
    void getpass(string pass);
};
#endif // CREDIT__H
