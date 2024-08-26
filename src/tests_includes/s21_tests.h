#ifndef S21_TESTS_H
#define S21_TESTS_H

#include <check.h>
#include <inttypes.h>
#include <stdio.h>
#include <string.h>

#include "../s21_decimal.h"

char *decimal_to_string(s21_decimal num);
Suite *suite_add(void);
Suite *suite_sub(void);
Suite *suite_mul(void);
Suite *suite_div(void);
Suite *suite_is_less(void);
Suite *suite_is_less_or_equal(void);
Suite *suite_is_greater(void);
Suite *suite_is_greater_or_equal(void);
Suite *suite_is_equal(void);
Suite *suite_is_not_equal(void);
Suite *suite_from_int_to_decimal(void);
Suite *suite_from_decimal_to_int(void);
Suite *suite_from_float_to_decimal(void);
Suite *suite_from_decimal_to_float(void);
Suite *suite_floor(void);
Suite *suite_round(void);
Suite *suite_truncate(void);
Suite *suite_negate(void);

void run_tests(void);
void run_testcase(Suite *testcase);

#endif