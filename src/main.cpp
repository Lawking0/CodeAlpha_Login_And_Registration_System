                    #include <iostream>
                    #include <string>
                    #include <fstream>

                    using namespace std;
                    //varables 
                        string username;
                        // string username2;
                        string password;

                    // Registeration button
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

                    // LOgin in button
                    void Login (){
                        cout <<"------- Login ---------"<<endl;

                        //entering the username
                        cout<<"Username: "<<username<<endl;
                        getline(cin,username);

                        
                        //precaution for the username
                        while (username.empty())
                        {
                            cout << "You didn't enter your username...try again"<<endl;
                            cout<<"username: " << username <<endl;
                            getline(cin,username);
                        }
                        
                        



                        // //entering the password
                        // cout <<"Password: "<<password<<endl;
                        // getline(cin,password);


                        // //precaution for the password

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
                    
                        // For the register 1 button
                        if (option == 1){
                            RegisterUser();
                            main();
                        } 

                        // For the login 2 button
                        if (option == 2){
                            Login();
                            
                        }

                        // For the Exist 3 button

                        
                        return 0;
                    }