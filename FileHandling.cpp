#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream new_file;
    new_file.open("new_file.txt",ios::out);
    if(!new_file){
        cout<<"File Creation Failed..."<<endl;
    }
    else{
        cout<<"New file is created..."<<endl;
        new_file<<"Hi MY NAME IS WASEEM..."<<endl;
        new_file.close();
    }
    return 0;
}