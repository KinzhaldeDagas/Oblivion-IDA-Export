int __thiscall sub_6D18A0(_DWORD *this, float *a2)
{
  int result; // eax
  double v3; // st7

  result = *(this + 0x14);
  v3 = (double)result;
  if ( result < 0 )
    v3 = v3 + flt_A2FC78;
  *a2 = v3;
  return result;
}
