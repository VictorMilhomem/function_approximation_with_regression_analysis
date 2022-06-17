#ifndef REGRESSION_H
#define REGRESSION_H

#define PERCENT 37
#define COEF_R 1
#define R_SQUARE 2

#define ABS(x) ((x) >= 0 ? (x): (x * -1))

void linear_regression(double [], double [], int );
void log_regression(double [], double [], int );
void power_regression(double [], double [], int );
void ab_exponential_regression(double [], double [], int );
void hyperbolic_regression(double [], double [], int);
void exponential_regression(double [], double [], int);

#endif