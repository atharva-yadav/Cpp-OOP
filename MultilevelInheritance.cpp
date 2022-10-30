/*

| A |
  ↆ
| B |       This is Multilevel Inheritance
  ↆ
| C |

If we inheritaning B from A and C from B : [ A --> B --> C ]
  1. A is base class for B & B is Base class for C
  2. A--> B--> C is called inheritance path  

*/

#include <iostream>
using namespace std;

class Student
{
protected:
  int roll_number;

public:
  void set_roll_number(int);
  void get_roll_number();
};

void Student ::set_roll_number(int r)
{
  roll_number = r;
}

void Student ::get_roll_number()
{
  cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
  float maths;
  float physics;

public:
  void set_marks(float, float);
  void get_marks();
};

void Exam ::set_marks(float x, float y)
{
  maths = x;
  physics = y;
}

void Exam ::get_marks()
{
  cout << "The maths marks are: " << maths << endl;
  cout << "The physics marks are: " << physics << endl;
}

class Result : public Exam
{
public:
  float percantage;

public:
  void display_result()
  {
    get_roll_number();
    get_marks();
    cout << "Your percentage is " << (maths + physics) / 2 << " %" << endl;
  }
};


int main()
{

  Result shri;
  shri.set_roll_number(108);
  shri.set_marks(100, 100);

  shri.display_result();

  return 0;
}