// Oblivion stVec(size) constructor: zeros all five float slots, clamps only sizes greater than 5 down to 5, and stores the resulting logical size. Exact body corroborated by RT4.1 Vec.cpp.
OB_stVec_010201A0 *__thiscall OB_stVec_ctor_size_010201A0(OB_stVec_010201A0 *this, int size)
{
  OB_stVec_010201A0 *result; // eax
  int v3; // ecx

  result = this; /*0x78e572*/
  v3 = size; /*0x78e574*/
  result->data[4] = 0.0; /*0x78e578*/
  result->data[3] = 0.0; /*0x78e57e*/
  result->data[2] = 0.0; /*0x78e581*/
  result->data[1] = 0.0; /*0x78e584*/
  result->data[0] = 0.0; /*0x78e587*/
  if ( size > 5 ) /*0x78e589*/
    v3 = 5; /*0x78e58b*/
  result->size = v3; /*0x78e590*/
  return result; /*0x78e593*/
}
