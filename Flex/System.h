//
//  System.h
//  Flex
//
//  Created by MAC on 10/12/2023.
//  Copyright © 2023 MAC. All rights reserved.
//

#ifndef System_h
#define System_h


#endif /* System_h */
#include<iostream>
#include<string>
using namespace std;

class System{
    student *std=new student[10];
    course *cse=new course[10];
    int num=5;
public:
    System(){
        cse[0].set_course(1, "computer", "amir", 4, 30);
        cse[1].set_course(2, "math", "sabir", 4, 30);
        cse[2].set_course(3, "english", "kashif", 4, 30);
        cse[3].set_course(4, "urdu", "fraz", 4, 30);
        cse[4].set_course(5, "pkstd", "haider", 4, 30);
        
        std[0].set_automatically("AHMAD", 18, "5560", 2520);
        // num++;
        std[1].set_automatically("AHAD", 19, "0382", 3345);
        // num++;
        std[2].set_automatically("GHULAM", 20, "9387", 9876);
        // num++;
        std[3].set_automatically("GULSHER", 21, "3732", 5623);
        // num++;
        std[4].set_automatically("HAADI", 22, "4560", 123);
        // num++;
    }
    
    bool edit_details(string name){
        for(int i=0;i<num;i++){
            if(std[i].get_name()==name){
                int a;
                cout<<"Enter 1 to change name"<<endl;
                cout<<"Enter 2 to change roll_no"<<endl;
                cout<<"Enter 3 to change age"<<endl;
                cout<<"Enter 4 to change contact"<<endl;
                cin>>a;
                if(a==1){
                    string n;
                    cout<<"Enter the name to change with"<<endl;
                    cin>>n;
                    std[i].set_name(n);
                }
                else if(a==2){
                    string a;
                    cout<<"Enter to change roll no with"<<endl;
                    cin>>a;
                    std[i].set_rollno(a);
                }
                else if(a==3){
                    int h;
                    cout<<"Enter new age"<<endl;
                    cin>>h;
                    std[i].set_age(h);
                }
                else if(a==4){
                    long g;
                    cout<<"Enter new contact"<<endl;
                    cin>>g;
                    std[i].set_contact(g);
                }
            }
        }
        return true;
    }
    
    void  display_main_menu(){
        // cout<<"WELCOME!"<<endl;
        cout<<"Main Menu: "<<endl;
        cout<<"1-Enroll a student"<<endl;
        cout<<"2-Course Registration"<<endl;
        cout<<"3-Attendance"<<endl;
        cout<<"4-Marks"<<endl;
        cout<<"5-Course Withdraw"<<endl;
        cout<<"6-Exit"<<endl;
    }
    void display_sub1(){
        cout<<"1-Display already enrolled students"<<endl;
        cout<<"2-Add student"<<endl;
        cout<<"3-Remove student"<<endl;
        cout<<"4-Edit student detail"<<endl;
        cout<<"0-Back"<<endl;
    }
    void display_sub2(){
        cout<<"1-Availaible courses"<<endl;
        cout<<"2-Register course"<<endl;
        cout<<"0-Back"<<endl;
    }
    void display_sub3(){
        cout<<"1-Display attendance"<<endl;
        cout<<"2-Mark attendance"<<endl;
        cout<<"0-Back"<<endl;
    }
    void display_sub4(){
        cout<<"1-Display Marks"<<endl;
        cout<<"2-Assign Marks"<<endl;
        cout<<"0-Back"<<endl;
    }
    void display_sub5(){
        cout<<"1-Enrolled courses"<<endl;
        cout<<"2-Drop course"<<endl;
        cout<<"0-Back"<<endl;
    }
    
