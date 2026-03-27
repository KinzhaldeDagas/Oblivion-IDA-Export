int __thiscall sub_787C10(_DWORD *this, float a2)
{
  int v2; // eax
  double v3; // st7
  int v4; // esi
  int result; // eax

  if ( flt_A30634 == a2 )
  {
    v2 = *(this + 0xD);
    if ( v2 )
      v3 = *(float *)(v2 + 0x10);
    else
      v3 = *(float *)(*this + 0x14);
    a2 = v3;
  }
  v4 = *(unsigned __int16 *)(*this + 0x70);
  result = (unsigned __int16)Double_To_SInt32((1.0 - a2) * (double)v4);
  if ( (__int16)result == v4 )
    return (unsigned __int16)result - 1;
  return result;
}
