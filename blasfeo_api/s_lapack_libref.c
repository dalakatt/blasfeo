/**************************************************************************************************
*                                                                                                 *
* This file is part of BLASFEO.                                                                   *
*                                                                                                 *
* BLASFEO -- BLAS For Embedded Optimization.                                                      *
* Copyright (C) 2016-2018 by Gianluca Frison.                                                     *
* Developed at IMTEK (University of Freiburg) under the supervision of Moritz Diehl.              *
* All rights reserved.                                                                            *
*                                                                                                 *
* This program is free software: you can redistribute it and/or modify                            *
* it under the terms of the GNU General Public License as published by                            *
* the Free Software Foundation, either version 3 of the License, or                               *
* (at your option) any later version                                                              *.
*                                                                                                 *
* This program is distributed in the hope that it will be useful,                                 *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                                   *
* GNU General Public License for more details.                                                    *
*                                                                                                 *
* You should have received a copy of the GNU General Public License                               *
* along with this program.  If not, see <https://www.gnu.org/licenses/>.                          *
*                                                                                                 *
* The authors designate this particular file as subject to the "Classpath" exception              *
* as provided by the authors in the LICENSE file that accompained this code.                      *
*                                                                                                 *
* Author: Gianluca Frison, gianluca.frison (at) imtek.uni-freiburg.de                             *
*                                                                                                 *
**************************************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "../include/blasfeo_common.h"
#include "../include/blasfeo_s_aux.h"

#define REAL float

#define STRMAT blasfeo_smat_ref
#define STRVEC blasfeo_svec_ref

#define GELQF_PD_DA_LIBSTR blasfeo_sgelqf_pd_da_ref
#define GELQF_PD_LA_LIBSTR blasfeo_sgelqf_pd_la_ref
#define GELQF_PD_LLA_LIBSTR blasfeo_sgelqf_pd_lla_ref
#define GELQF_PD_LIBSTR blasfeo_sgelqf_pd_ref
#define GELQF_LIBSTR blasfeo_sgelqf_ref
#define GELQF_WORK_SIZE_LIBSTR blasfeo_sgelqf_worksize_ref
#define GEQRF_LIBSTR blasfeo_sgeqrf_ref
#define GEQRF_WORK_SIZE_LIBSTR blasfeo_sgeqrf_worksize_ref
#define GETF2_NOPIVOT sgetf2_nopivot_ref
#define GETRF_NOPIVOT_LIBSTR blasfeo_sgetrf_nopivot_ref
#define GETRF_LIBSTR blasfeo_sgetrf_rowpivot_ref
#define POTRF_L_LIBSTR blasfeo_spotrf_l_ref
#define POTRF_L_MN_LIBSTR blasfeo_spotrf_l_mn_ref
#define PSTRF_L_LIBSTR spstrf_l_libstr_ref
#define SYRK_POTRF_LN_LIBSTR blasfeo_ssyrk_spotrf_ln_ref
#define SYRK_POTRF_LN_MN_LIBSTR blasfeo_ssyrk_spotrf_ln_mn_ref


#include "x_lapack_lib.c"
