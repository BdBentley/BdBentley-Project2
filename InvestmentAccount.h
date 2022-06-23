

#ifndef INVESTMENTACCOUNT_H_

#define INVESTMENTACCOUNT_H_


// Create the InvestmentAccount class
class InvestmentAccount {

// Setup the public vars
public:

    InvestmentAccount(double investment, double monthDeposit, double rate, int years);

    virtual ~InvestmentAccount();

    void reportNoMonthlyDeposits();

    void reportWithMonthlyDeposits();


// Setup the private vars
private:

    double initialDeposit;

    double monthlyDeposit;

    double interestRate;

    int numberOfYears;

};

#endif
