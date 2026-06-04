                    #include <iostream>
                    #include <string>
                    #include <fstream>
                    #include <vector>
                    #include <algorithm>

                    using namespace std;
                    //varables 
                        string username;
                        // string username2;
                        string password;

                    // tasks
                        void RegisterUser( ){
                        cout << "---------Registration---------"<< endl;

                        // entering the username
                            cout << "Enter your username: ";
                            getline(cin,username);

                            // precautions for the username
                                while (username == ""){
                                cout << "You didn't enter your username... try again"<< endl;
                                cout << "Enter your username: ";
                                getline(cin,username);
                                }

                            // cout << "confirm your username: ";
                            // cin>>username2;

                            // entering the password
                            cout << "Enter your Password: ";
                            getline(cin,password);
                            
                            // precaution for the password
                            while (password == "")
                            {
                                cout<< "You didn't enter your password... Try again"<< endl;
                                cout<<"Enter your Password";
                                getline(cin,password);
                            }

                            // saving the user registration in a file
                            fstream myFile;
                        myFile.open("RegisterUser.txt",ios::app | ios::in | ios::out);
                        if (myFile.is_open()){
                            myFile<<"username: " <<username<<endl;
                            myFile<<"Password: "<< password<<endl;
                            myFile.close();
                        }
                        
                         cout << "Registeration successful!"<< endl;

                        //  ifstream outFile;
                        //  outFile.open("RegisterUser.txt");
                        //  if (outFile.is_open())
                        //  {
                        
                        //     while ()
                        //     {
                        //         cout<<"red confirmed"<<endl;
                               
                        //     }
                        //     outFile.close();
                        //  } else {
                        //     cout <<"Error: couldn't open/read the file"<<endl;
                        //  }


                            // if (username != username2){
                            //     cout<<" Your username didn't match." << endl;
                            // }


                        }

                    int main() {

                        int option;

                        cout << "-------------Login---And---Registration---System------"<<endl;
                        cout << "1. Register" << endl;
                        cout << "2. Login" << endl;
                        cout << "3. Exist"<< endl;

                        cout << " select the number:  ";
                        cin>> option;
                        cin.ignore();

                        if (option == 1){
                            RegisterUser();
                        } 
                        
                        return 0;
                    }