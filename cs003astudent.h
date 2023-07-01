#ifndef CS003ASTUDENT_H
#define CS003ASTUDENT_H

/*******************************************************************************
 * Student CS003AStudent
 *  This class represents a CS003A student. This class contains all of the
 *  personal information of the CS003A student.
 ******************************************************************************/

#include "student.h"

class CS003AStudent : public Student
{
public:
/*******************************************************************************
 * CS003AStudent();
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/
    CS003AStudent();
/*******************************************************************************
 * CS003AStudent(int ts,string jk,Date input);
 * Constructor; Initialize class attributes
 * Parameters: int ts,string jk,Date input
 * Return: none
 ******************************************************************************/
    CS003AStudent(int ts,         // IN - total score
                  string jk,      // IN - java knowledge
                  Date input);    // IN - graduation date
/*******************************************************************************
 * CS003AStudent(string n,int i,string nu,int a,char g,string s,double gp,int ts,
           string jk,Date input);
 * Constructor; Initialize class attributes
 * Parameters: string n,int i,string nu,int a,char g,string s,double gp,int ts,
               string jk,Date input
 * Return: none
 ******************************************************************************/
    CS003AStudent(string n,       // IN - name
                  int i,          // IN - id number
                  string nu,      // IN - phone number
                  int a,          // IN - age
                  char g,         // IN - gender
                  string s,       // IN - class standing
                  double gp,      // IN - gpa
                  int ts,         // IN - total score
                  string jk,      // IN - java knowledge
                  Date input);    // IN - graduation date
/*******************************************************************************
 * ~CS003AStudent();
 * Destructor; Destroys class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/
    ~CS003AStudent();
/*******************************************************************************
 * void set_totalScore(int input);
 * Mutator; sets total score
 * Parameters: int input
 * Return: none
 ******************************************************************************/
    void set_totalScore(int input);     // IN - total score
/*******************************************************************************
 * void set_javaKnowledge(string input);
 * Mutator; sets java knowledge
 * Parameters: string input
 * Return: none
 ******************************************************************************/
    void set_javaKnowledge(string input);   // IN - java knowledge
/*******************************************************************************
 * void set_graduationDate(Date input);
 * Mutator; sets graduation date
 * Parameters: Date input
 * Return: none
 ******************************************************************************/
    void set_graduationDate(Date input);    // IN - graduation date
/*******************************************************************************
 * int get_totalScore() const;
 * Accessor; returns total score
 * Parameters: none
 * Return: int
 ******************************************************************************/
    int get_totalScore() const;
/*******************************************************************************
 * string get_javaKnowledge() const;
 * Accessor; returns java knowledge
 * Parameters: none
 * Return: string
 ******************************************************************************/
    string get_javaKnowledge() const;
/*******************************************************************************
 * Date get_graduationDate() const;
 * Accessor; returns graduation date
 * Parameters: none
 * Return: Date
 ******************************************************************************/
    Date get_graduationDate() const;
/*******************************************************************************
 * void print_student();
 * Accessor; prints out student data
 * Parameters: none
 * Return: none
 ******************************************************************************/
    void print_student();
protected:
    int totalScore;             // IN - student's total score
    string javaKnowledge;       // IN - student's java knowledge
    Date graduationDate;        // IN - student's graduation date
};

#endif // CS003ASTUDENT_H
