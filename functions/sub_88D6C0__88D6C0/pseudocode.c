unsigned int __thiscall sub_88D6C0(_DWORD *this, float a2)
{
  double v2; // st7
  double v3; // st6
  unsigned int result; // eax
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]

  v2 = a2;
  v3 = dbl_A3D5B0;
  if ( v3 >= a2 )
  {
    if ( v2 < 0.0 )
    {
      unknown_libname_14(v3, v2);
      v6 = a2 + dbl_A3D5B0;
      v2 = v6;
    }
  }
  else
  {
    unknown_libname_14(v3, v2);
    v2 = a2;
  }
  v7 = v2 + dbl_A64218;
  v8 = v7 / dbl_A4D918;
  result = (__int64)v8;
  *(this + 0x2B) = result;
  if ( result > 7 )
    *(this + 0x2B) = 0;
  return result;
}
