/*
 * Copyright (C) 2016, 2019 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 */

#include "bench.h"

class LU : public Bench {
  public:
    LU();
    ~LU();
    void make_args(int size);
    void copy_args();
    void clean_args();
    bool test(bool verbose);
    void print_args();
    void print_result();
    void compute();

  private:
    int *ipiv;
    double *x_mat, *r_mat, *l_mat, *u_mat, *p_mat;
    int m, n, lda, mn_min;
    int l_size, u_size, p_size, mat_size;
};
