/*
 * Copyright (c) 2012-2014 Christian Hansen <chansen@cpan.org>
 * <https://github.com/chansen/c-dt>
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met: 
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution. 
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __DT_NAVIGATE_H__
#define __DT_NAVIGATE_H__
#include "dt_core.h"

#ifdef __cplusplus
extern "C" {
#endif

dt_t    dt_start_of_year        (dt_t dt, int offset);
dt_t    dt_start_of_quarter     (dt_t dt, int offset);
dt_t    dt_start_of_month       (dt_t dt, int offset);
dt_t    dt_start_of_week        (dt_t dt, dt_dow_t first);

dt_t    dt_end_of_year          (dt_t dt, int offset);
dt_t    dt_end_of_quarter       (dt_t dt, int offset);
dt_t    dt_end_of_month         (dt_t dt, int offset);
dt_t    dt_end_of_week          (dt_t dt, dt_dow_t first);

#ifdef __cplusplus
}
#endif
#endif

