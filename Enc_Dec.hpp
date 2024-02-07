#ifndef ENCDEC_H
#define ENCDEC_H

#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;


class EncryptDecrypt
{
    int m_iCountLines;
    const string m_strCheck;
    public:

    EncryptDecrypt();
    int create_file(const string file_name);
    


}
