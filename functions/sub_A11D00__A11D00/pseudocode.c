float *sub_A11D00()
{
  int v0; // ecx
  float *result; // eax

  v0 = 0x30; /*0xa11d02*/
  result = &flt_B46F80; /*0xa11d07*/
  do /*0xa11d1e*/
  {
    result[0xFFFFFFFE] = 0.0; /*0xa11d0c*/
    result += 4; /*0xa11d0f*/
    --v0; /*0xa11d12*/
    result[0xFFFFFFFB] = 0.0; /*0xa11d15*/
    result[0xFFFFFFFC] = 0.0; /*0xa11d18*/
    result[0xFFFFFFFD] = 0.0; /*0xa11d1b*/
  }
  while ( v0 >= 0 ); /*0xa11d1e*/
  return result; /*0xa11d22*/
}
