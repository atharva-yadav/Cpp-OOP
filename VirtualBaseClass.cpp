/*  
      ---class A (a)--- 
      ↧               ↧
class B (a)        class C (a)
      ↧               ↧
      ---> class D <---
           (a), (a)

⭕ class D gets two copies of data from base class ( B & C ), to resolve this we use virtual base classes
⭕ For this we make virtual to class B & class C.

⭕ Syntax:
            class B : virtual public A { ........ };
            class C : virtual public A { ........ };
*/

/*// 🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵

                --- Student --- 
                ↧               ↧
    (virtual) Test            Sports (virtual) 
                ↧               ↧
                ---> Result <---

*/// 🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵🔵


#include<iostream>
using namespace std;

class Student{
    protected:
        int rollNo;
    public: 
        void setNumber(int a){
            rollNo = a;
        }
        void printNumber(){
            cout <<"Your roll number is: "<<rollNo<<endl;
        }

};

class Test :  virtual public Student{
    protected:
        float maths, physics;
    public:
        void setMarks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void printMarks(){
            cout <<"Your marks are 1. Maths: "<<maths<<endl;
            cout <<"               2. Physics: "<<physics<<endl;
        }
};

class Sports :  virtual public Student{
    protected:
        float score;
    public:
        void setScore(float sc){
            score = sc;
        }

        void printScore(){
            cout <<"Your PT score is "<<score<<endl;   
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score ;
            printNumber();
            printMarks();
            printScore();
        }
};


int main(){
    
    Result shri;
    shri.setNumber(1);
    shri.setMarks(100,200);
    shri.setScore(300);
    shri.display();
    
    return 0;
}