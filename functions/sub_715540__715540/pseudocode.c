int __thiscall sub_715540(int this, float a2)
{
  int result; // eax

  *(_WORD *)(this + 8) |= 8u;
  result = *(unsigned __int16 *)(this + 8);
  *(float *)(this + 0x20) = -flt_A7DEB4;
  if ( (result & 1) != 0 )
    *(float *)(this + 0x1C) = a2;
  return result;
}
