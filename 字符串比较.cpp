#include <iostream>
#include <cstring>
using namespace std;
class CString
{
private:
    char *m_string;
public:
    CString() {m_string=new char[50];cin.getline(m_string,50);}
    ~CString() {delete m_string;}
    friend bool operator==(CString &,CString &);//也可以定义为成员函数
};
bool operator==(CString &str1,CString &str2)
{
    if (strcmp(str1.m_string, str2.m_string)==0)
        return true;
    else
        return false;
}
int main()
{
    CString str1,str2;
    if (str1==str2)
        cout<<"str1=str2"<<endl;
    else
        cout<<"str1!=str2"<<endl;
    return 0;
}
/*a little bit change*/
/*another change*/
