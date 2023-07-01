#ifndef DATE_H
#define DATE_H

/*******************************************************************************
 * Date Class
 *  This class represents the calander date. This class aims to properly output
 *  the date in numeric and word forms.
 ******************************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

class Date
{
public:
/*******************************************************************************
 * Date();
 * Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ******************************************************************************/
    Date();
/*******************************************************************************
 * Date(unsigned, unsigned, unsigned);
 * Constructor; Initialize class attributes
 * Parameters: unsigned, unsigned, unsigned
 * Return: none
 ******************************************************************************/
    Date(unsigned m,            // IN - month
         unsigned d,            // IN - day
         unsigned y);           // IN - year
/*******************************************************************************
 * Date(const string &, unsigned, unsigned);
 * Constructor; Initialize class attributes
 * Parameters: const string &, unsigned, unsigned
 * Return: none
 ******************************************************************************/
    Date(const string &mn,      // IN - month (word)
         unsigned d,            // IN - day
         unsigned y);           // IN - year
/*******************************************************************************
 * void printNumeric() const;
 *
 * Accessor; This method prints out the date in numeric form
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/
    void printNumeric() const;   
/*******************************************************************************
 * void printAlpha() const;
 *
 * Accessor; This method prints out the date in word form
 * -----------------------------------------------------------------------------
 * Parameters: none
 * -----------------------------------------------------------------------------
 * Return: none
 ******************************************************************************/
    void printAlpha() const;

private:
    unsigned day;       // IN - day of the month in number form
    unsigned month;     // IN - month in number form
    string monthName;   // IN - month in word form
    unsigned year;      // IN - year in number form
/*******************************************************************************
 * bool isLeap(unsigned) const;
 *
 * Accessor; This method determins whetere or not the input year is a leap year
 * -----------------------------------------------------------------------------
 * Parameters: unsigned
 * -----------------------------------------------------------------------------
 * Return: bool
 ******************************************************************************/
    bool isLeap(unsigned y) const;      // IN - year
/*******************************************************************************
 * unsigned daysPerMonth(unsigned, unsigned) const;
 *
 * Accessor; This method determins the number of days in a given month
 * -----------------------------------------------------------------------------
 * Parameters: unsigned, unsigned
 * -----------------------------------------------------------------------------
 * Return: unsigned
 ******************************************************************************/
    unsigned daysPerMonth(unsigned m,               // IN - month
                          unsigned y) const;        // IN - year
/*******************************************************************************
 * string name(unsigned) const;
 *
 * Accessor; This method takes in the numeric month and returns its name
 * -----------------------------------------------------------------------------
 * Parameters: unsigned
 * -----------------------------------------------------------------------------
 * Return: string
 ******************************************************************************/
    string name(unsigned m) const;                  // IN - month
/*******************************************************************************
 * unsigned number(const string &) const;
 *
 * Accessor; This method takes in the month name and returns its number equiv.
 * -----------------------------------------------------------------------------
 * Parameters: const string &
 * -----------------------------------------------------------------------------
 * Return: unsigned
 ******************************************************************************/
    unsigned number(const string &mn) const;        // IN - month (word)
};

#endif // DATE_H
