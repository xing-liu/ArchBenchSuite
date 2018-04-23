/******************************************************************************
** Copyright (c) 2013-2018, Alexander Heinecke                               **
** All rights reserved.                                                      **
**                                                                           **
** Redistribution and use in source and binary forms, with or without        **
** modification, are permitted provided that the following conditions        **
** are met:                                                                  **
** 1. Redistributions of source code must retain the above copyright         **
**    notice, this list of conditions and the following disclaimer.          **
** 2. Redistributions in binary form must reproduce the above copyright      **
**    notice, this list of conditions and the following disclaimer in the    **
**    documentation and/or other materials provided with the distribution.   **
** 3. Neither the name of the copyright holder nor the names of its          **
**    contributors may be used to endorse or promote products derived        **
**    from this software without specific prior written permission.          **
**                                                                           **
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS       **
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT         **
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR     **
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT      **
** HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,    **
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED  **
** TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR    **
** PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF    **
** LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING      **
** NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS        **
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.              **
******************************************************************************/

void gflops_double_qfma(double* data) {
  std::cout << "QFMA is not available on this architecture" << std::endl;
}

void gflops_double_fma(double* data) {
  __asm__ __volatile__("mov x0, %0\n\t" 
                       "ld1 {v0.2d}, [x0]\n\t"
                       "ld1 {v1.2d}, [x0]\n\t"
                       "ld1 {v2.2d}, [x0]\n\t"
                       "ld1 {v3.2d}, [x0]\n\t"
                       "ld1 {v4.2d}, [x0]\n\t"
                       "ld1 {v5.2d}, [x0]\n\t"
                       "ld1 {v6.2d}, [x0]\n\t"
                       "ld1 {v7.2d}, [x0]\n\t"
                       "ld1 {v8.2d}, [x0]\n\t"
                       "ld1 {v9.2d}, [x0]\n\t"
                       "ld1 {v10.2d}, [x0]\n\t"
                       "ld1 {v11.2d}, [x0]\n\t"
                       "ld1 {v12.2d}, [x0]\n\t"
                       "ld1 {v13.2d}, [x0]\n\t"
                       "ld1 {v14.2d}, [x0]\n\t"
                       "ld1 {v15.2d}, [x0]\n\t"
                       "ld1 {v16.2d}, [x0]\n\t"
                       "ld1 {v17.2d}, [x0]\n\t"
                       "ld1 {v18.2d}, [x0]\n\t"
                       "ld1 {v19.2d}, [x0]\n\t"
                       "ld1 {v20.2d}, [x0]\n\t"
                       "ld1 {v21.2d}, [x0]\n\t"
                       "ld1 {v22.2d}, [x0]\n\t"
                       "ld1 {v23.2d}, [x0]\n\t"
                       "ld1 {v24.2d}, [x0]\n\t"
                       "ld1 {v25.2d}, [x0]\n\t"
                       "ld1 {v26.2d}, [x0]\n\t"
                       "ld1 {v27.2d}, [x0]\n\t"
                       "ld1 {v28.2d}, [x0]\n\t"
                       "ld1 {v29.2d}, [x0]\n\t"
                       "ld1 {v30.2d}, [x0]\n\t"
                       "ld1 {v31.2d}, [x0]\n\t"
                       "mov x1, #100\n\t"
                       "mul x1, x1, x1\n\t"
                       "mul x1, x1, x1\n\t"
                       "mylabel_dp_fma:\n\t"
                       "fmla  v0.2d,  v0.2d,  v0.2d\n\t"
                       "fmla  v1.2d,  v1.2d,  v1.2d\n\t"
                       "fmla  v2.2d,  v2.2d,  v2.2d\n\t"
                       "fmla  v3.2d,  v3.2d,  v3.2d\n\t"
                       "fmla  v4.2d,  v4.2d,  v4.2d\n\t"
                       "fmla  v5.2d,  v5.2d,  v5.2d\n\t"
                       "fmla  v6.2d,  v6.2d,  v6.2d\n\t"
                       "fmla  v7.2d,  v7.2d,  v7.2d\n\t"
                       "fmla  v8.2d,  v8.2d,  v8.2d\n\t"
                       "fmla  v9.2d,  v9.2d,  v9.2d\n\t"
                       "fmla v10.2d, v10.2d, v10.2d\n\t"
                       "fmla v11.2d, v11.2d, v11.2d\n\t"
                       "fmla v12.2d, v12.2d, v12.2d\n\t"
                       "fmla v13.2d, v13.2d, v13.2d\n\t"
                       "fmla v14.2d, v14.2d, v14.2d\n\t"
                       "fmla v15.2d, v15.2d, v15.2d\n\t"
                       "fmla v16.2d, v16.2d, v16.2d\n\t"
                       "fmla v17.2d, v17.2d, v17.2d\n\t"
                       "fmla v18.2d, v18.2d, v18.2d\n\t"
                       "fmla v19.2d, v19.2d, v19.2d\n\t"
                       "fmla v20.2d, v20.2d, v20.2d\n\t"
                       "fmla v21.2d, v21.2d, v21.2d\n\t"
                       "fmla v22.2d, v22.2d, v22.2d\n\t"
                       "fmla v23.2d, v23.2d, v23.2d\n\t"
                       "fmla v24.2d, v24.2d, v24.2d\n\t"
                       "fmla v25.2d, v25.2d, v25.2d\n\t"
                       "fmla v26.2d, v26.2d, v26.2d\n\t"
                       "fmla v27.2d, v27.2d, v27.2d\n\t"
                       "fmla v28.2d, v28.2d, v28.2d\n\t"
                       "fmla v29.2d, v29.2d, v29.2d\n\t"
                       "fmla v30.2d, v30.2d, v30.2d\n\t"
                       "fmla v31.2d, v31.2d, v31.2d\n\t"
                       "sub x1, x1, #1\n\t"
                       "cbnz x1, mylabel_dp_fma\n\t"
                        : : "r" (data) : "x0","x1","v0","v1","v2","v4","v5","v6","v7","v8","v9","v10","v11","v12","v13","v14","v15","v16","v17","v18","v19","v20","v21","v22","v23","v24","v25","v26","v27","v28","v29","v30","v31"); 
}

