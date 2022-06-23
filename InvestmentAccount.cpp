#include <iomanip>

#include <iostream>

#include "InvestmentAccount.h"

using namespace std;

// Constructor

//Set the values for the class variables.

InvestmentAccount::InvestmentAccount(double investment, double monthDeposit,

    double rate, int years) {

    this->initialDeposit = investment;

    this->monthlyDeposit = monthDeposit;

    this->interestRate = rate;

    this->numberOfYears = years;

}

// Destructor

InvestmentAccount::~InvestmentAccount() {

}

// This will print the report without a monthly deposit.

void InvestmentAccount::reportNoMonthlyDeposits() {

    // This will print the heading.

    cout << "   Balance and Interest without additional Monthly Deposits" << endl;

    cout << "==========================================================================" << endl;

    // Print table heading.

    cout << setw(10) << "Year"

        << setw(20) << "Year End Balance"

        << setw(35) << "Year End Earned Interest Rate" << endl;

    cout << "--------------------------------------------------------------------------" << endl;

    // We will iterate for the current year and accrue interest.

    int currentYear = 1;

    double yearEndBalance = this->initialDeposit;

    while (currentYear <= this->numberOfYears) {

        // Calculate interest.

        double interestEarned = yearEndBalance * this->interestRate / 100;

        // Add the interest to the year end balance.

        yearEndBalance += interestEarned;

        // Print the results for each year.

        cout << right << setw(10) << currentYear << fixed << setprecision(2)

            << setw(20) << yearEndBalance

            << setw(35) << interestEarned << endl;

        // Increment the currentYear by 1.

        currentYear++;

    }

}

//Prints report considering monthly deposit

void InvestmentAccount::reportWithMonthlyDeposits() {

    //Print heading

    cout << "   Balance and Interest without additional Monthly Deposits" << endl;

    cout << "==========================================================================" << endl;

    //Print table heading

    cout << setw(10) << "Year"

        << setw(20) << "Year End Balance"

        << setw(35) << "Year End Earned Interest Rate" << endl;

    cout << "--------------------------------------------------------------------------" << endl;

    //Iterate for given years and calculate interest earned

    int currentYear = 1;

    double yearEndBalance = this->initialDeposit;

    while (currentYear <= this->numberOfYears) {

        //calulate interest monthly and find compoud interest

        int month = 1;

        double interestEarned = 0.0;

        double monethEndBalance = yearEndBalance;

        while (month <= 12) {

            //Add monthly deposit

            monethEndBalance += this->monthlyDeposit;

            //Calculate monthly interest, interest rate is for annual. so divide the rate by 12

            double monthlyinterest = monethEndBalance * this->interestRate / (100 * 12);

            //Add the monthly interest to yearly interest earned

            interestEarned += monthlyinterest;

            // add the interest to monthend balance

            monethEndBalance += monthlyinterest;

            //Increase the month by 1

            month++;

        }

        //After 12 months

        yearEndBalance = monethEndBalance;

        //Print the results

        cout << right << setw(10) << currentYear << fixed << setprecision(2)

            << setw(20) << yearEndBalance

            << setw(35) << interestEarned << endl;

        //Increase the year count by one

        currentYear++;

    }

}