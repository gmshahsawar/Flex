//
//  Header.h
//  Flex
//
//  Created by MAC on 10/12/2023.
//  Copyright © 2023 MAC. All rights reserved.
//

#ifndef Header_h
#define Header_h


#endif /* Header_h */
#include<iostream>
#include<string>
using namespace std;
class course{
    int attendance;
    int marks;
    int code;
    string name;
    string instructor;
    int credits;
    int capacity;
public:
    course(){}
    int get_capacity(){
        return capacity;
    }
    int get_code(){
        return code;
    }
    string get_instructor(){
        return instructor;
    }
    string get_course_name(){
        return name;
    }
    void set_course(int cod,string nam,string instructo,int credit,int capacit){
        code=cod;
        name=nam;
        instructor=instructo;
        credits=credit;
        capacity=capacit;
    }
    bool assign_marks(){
        cout<<"Enter to assign marks"<<endl;
        cin>>marks;
        return true;
    }
    bool mark_attendence(){
        cout<<"Enter to mark attendence"<<endl;
        cin>>attendance;
        return true;
    }
    void show_marks(){
        cout<<"Marks are: "<<marks<<" out of 100"<<endl;
    }
    void show_attendence(){
        cout<<"Attendence is: "<<attendance<<endl;
    }
};
