/*

    Copyright (C) 2014, The University of Texas at Austin

    This file is part of libflame and is available under the 3-Clause
    BSD license, which can be found in the LICENSE file at the top-level
    directory, or at http://opensource.org/licenses/BSD-3-Clause

*/

#include "FLAME.h"

FLA_Error FLA_Trmm_luh_blk_var1( FLA_Diag diagA, FLA_Obj alpha, FLA_Obj A, FLA_Obj B, fla_trmm_t* cntl );
FLA_Error FLA_Trmm_luh_blk_var2( FLA_Diag diagA, FLA_Obj alpha, FLA_Obj A, FLA_Obj B, fla_trmm_t* cntl );
FLA_Error FLA_Trmm_luh_blk_var3( FLA_Diag diagA, FLA_Obj alpha, FLA_Obj A, FLA_Obj B, fla_trmm_t* cntl );
FLA_Error FLA_Trmm_luh_blk_var4( FLA_Diag diagA, FLA_Obj alpha, FLA_Obj A, FLA_Obj B, fla_trmm_t* cntl );
FLA_Error FLA_Trmm_luh_unb_var1( FLA_Diag diagA, FLA_Obj alpha, FLA_Obj A, FLA_Obj B );
FLA_Error FLA_Trmm_luh_unb_var2( FLA_Diag diagA, FLA_Obj alpha, FLA_Obj A, FLA_Obj B );
FLA_Error FLA_Trmm_luh_unb_var3( FLA_Diag diagA, FLA_Obj alpha, FLA_Obj A, FLA_Obj B );
FLA_Error FLA_Trmm_luh_unb_var4( FLA_Diag diagA, FLA_Obj alpha, FLA_Obj A, FLA_Obj B );

