double __thiscall sub_4ACDE0(float *this, float a2)
{
  float v3; // [esp+8h] [ebp+4h]
  float v4; // [esp+8h] [ebp+4h]

  if ( *(this + 0xF) <= 0.0 )
    return 1.0;
  v3 = flt_B3F9A0 * a2 * *(this + 0x10);
  v4 = sin(v3);
  return (float)(v4 * *(this + 0xF));
}
