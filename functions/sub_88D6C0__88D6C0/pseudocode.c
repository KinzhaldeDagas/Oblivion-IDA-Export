unsigned int __thiscall sub_88D6C0(_DWORD *this, float a2)
{
  double v2; // st7
  double v3; // st6
  unsigned int result; // eax
  float v6; // [esp+Ch] [ebp+4h]
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]

  v2 = a2; /*0x88d6c0*/
  v3 = dbl_A3D5B0; /*0x88d6c7*/
  if ( v3 >= a2 ) /*0x88d6d7*/
  {
    if ( v2 < 0.0 ) /*0x88d6f9*/
    {
      unknown_libname_14(v3, v2); /*0x88d6fb*/
      v6 = a2 + dbl_A3D5B0; /*0x88d70e*/
      v2 = v6; /*0x88d712*/
    }
  }
  else
  {
    unknown_libname_14(v3, v2); /*0x88d6d9*/
    v2 = a2; /*0x88d6ea*/
  }
  v7 = v2 + dbl_A64218; /*0x88d720*/
  v8 = v7 / dbl_A4D918; /*0x88d72e*/
  result = (__int64)v8; /*0x88d750*/
  *(this + 0x2B) = result; /*0x88d757*/
  if ( result > 7 ) /*0x88d761*/
    *(this + 0x2B) = 0; /*0x88d763*/
  return result; /*0x88d771*/
}