void gflops_double_mul(double* data) {
  __asm__ __volatile__("mov x0, %0\n\t" 
                       "ld1 {v0.2d}, [x0]\n\t"
                       "ld1 {v1.2d}, [x0]\n\t"
                       "ld1 {v2.2d}, [x0]\n\t"
                       "ld1 {v3.2d}, [x0]\n\t"
                       "ld1 {v4.2d}, [x0]\n\t"
                       "ld1 {v5.2d}, [x0]\n\t"
                       "ld1 {v6.2d}, [x0]\n\t"
                       "ld1 {v7.2d}, [x0]\n\t"
                       "ld1 {v8.2d}, [x0]\n\t"
                       "ld1 {v9.2d}, [x0]\n\t"
                       "ld1 {v10.2d}, [x0]\n\t"
                       "ld1 {v11.2d}, [x0]\n\t"
                       "ld1 {v12.2d}, [x0]\n\t"
                       "ld1 {v13.2d}, [x0]\n\t"
                       "ld1 {v14.2d}, [x0]\n\t"
                       "ld1 {v15.2d}, [x0]\n\t"
                       "ld1 {v16.2d}, [x0]\n\t"
                       "ld1 {v17.2d}, [x0]\n\t"
                       "ld1 {v18.2d}, [x0]\n\t"
                       "ld1 {v19.2d}, [x0]\n\t"
                       "ld1 {v20.2d}, [x0]\n\t"
                       "ld1 {v21.2d}, [x0]\n\t"
                       "ld1 {v22.2d}, [x0]\n\t"
                       "ld1 {v23.2d}, [x0]\n\t"
                       "ld1 {v24.2d}, [x0]\n\t"
                       "ld1 {v25.2d}, [x0]\n\t"
                       "ld1 {v26.2d}, [x0]\n\t"
                       "ld1 {v27.2d}, [x0]\n\t"
                       "ld1 {v28.2d}, [x0]\n\t"
                       "ld1 {v29.2d}, [x0]\n\t"
                       "ld1 {v30.2d}, [x0]\n\t"
                       "ld1 {v31.2d}, [x0]\n\t"
                       "mov x1, #100\n\t"
                       "mul x1, x1, x1\n\t"
                       "mul x1, x1, x1\n\t"
                       "mylabel_dp_mul:\n\t"
                       "fmul  v0.2d,  v0.2d,  v0.2d\n\t"
                       "fmul  v1.2d,  v1.2d,  v1.2d\n\t"
                       "fmul  v2.2d,  v2.2d,  v2.2d\n\t"
                       "fmul  v3.2d,  v3.2d,  v3.2d\n\t"
                       "fmul  v4.2d,  v4.2d,  v4.2d\n\t"
                       "fmul  v5.2d,  v5.2d,  v5.2d\n\t"
                       "fmul  v6.2d,  v6.2d,  v6.2d\n\t"
                       "fmul  v7.2d,  v7.2d,  v7.2d\n\t"
                       "fmul  v8.2d,  v8.2d,  v8.2d\n\t"
                       "fmul  v9.2d,  v9.2d,  v9.2d\n\t"
                       "fmul v10.2d, v10.2d, v10.2d\n\t"
                       "fmul v11.2d, v11.2d, v11.2d\n\t"
                       "fmul v12.2d, v12.2d, v12.2d\n\t"
                       "fmul v13.2d, v13.2d, v13.2d\n\t"
                       "fmul v14.2d, v14.2d, v14.2d\n\t"
                       "fmul v15.2d, v15.2d, v15.2d\n\t"
                       "fmul v16.2d, v16.2d, v16.2d\n\t"
                       "fmul v17.2d, v17.2d, v17.2d\n\t"
                       "fmul v18.2d, v18.2d, v18.2d\n\t"
                       "fmul v19.2d, v19.2d, v19.2d\n\t"
                       "fmul v20.2d, v20.2d, v20.2d\n\t"
                       "fmul v21.2d, v21.2d, v21.2d\n\t"
                       "fmul v22.2d, v22.2d, v22.2d\n\t"
                       "fmul v23.2d, v23.2d, v23.2d\n\t"
                       "fmul v24.2d, v24.2d, v24.2d\n\t"
                       "fmul v25.2d, v25.2d, v25.2d\n\t"
                       "fmul v26.2d, v26.2d, v26.2d\n\t"
                       "fmul v27.2d, v27.2d, v27.2d\n\t"
                       "fmul v28.2d, v28.2d, v28.2d\n\t"
                       "fmul v29.2d, v29.2d, v29.2d\n\t"
                       "fmul v30.2d, v30.2d, v30.2d\n\t"
                       "fmul v31.2d, v31.2d, v31.2d\n\t"
                       "sub x1, x1, #1\n\t"
                       "cbnz x1, mylabel_dp_mul\n\t"
                        : : "r" (data) : "x0","x1","v0","v1","v2","v4","v5","v6","v7","v8","v9","v10","v11","v12","v13","v14","v15","v16","v17","v18","v19","v20","v21","v22","v23","v24","v25","v26","v27","v28","v29","v30","v31"); 
}

