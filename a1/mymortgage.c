/**
 * Compute the monthly payment of given mortgage princile, annual interest rate (%), and mortgage years. 
 *
 * @param principal_amount - float type.
 * @param annual_interest_rate - value of parcentage rate, e.g. 5 means 5%, float type.
 * @param years - number of mortgage year, int type.
 * @return - monthly payment, float type.
 */
float monthly_payment(float principal_amount, float annual_interest_rate, int years) {
    float monthly_rate = annual_interest_rate / (12.0f *100.0f);
    int total_payments = years * 12;
    float pow_val = 1.0f;
    for (int i = 0; i < total_payments; i++) {
        pow_val *= (1.0f + monthly_rate);
    }
    if (monthly_rate == 0.0f) {
        return principal_amount / total_payments;
    }
    return principal_amount * (monthly_rate * pow_val) / (pow_val - 1.0f);
}


/**
 * Determine the total payment of loan given mortgage princile, annual interest rate (%), and mortgage years. 
 *
 * @param principal_amount - float type.
 * @param annual_interest_rate - value of parcentage rate, e.g. 5 means 5%, float type.
 * @param years - number of mortgage year, int type.
 * @return - the total payment of the loan, float type.
 */
float total_payment(float principal_amount, float annual_interest_rate, int years) {
    float monthly_rate = annual_interest_rate / (12.0f *100.0f);
    int total_payments = years * 12;
    if (monthly_rate == 0.0f) {
        return principal_amount;
    }
    float pow_value = 1.0f;
    for (int i = 0; i < total_payments; i++) {
        pow_value *= (1.0f + monthly_rate);
    }
    float monthly_total = principal_amount * (monthly_rate * pow_value) / (pow_value - 1.0f);
    return monthly_total * total_payments;

}

/**
 * Determine the total interested payed for the loan given mortgage princile, annual interest rate (%), and mortgage years. 
 *
 * @param principal_amount - float type.
 * @param annual_interest_rate - value of parcentage rate, e.g. 5 means 5%, float type.
 * @param years - number of mortgage year, int type.
 * @return - the total interest payed by the end of paying off the loan, float type.
 */
float total_interest(float principal_amount, float annual_interest_rate, int years) {
    float monthly_rate = annual_interest_rate / (12.0f *100.0f);
    int total_payments = years * 12;
    if (monthly_rate == 0.0f) {
        return principal_amount;
    }
    float pow_value = 1.0f;
    for (int i = 0; i < total_payments; i++) {
        pow_value *= (1.0f + monthly_rate);
    }
    float monthly_total = principal_amount * (monthly_rate * pow_value) / (pow_value - 1.0f);
    float total_pay =  monthly_total * total_payments;
    return total_pay - principal_amount;

}
