float *sub_A11760()
{
  int v0; // ecx
  float *result; // eax

  v0 = 0x22; /*0xa11762*/
  result = flt_B464A0; /*0xa11767*/
  do /*0xa1177e*/
  {
    result[0xFFFFFFFE] = 0.0; /*0xa1176c*/
    result += 4; /*0xa1176f*/
    --v0; /*0xa11772*/
    result[0xFFFFFFFB] = 0.0; /*0xa11775*/
    result[0xFFFFFFFC] = 0.0; /*0xa11778*/
    result[0xFFFFFFFD] = 0.0; /*0xa1177b*/
  }
  while ( v0 >= 0 ); /*0xa1177e*/
  return result; /*0xa11782*/
}
