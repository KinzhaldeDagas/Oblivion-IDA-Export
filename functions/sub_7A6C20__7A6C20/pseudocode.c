float *__thiscall sub_7A6C20(float *this, float *a2, float *a3)
{
  float *result; // eax

  qmemcpy(a2, this, 0x30u);
  if ( *this > (double)*a3 )
    *a2 = *a3;
  if ( *(this + 6) < (double)a3[6] )
    a2[6] = a3[6];
  if ( *(this + 1) > (double)a3[1] )
    a2[1] = a3[1];
  if ( *(this + 7) < (double)a3[7] )
    a2[7] = a3[7];
  if ( *(this + 2) > (double)a3[2] )
    a2[2] = a3[2];
  result = a2;
  if ( *(this + 8) < (double)a3[8] )
    a2[8] = a3[8];
  return result;
}
