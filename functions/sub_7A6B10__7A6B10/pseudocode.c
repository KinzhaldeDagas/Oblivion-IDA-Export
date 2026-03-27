float *__thiscall sub_7A6B10(const void *this, float *a2, float *a3)
{
  float *result; // eax

  qmemcpy(a2, this, 0x30u);
  if ( *a2 > (double)*a3 )
    *a2 = *a3;
  if ( a2[1] > (double)a3[1] )
    a2[1] = a3[1];
  if ( a2[2] > (double)a3[2] )
    a2[2] = a3[2];
  if ( a2[6] < (double)*a3 )
    a2[6] = *a3;
  if ( a2[7] < (double)a3[1] )
    a2[7] = a3[1];
  result = a2;
  if ( a2[8] < (double)a3[2] )
    a2[8] = a3[2];
  return result;
}
