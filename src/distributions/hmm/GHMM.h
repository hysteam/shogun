/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 1999-2006 Soeren Sonnenburg
 * Copyright (C) 1999-2006 Fraunhofer Institute FIRST and Max-Planck-Society
 */

#ifndef _CGHMM_H___
#define _CGHMM_H___

#include "lib/Mathematics.h"
#include "features/Features.h"
#include "distributions/Distribution.h"


class CGHMM : CDistribution
{
	public:
		virtual bool train();
		virtual INT get_num_model_parameters();
		virtual DREAL get_log_model_parameter(INT param_num);
		virtual DREAL get_log_derivative(INT param_num, INT num_example);
		virtual DREAL get_log_likelihood_example(INT num_example);
};
#endif
