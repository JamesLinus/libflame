
#include "FLAME.h"

extern fla_herk_t* flash_herk_cntl_mm;

FLA_Error FLASH_Herk( FLA_Uplo uplo, FLA_Trans trans, FLA_Obj alpha, FLA_Obj A, FLA_Obj beta, FLA_Obj C )
{
  FLA_Error r_val;

  // Check parameters.
  if ( FLA_Check_error_level() >= FLA_MIN_ERROR_CHECKING )
    FLA_Herk_check( uplo, trans, alpha, A, beta, C );

  // Begin a parallel region.
  FLASH_Queue_begin();
  
  // Enqueue tasks via a SuperMatrix-aware control tree.
  r_val = FLA_Herk_internal( uplo, trans, alpha, A, beta, C, flash_herk_cntl_mm );
  
  // End the parallel region.
  FLASH_Queue_end();

  return r_val;
}
