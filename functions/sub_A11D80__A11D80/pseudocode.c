float *sub_A11D80()
{
  int v0; // ecx
  float *result; // eax

  v0 = 0xF; /*0xa11d82*/
  result = &flt_B474CC[0xD]; /*0xa11d87*/
  do /*0xa11d9e*/
  {
    result[0xFFFFFFFE] = 0.0; /*0xa11d8c*/
    result += 4; /*0xa11d8f*/
    --v0; /*0xa11d92*/
    result[0xFFFFFFFB] = 0.0; /*0xa11d95*/
    result[0xFFFFFFFC] = 0.0; /*0xa11d98*/
    result[0xFFFFFFFD] = 0.0; /*0xa11d9b*/
  }
  while ( v0 >= 0 ); /*0xa11d9e*/
  return result; /*0xa11da2*/
}