void gflops_double_add(double* data) {
  __asm__ __volatile__("mov x0, %0\n\t" 
                       "ld1 {v0.2d}, [x0]\n\t"
                       "ld1 {v1.2d}, [x0]\n\t"
                       "ld1 {v2.2d}, [x0]\n\t"
                       "ld1 {v3.2d}, [x0]\n\t"
                       "ld1 {v4.2d}, [x0]\n\t"
                       "ld1 {v5.2d}, [x0]\n\t"
                       "ld1 {v6.2d}, [x0]\n\t"
                       "ld1 {v7.2d}, [x0]\n\t"
                       "ld1 {v8.2d}, [x0]\n\t"
                       "ld1 {v9.2d}, [x0]\n\t"
                       "ld1 {v10.2d}, [x0]\n\t"
                       "ld1 {v11.2d}, [x0]\n\t"
                       "ld1 {v12.2d}, [x0]\n\t"
                       "ld1 {v13.2d}, [x0]\n\t"
                       "ld1 {v14.2d}, [x0]\n\t"
                       "ld1 {v15.2d}, [x0]\n\t"
                       "ld1 {v16.2d}, [x0]\n\t"
                       "ld1 {v17.2d}, [x0]\n\t"
                       "ld1 {v18.2d}, [x0]\n\t"
                       "ld1 {v19.2d}, [x0]\n\t"
                       "ld1 {v20.2d}, [x0]\n\t"
                       "ld1 {v21.2d}, [x0]\n\t"
                       "ld1 {v22.2d}, [x0]\n\t"
                       "ld1 {v23.2d}, [x0]\n\t"
                       "ld1 {v24.2d}, [x0]\n\t"
                       "ld1 {v25.2d}, [x0]\n\t"
                       "ld1 {v26.2d}, [x0]\n\t"
                       "ld1 {v27.2d}, [x0]\n\t"
                       "ld1 {v28.2d}, [x0]\n\t"
                       "ld1 {v29.2d}, [x0]\n\t"
                       "ld1 {v30.2d}, [x0]\n\t"
                       "ld1 {v31.2d}, [x0]\n\t"
                       "mov x1, #100\n\t"
                       "mul x1, x1, x1\n\t"
                       "mul x1, x1, x1\n\t"
                       "mylabel_dp_add:\n\t"
                       "fadd  v0.2d,  v0.2d,  v0.2d\n\t"
                       "fadd  v1.2d,  v1.2d,  v1.2d\n\t"
                       "fadd  v2.2d,  v2.2d,  v2.2d\n\t"
                       "fadd  v3.2d,  v3.2d,  v3.2d\n\t"
                       "fadd  v4.2d,  v4.2d,  v4.2d\n\t"
                       "fadd  v5.2d,  v5.2d,  v5.2d\n\t"
                       "fadd  v6.2d,  v6.2d,  v6.2d\n\t"
                       "fadd  v7.2d,  v7.2d,  v7.2d\n\t"
                       "fadd  v8.2d,  v8.2d,  v8.2d\n\t"
                       "fadd  v9.2d,  v9.2d,  v9.2d\n\t"
                       "fadd v10.2d, v10.2d, v10.2d\n\t"
                       "fadd v11.2d, v11.2d, v11.2d\n\t"
                       "fadd v12.2d, v12.2d, v12.2d\n\t"
                       "fadd v13.2d, v13.2d, v13.2d\n\t"
                       "fadd v14.2d, v14.2d, v14.2d\n\t"
                       "fadd v15.2d, v15.2d, v15.2d\n\t"
                       "fadd v16.2d, v16.2d, v16.2d\n\t"
                       "fadd v17.2d, v17.2d, v17.2d\n\t"
                       "fadd v18.2d, v18.2d, v18.2d\n\t"
                       "fadd v19.2d, v19.2d, v19.2d\n\t"
                       "fadd v20.2d, v20.2d, v20.2d\n\t"
                       "fadd v21.2d, v21.2d, v21.2d\n\t"
                       "fadd v22.2d, v22.2d, v22.2d\n\t"
                       "fadd v23.2d, v23.2d, v23.2d\n\t"
                       "fadd v24.2d, v24.2d, v24.2d\n\t"
                       "fadd v25.2d, v25.2d, v25.2d\n\t"
                       "fadd v26.2d, v26.2d, v26.2d\n\t"
                       "fadd v27.2d, v27.2d, v27.2d\n\t"
                       "fadd v28.2d, v28.2d, v28.2d\n\t"
                       "fadd v29.2d, v29.2d, v29.2d\n\t"
                       "fadd v30.2d, v30.2d, v30.2d\n\t"
                       "fadd v31.2d, v31.2d, v31.2d\n\t"
                       "sub x1, x1, #1\n\t"
                       "cbnz x1, mylabel_dp_add\n\t"
                        : : "r" (data) : "x0","x1","v0","v1","v2","v4","v5","v6","v7","v8","v9","v10","v11","v12","v13","v14","v15","v16","v17","v18","v19","v20","v21","v22","v23","v24","v25","v26","v27","v28","v29","v30","v31"); 
}

