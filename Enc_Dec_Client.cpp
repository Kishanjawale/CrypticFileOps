#include "Enc_Dec.hpp"

using std::cerr;
using std::string;

const int FILE_ALREADY_EXISTS = -1;

int mian()
{
    bool b_flag=true;
    int i_choice=0;
    int i_ret=0;
    EncryptDecrypt encdec;
    char ch_choice='\0';
    string str_filename, str_data,str_password;

    cout<<"Hello Everyone.."<<endl;   
    while (b_flag)
    {
        cout<<"select one of the following option:\n";
        cout<<"\n1.Create New File \n2.Write File\n3.Encrypt File \n4.Decrypt File\n5.Delete File \n6.Exit";
        cin>>i_choice;
        switch (i_choice)
        {
            case 1:
            cout<<"Enter the file name to create a file :\n";
            cin.ignore();
            getline(cin,str_filename);
            
            i_ret=encdec.create_file(str_filename);

            if(i_ret==FILE_ALREADY_EXISTS)
            {
                cout<<"ERROR: File already Exits..\n";
            }
            else
            {
                cout<<"\n File Successfully Created.\n";
            }

        }

    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}