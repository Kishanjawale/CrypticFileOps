#include "Enc_Dec.hpp"

using std::cerr;
using std::string;

const int FILE_ALREADY_EXISTS = -1;
const int FILE_NOT_EXISTING=-2;


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
            
            break;

            c cout << "\nEnter the name of the file you would like to write to : \n";
            cin.ignore();
            getline(cin, strFileName);

            if (!encdec.is_exists(strFileName))
            {
                cerr << "\nERROR : File does not exists!\n";
                continue;
            }

            cout << "\nEnter the data you would like to write : \n";
            getline(cin, strData);

            iRet = encdec.write_file(strFileName, strData, 1);

            if (iRet == -2)
            {
                cerr << "\nERROR : the file could not be opened.\n";
                continue;
            }

            cout << endl
                 << iRet << " bytes have been written to the file named \"" << strFileName << "\"\n";

            break;

        case 3:

            cout << "\nEnter the file name to encrypt the data from the file : \n";
            cin.ignore();
            getline(cin, strFileName);

            if (!encdec.is_exists(strFileName))
            {
                cerr << "\nERROR : File does not exists!\n";
                continue;
            }

            cout << "\nPlease set the password (The password should contain strictly eight characters.) : \n";

            while (strPass.length() != 8)
            {
                getline(cin, strPass);

                iRet = encdec.encrypt_data(strFileName, strPass);

                if (iRet == -1)
                {
                    cerr << "\nWarning : The password should contain strictly eight characters.\n";
                    continue;
                }
                strPass.clear();
                break;
            }

            if (iRet == -3)
            {
                cerr << "\nERROR : File already encrypted!\n";
                continue;
            }

            cout << "\nData encrypted successfully.\n";

            break;

        case 4:

            cout << "\nEnter the file name to decrypt the data from the file : \n";
            cin.ignore();
            getline(cin, strFileName);

            if (!encdec.is_exists(strFileName))
            {
                cerr << "\nERROR : File does not exists!\n";
                continue;
            }

            cout << "\nEnter the password to decrypt the file : \n";
            getline(cin, strPass);

            iRet = encdec.decrypt_data(strFileName, strPass);

            strPass.clear();

            if (iRet == -2)
            {
                cerr << "\nERROR : File already decrypted!\n";
                continue;
            }

            if (iRet == -3)
            {
                cerr << "\nERROR : Incorrect password. Please try again.\n";
                continue;
            }

            cout << "\nData decrypted successfully.\n";

            break;

        case 5:

            cout << "\nEnter the file name to delete : \n";
            cin.ignore();
            getline(cin, strFileName);

            if (!encdec.is_exists(strFileName))
            {
                cerr << "\nERROR : File does not exists!\n";
                continue;
            }

            cout << "\nAre you sure you want to delete "
                 << "\"" << strFileName << "\"?(y/n)\n";
            cin >> chChoice;

            if (chChoice == 'N' || chChoice == 'n')
                continue;
            else if (chChoice == 'Y' || chChoice == 'y')
            {
                iRet = encdec.delete_file(strFileName);

                if (iRet == -2)
                {
                    cerr << "\nERROR : We're unable to delete the file at this time. Please try again later.\n";
                    continue;
                }

                cout << "\nFile deleted successfully.\n";
            }
            else
                cout << "\nInvalid option selected!\n";
            break;






















            case 6:
                cout<<"\n Thank you for Using My Application.";
                b_flag=false;
            break;
           
            default:
                cout<<"Invalid option Selected\n";
            break;
        }

    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}