void gflops_double_madd(double* data) {
  __asm__ __volatile__("mov x0, %0\n\t" 
                       "ld1 {v0.2d}, [x0]\n\t"
                       "ld1 {v1.2d}, [x0]\n\t"
                       "ld1 {v2.2d}, [x0]\n\t"
                       "ld1 {v3.2d}, [x0]\n\t"
                       "ld1 {v4.2d}, [x0]\n\t"
                       "ld1 {v5.2d}, [x0]\n\t"
                       "ld1 {v6.2d}, [x0]\n\t"
                       "ld1 {v7.2d}, [x0]\n\t"
                       "ld1 {v8.2d}, [x0]\n\t"
                       "ld1 {v9.2d}, [x0]\n\t"
                       "ld1 {v10.2d}, [x0]\n\t"
                       "ld1 {v11.2d}, [x0]\n\t"
                       "ld1 {v12.2d}, [x0]\n\t"
                       "ld1 {v13.2d}, [x0]\n\t"
                       "ld1 {v14.2d}, [x0]\n\t"
                       "ld1 {v15.2d}, [x0]\n\t"
                       "ld1 {v16.2d}, [x0]\n\t"
                       "ld1 {v17.2d}, [x0]\n\t"
                       "ld1 {v18.2d}, [x0]\n\t"
                       "ld1 {v19.2d}, [x0]\n\t"
                       "ld1 {v20.2d}, [x0]\n\t"
                       "ld1 {v21.2d}, [x0]\n\t"
                       "ld1 {v22.2d}, [x0]\n\t"
                       "ld1 {v23.2d}, [x0]\n\t"
                       "ld1 {v24.2d}, [x0]\n\t"
                       "ld1 {v25.2d}, [x0]\n\t"
                       "ld1 {v26.2d}, [x0]\n\t"
                       "ld1 {v27.2d}, [x0]\n\t"
                       "ld1 {v28.2d}, [x0]\n\t"
                       "ld1 {v29.2d}, [x0]\n\t"
                       "ld1 {v30.2d}, [x0]\n\t"
                       "ld1 {v31.2d}, [x0]\n\t"
                       "mov x1, #100\n\t"
                       "mul x1, x1, x1\n\t"
                       "mul x1, x1, x1\n\t"
                       "mylabel_dp_madd:\n\t"
                       "fadd  v0.2d,  v0.2d,  v0.2d\n\t"
                       "fmul  v1.2d,  v1.2d,  v1.2d\n\t"
                       "fadd  v2.2d,  v2.2d,  v2.2d\n\t"
                       "fmul  v3.2d,  v3.2d,  v3.2d\n\t"
                       "fadd  v4.2d,  v4.2d,  v4.2d\n\t"
                       "fmul  v5.2d,  v5.2d,  v5.2d\n\t"
                       "fadd  v6.2d,  v6.2d,  v6.2d\n\t"
                       "fmul  v7.2d,  v7.2d,  v7.2d\n\t"
                       "fadd  v8.2d,  v8.2d,  v8.2d\n\t"
                       "fmul  v9.2d,  v9.2d,  v9.2d\n\t"
                       "fadd v10.2d, v10.2d, v10.2d\n\t"
                       "fmul v11.2d, v11.2d, v11.2d\n\t"
                       "fadd v12.2d, v12.2d, v12.2d\n\t"
                       "fmul v13.2d, v13.2d, v13.2d\n\t"
                       "fadd v14.2d, v14.2d, v14.2d\n\t"
                       "fmul v15.2d, v15.2d, v15.2d\n\t"
                       "fadd v16.2d, v16.2d, v16.2d\n\t"
                       "fmul v17.2d, v17.2d, v17.2d\n\t"
                       "fadd v18.2d, v18.2d, v18.2d\n\t"
                       "fmul v19.2d, v19.2d, v19.2d\n\t"
                       "fadd v20.2d, v20.2d, v20.2d\n\t"
                       "fmul v21.2d, v21.2d, v21.2d\n\t"
                       "fadd v22.2d, v22.2d, v22.2d\n\t"
                       "fmul v23.2d, v23.2d, v23.2d\n\t"
                       "fadd v24.2d, v24.2d, v24.2d\n\t"
                       "fmul v25.2d, v25.2d, v25.2d\n\t"
                       "fadd v26.2d, v26.2d, v26.2d\n\t"
                       "fmul v27.2d, v27.2d, v27.2d\n\t"
                       "fadd v28.2d, v28.2d, v28.2d\n\t"
                       "fmul v29.2d, v29.2d, v29.2d\n\t"
                       "fadd v30.2d, v30.2d, v30.2d\n\t"
                       "fmul v31.2d, v31.2d, v31.2d\n\t"
                       "sub x1, x1, #1\n\t"
                       "cbnz x1, mylabel_dp_madd\n\t"
                        : : "r" (data) : "x0","x1","v0","v1","v2","v4","v5","v6","v7","v8","v9","v10","v11","v12","v13","v14","v15","v16","v17","v18","v19","v20","v21","v22","v23","v24","v25","v26","v27","v28","v29","v30","v31"); 
}

