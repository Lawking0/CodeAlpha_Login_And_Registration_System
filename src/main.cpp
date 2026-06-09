#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//varables 
string username;

// string username2;
string password;

// REGISTERATION IN BUTTON
void RegisterUser();

// LOGIN IN BUTTON
void Login ();

int main() {
    cout << "----------Login---And---Registration---System------"<<endl;
int option;


do {
cout << "1. Register" << endl;
cout << "2. Login" << endl;
cout << "3. Exist"<< endl;

cout << " select the number:  ";
cin>> option;
cin.ignore(); 


// For the register 1 button
if (option == 1){
    RegisterUser();
    
} 

// For the login 2 button
if (option == 2){
    Login();
    
}

// For the Exist 3 button
} while (option !=3  );

return 0;
}

// functions building block 
void RegisterUser(){
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

    // entering the password
    cout << "Enter your Password: ";
    getline(cin,password);
    
    // precaution for the password
    while (password == "") 
     {  cout<< "You didn't enter your password... Try again"<< endl;
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
cout << endl <<endl;
cout << "Registeration successful!"<< endl;
cout <<endl << endl;
}

void Login (){
cout <<"------- Login ---------"<<endl;
do {

//entering the username and password
cout<<"Username: ";
getline(cin,username); 

cout<<"Password: ";
getline(cin,password); 

// Precautions for the login 
if (username.empty() || password.empty()){ // 
    cout << " username or password is empty...try again"<<endl;
}
} while (username.empty () || password.empty());


// Open the register file
fstream readFile;
readFile.open("RegisterUser.txt",ios::in);

string line;
string compare_name;
string compare_password;

// concatnate the user input to the register file
compare_name = "username: " + username;
compare_password = "Password: " + password;


// Precaution for the read file
if (!readFile.is_open()){
    cout << " Error: Could not open file"<< endl;
    return;
}

// read each line in the file
while (getline(readFile,line)){
    
    // compare the user input name and the name in the database
    if (line == compare_name){
 
        // this remove the name in the line to put the password
    if (getline(readFile,line)){

        // compare the input pass and pass in the database
        if (line == compare_password) { 
            cout << endl << endl;
            cout<<" Login Successfully "<< endl;
            cout << endl << endl;
            readFile.close();
            break;

    } 

        }
    } 
    

} readFile.close();

// display the warning if login doesn't matched
    if (line != compare_password ){
        // compare the input pass and pass in the database
        cout <<endl <<endl;
            cout<<"Error: Incorrect username or password "<< endl;
            cout << endl << endl;
       

        
    } 





} 

