// ActorProcessManager accumulates a fractional fast-travel/update remainder in flt_B3BCF0; NaN/large values are reset to 0.
int __stdcall sub_673B10(float a1)
{
  int result; // eax

  qword_B3BB2C[0x71] = a1; /*0x673b14*/
  if ( a1 > (double)flt_A3F3D8 ) /*0x673b25*/
    qword_B3BB2C[0x71] = 0.0; /*0x673b29*/
  result = _isnan(qword_B3BB2C[0x71]); /*0x673b3b*/
  if ( result || (result = _finite(qword_B3BB2C[0x71])) == 0 ) /*0x673b5d*/
    qword_B3BB2C[0x71] = 0.0; /*0x673b61*/
  return result; /*0x673b67*/
}
