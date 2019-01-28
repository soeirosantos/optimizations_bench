/*
 * Copyright (C) 2016, 2019 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 */

#include "bench.h"

class Inv : public Bench {
  public:
    Inv();
    ~Inv();
    void make_args(int size);
    void copy_args();
    void clean_args();
    bool test();
    void print_args();
    void print_result();
    void compute();

  private:
    double *x_mat, *r_mat;
    int *ipiv;
    int m, n, lda, mat_size;
};
