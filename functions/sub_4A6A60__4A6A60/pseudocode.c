double __thiscall sub_4A6A60(float *this, float *a2)
{
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+8h] [ebp+4h]

  if ( !a2 )
    return flt_A30634;
  v3 = *this - *a2;
  v4 = *(this + 1) - a2[1];
  return (float)(v4 * v4 + v3 * v3);
}
