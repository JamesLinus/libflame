
#include "FLAME.h"

FLA_Error FLA_CAQR2_UT_internal_check( FLA_Obj B, FLA_Obj D, FLA_Obj T, fla_caqr2ut_t* cntl )
{
	FLA_Error e_val;

	// Abort if the control structure is NULL.
	e_val = FLA_Check_null_pointer( ( void* ) cntl );
	FLA_Check_error_code( e_val );

	// Verify that the object element types are identical.
	e_val = FLA_Check_identical_object_elemtype( B, D );
	FLA_Check_error_code( e_val );

	e_val = FLA_Check_identical_object_elemtype( B, T );
	FLA_Check_error_code( e_val );

	// Verify conformality between all the objects. This check works regardless
	// of whether the element type is FLA_MATRIX or FLA_SCALAR because the
	// element length and width are used instead of scalar length and width.
	e_val = FLA_Check_object_width_equals( B, FLA_Obj_width( B ) );
	FLA_Check_error_code( e_val );

	e_val = FLA_Check_object_width_equals( D, FLA_Obj_width( D ) );
	FLA_Check_error_code( e_val );

	return FLA_SUCCESS;
}
