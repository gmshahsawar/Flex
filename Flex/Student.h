//
//  Student.h
//  Flex
//
//  Created by MAC on 10/12/2023.
//  Copyright © 2023 MAC. All rights reserved.
//

#ifndef Student_h
#define Student_h


#endif /* Student_h */
#include<iostream>
//#include"Course.h"
#include<string>
using namespace std;
class student{
    int num=0;
    string name;
    string roll_no;
    int age;
    long contact;
    course* courses;
    course*crse;
    int num_courses=5;
public:
    student() {
        courses = new course[5];
        crse = new course[5];
        
        crse[0].set_course(1, "computer", "amir", 4, 30);
        crse[1].set_course(2, "math", "sabir", 4, 30);
        crse[2].set_course(3, "english", "kashif", 4, 30);
        crse[3].set_course(4, "urdu", "fraz", 4, 30);
        crse[4].set_course(5, "pkstd", "haider", 4, 30);
    }    void set_automatically(string n,int a,string rn,long c){
        name=n;
        age=a;
        roll_no=rn;
        contact=c;
    }
    void set_student(){
        string nam;
        string roll_n;
        int ag;
        long contac;
        cout<<"Enter the name of student"<<endl;
        cin>>nam;
        cout<<"Enter roll no "<<endl;
        cin>>roll_n;
        cout<<"Enter age of the student"<<endl;
        cin>>ag;
        cout<<"Enter contact of the student"<<endl;
        cin>>contac;
        name=nam;
        roll_no=roll_n;
        age=ag;
        contact=contac;
        
    }
    
    void display_avalaible_courses(){
        for(int i=0;i<5;i++){
            cout<<"Course Name: "<<crse[i].get_course_name()<<endl;
            cout<<"Course Code: "<<crse[i].get_code()<<endl;
            cout<<"Instructor Name: "<<crse[i].get_instructor()<<endl;
        }
    }
    string get_name(){
        return name;
    }
    string get_roll(){
        return roll_no;
    }
    void set_name(string n){
        name=n;
    }
    void set_rollno(string r){
        roll_no=r;
    }
    void set_age(int a){
        age=a;
    }
    void set_contact(long c){
        contact=c;
    }
    void display_student(){
        cout<<"The name of student is "<<name<<endl;
        cout<<"The roll number of student is "<<roll_no<<endl;
        cout<<"The age of student is "<<age<<endl;
        cout<<"The contact of student is "<<contact<<endl;
    }
    //  bool remove_students(string student_name);
    // bool register_student(long);
    
    void display_enrolled_courses(){
        for(int i=0;i<num;i++){
            cout<<"Enrolled courses are: "<<endl<<courses[i].get_course_name()<<endl;
        }
    }
    bool withdraw_course(long course_code){
        int index=0;
        for(int i=0;i<num;i++){
            if(courses[i].get_code()==course_code){
                index=i;
            }
        }
        if(index>0){
            for(int j=index;j<num-1;j++){
                courses[j]=courses[j+1];
            }
            num--;
        }
        return true;
    }
    bool mark_attendance(long course_code){
        for(int i=0;i<num;i++){
            if(courses[i].get_code()==course_code){
                courses[i].mark_attendence();
                cout<<endl;
                return true;
            }
        }
        return true;
    }
    bool assign_marks(long course_code){
        for(int i=0;i<num;i++){
            if(courses[i].get_code()==course_code){
                courses[i].assign_marks();
                cout<<endl;
                return true;
            }
        }
        return true;
    }
    void show_atendance(long course_code){
        for(int i=0;i<num;i++){
            if(courses[i].get_code()==course_code){
                courses[i].show_attendence();
                cout<<endl;
            }
        }
    }
    void show_marks(long course_code){
        for(int i=0;i<num;i++){
            if(courses[i].get_code()==course_code){
                courses[i].show_marks();
                cout<<endl;
            }
        }
    }
    bool add_course(int course_code){
        for(int i=0;i<5;i++){
            if(crse[i].get_code()==course_code){
                courses[num]=crse[i];
                num++;
                cout<<"Course of "<<courses[num].get_course_name()<<" has been registered"<<endl;
                return true;
            }
        }
        return true;
    }
    ~student(){}
};

