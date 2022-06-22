#ifndef REGRESSION_H
#define REGRESSION_H

#define PERCENT 37
#define COEF_R 1
#define R_SQUARE 2

#define LIN_FLAG 1
#define LOG_FLAG 2
#define POW_FLAG 3
#define AB_FLAG 4
#define HYP_FLAG 5
#define EXP_FLAG 6


#define ABS(x) ((x) >= 0 ? (x): (x * -1))

extern void linear_regression(double [], double [], int );
extern void log_regression(double [], double [], int );
extern void power_regression(double [], double [], int );
extern void ab_exponential_regression(double [], double [], int );
extern void hyperbolic_regression(double [], double [], int);
extern void exponential_regression(double [], double [], int);

#endif