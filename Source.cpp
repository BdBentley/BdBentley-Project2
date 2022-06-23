#include <iostream>

#include "InvestmentAccount.h"

using namespace std;

int main()

{

    while (1)

    {

        //Print the heading

        cout << "#####################################" << endl;

        cout << "#############Data Input##############" << endl;

        cout << "Initial Investment Amount: " << endl;

        cout << "Monthly Deposit: " << endl;

        cout << "Annual Interest: " << endl;

        cout << "Number of years: " << endl;

        // system("PAUSE");

        system("read -p 'Press Enter to continue . . .' var");

        cout << endl;

        //Prompt user for input

        cout << "#####################################" << endl;

        cout << "#############Data Input##############" << endl;

        cout << "Initial Investment Amount: $";

        double investment, monthlydeposit, interestrate;

        int years;

        cin >> investment;

        while (investment > 0) {

            cout << "Monthly Deposit: $";

            cin >> monthlydeposit;

            cout << "Annual Interest: %";

            cin >> interestrate;

            cout << "Number of years: ";

            cin >> years;



            // system("PAUSE");

            system("read -p 'Press Enter to continue . . .' var");



            //Create InvestmentAccount object 

            InvestmentAccount myInvestmentAccount = InvestmentAccount(investment, monthlydeposit, interestrate, years);

            cout << endl;

            //Call the report methods.

            myInvestmentAccount.reportNoMonthlyDeposits();

            cout << endl;



            //If the monthly deposit is greater than 1, call the report.

            if (monthlydeposit > 0) {

                myInvestmentAccount.reportWithMonthlyDeposits();

            }



            //Does the user want another go?

            cout << endl << "Do you want to try another? (y/n): ";

            string choice;

            cin >> choice;

            //Break loop if the user is done with the program

            if (choice != "y") {

                break;

            }

            cout << endl;

    }

    return 0;

}