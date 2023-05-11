#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

#include <string>
using namespace std;

class regeseration
{
private:
    string email;
    string userName;
    string password;
    string phoneNumber;
public:
    bool taking_email_from_User();//(regex check done)
    bool taking_username_from_User();
    bool taking_phonenumber_from_User();
    bool taking_password_from_User();
    bool taking_email_exist();
    bool taking_password_exist();
    bool change_exist_password();
    string returning_email();
    string returning_username();
    string returning_password();
    string returning_phonenumber();
    int line_password_search;
    int line_user_search = 0 ;
    int counter = 0;
    string check;
    bool flaag = true;

};


#endif // CLASS_H_INCLUDED