// if 
#include<iostream>
using namespace std;
int main(){
    int age = 30;
    if (age >= 25){
        cout<<"yes age is in limit."<<endl;
    }else{
            cout<<"out of limit."<<endl;
        }
    
}


// else if

#include<iostream>
using namespace std;
int main(){
    int marks = 69;

    if(marks <= 60){
        cout<< "Grade: F"<<endl;
    }else if (marks >= 69){
        cout<<"Grade: P"<<endl;
    }
    return 0;
}