    void get_user_input(){
        int a=0;
        cout<<"Enter your choice: "<<endl;
        cin>>a;
    }
    void run(){
        int a = 0;
        while (a != 6) {
            display_main_menu();
            cout << "Enter your input" << endl;
            cin >> a;
            
            if (a == 1) {
                int b1 = 1;
                while (b1 != 0) {
                    display_sub1();
                    cout << "Enter your input again" << endl;
                    cin >> b1;
                    if (b1 == 1) {
                        for (int i = 0; i < num; i++) {
                            cout << std[i].get_name() << endl;
                        }
                    }
                    else if (b1 == 2) {
                        // std[num] =  student();
                        std[num].set_student();
                        num++;
                    }
                    else if (b1 == 3) {
                        string b;
                        cout << "Enter the name of student you want to remove" << endl;
                        cin >> b;
                        int index = 0;
                        for (int i = 0; i < num; i++) {
                            if (std[i].get_name() == b) {
                                index = i;
                            }
                        }
                        for (int j = index; j < num - 1; j++) {
                            std[j] = std[j + 1];
                        }
                        num--;
                    }
                    else if (b1 == 4) {
                        string z;
                        cout << "Enter name of student to edit details" << endl;
                        cin >> z;
                        edit_details(z);
                    }
                }
            }
            else if (a == 2) {
                int b2 = 1;
                while (b2 != 0) {
                    display_sub2();
                    cout << "Enter your input" << endl;
                    cin >> b2;
                    if (b2 == 1) {
                        std[0].display_avalaible_courses();
                    }
                    else if (b2 == 2) {
                        string q;
                        int p;
                        cout << "Enter the name of student to register" << endl;
                        cin >> q;
                        cout << "Enter code of course in which you want to register" << endl;
                        cin >> p;
                        for (int j = 0; j < num; j++) {
                            if (std[j].get_name() == q) {
                                std[j].add_course(p);
                            }
                        }
                    }
                }
            }
            else if (a == 3) {
                int b = 1;
                while (b != 0) {
                    display_sub3();
                    cout << "Enter your input again" << endl;
                    cin >> b;
                    if (b == 1) {
                        int f;
                        string b;
                        cout << "Enter the course code for attendance" << endl;
                        cin >> f;
                        cout << "Also enter the student name for attendance" << endl;
                        cin >> b;
                        for (int i = 0; i < num; i++) {
                            if (std[i].get_name() == b) {
                                std[i].show_atendance(f);
                            }
                        }
                    }
                    else if (b == 2) {
                        int f;
                        string b;
                        cout << "Enter the course code for attendance" << endl;
                        cin >> f;
                        cout << "Also enter the student name for attendance" << endl;
                        cin >> b;
                        for (int i = 0; i < num; i++) {
                            if (std[i].get_name() == b) {
                                std[i].mark_attendance(f);
                            }
                        }
                    }
                }
            }
            else if (a == 4) {
                int b3 = 1;
                while (b3 != 0) {
                    display_sub4();
                    cout << "Enter your Input again" << endl;
                    cin >> b3;
                    if (b3 == 1) {
                        int f;
                        string b;
                        cout << "Enter the course code for attendance" << endl;
                        cin >> f;
                        cout << "Also enter the student name for attendance" << endl;
                        cin >> b;
                        for (int i = 0; i < num; i++) {
                            if (std[i].get_name() == b) {
                                std[i].show_marks(f);
                            }
                        }
                    }
                    else if (b3 == 2) {
                        int f;
                        string b;
                        cout << "Enter the course code for attendance" << endl;
                        cin >> f;
                        cout << "Also enter the student name for attendance" << endl;
                        cin >> b;
                        for (int i = 0; i < num; i++) {
                            if (std[i].get_name() == b) {
                                std[i].assign_marks(f);
                            }
                        }
                    }
                }
            }
            else if (a == 5) {
                int b4 = 1;
                while (b4 != 0) {
                    display_sub5();
                    cout << "Enter your input" << endl;
                    cin >> b4;
                    if (b4 == 1) {
                        string z;
                        cout << "Enter name of student" << endl;
                        cin >> z;
                        for (int i = 0; i < num; i++) {
                            if (std[i].get_name() == z) {
                                std[i].display_enrolled_courses();
                            }
                        }
                    }
                    else if (b4 == 2) {
                        int f;
                        string b;
                        cout << "Enter the course code for withdrawl: " << endl;
                        cin >> f;
                        cout << "Also enter the student name: " << endl;
                        cin >> b;
                        for (int i = 0; i < num; i++) {
                            if (std[i].get_name() == b) {
                                std[i].withdraw_course(f);
                            }
                        }
                    }
                }
            }
        }
    }
    
    
    
    
};
