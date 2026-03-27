int __thiscall sub_787CD0(_DWORD *this, float a2)
{
  double v2; // st7
  int v3; // eax
  double v4; // st7
  double v5; // st7
  int v6; // ecx
  int result; // eax
  int v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+8h] [ebp+4h]

  v2 = a2;
  if ( a2 == flt_A30634 )
  {
    v3 = *(this + 0xD);
    if ( v3 )
      v4 = *(float *)(v3 + 0x10);
    else
      v4 = *(float *)(*this + 0x14);
    v9 = v4;
    v2 = v9;
  }
  v5 = 1.0 - v2;
  if ( byte_B4297C )
    v6 = *(unsigned __int16 *)(*this + 0xC0) + 1;
  else
    v6 = *(unsigned __int16 *)(*this + 0xC0);
  v8 = (int)(v5 * (double)v6);
  result = (unsigned __int16)v8;
  if ( (unsigned __int16)v8 == v6 )
    return (unsigned __int16)v8 + 0xFFFF;
  return result;
}
