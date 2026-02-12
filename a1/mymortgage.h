#ifndef MYMORTGAGE_H
#define MYMORTGAGE_H

/**
 * Compute the monthly payment of given mortgage principal, 
 * annual interest rate (%), and mortgage years.
 *
 * @param principal_amount - float type
 * @param annual_interest_rate - percentage value (e.g. 5 means 5%)
 * @param years - number of mortgage years
 * @return - monthly payment
 */
float monthly_payment(float principal_amount, float annual_interest_rate, int years);

/**
 * Determine the total payment of loan given mortgage principal,
 * annual interest rate (%), and mortgage years.
 *
 * @param principal_amount - float type
 * @param annual_interest_rate - percentage value (e.g. 5 means 5%)
 * @param years - number of mortgage years
 * @return - total payment
 */
float total_payment(float principal_amount, float annual_interest_rate, int years);

/**
 * Determine the total interest paid for the loan given mortgage principal,
 * annual interest rate (%), and mortgage years.
 *
 * @param principal_amount - float type
 * @param annual_interest_rate - percentage value (e.g. 5 means 5%)
 * @param years - number of mortgage years
 * @return - total interest paid
 */
float total_interest(float principal_amount, float annual_interest_rate, int years);

#endif