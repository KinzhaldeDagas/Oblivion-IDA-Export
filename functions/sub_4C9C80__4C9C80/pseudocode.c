signed int __thiscall sub_4C9C80(_BYTE *this, float *a2)
{
  int v2; // esi
  double v4; // st7
  double v5; // st7
  float v7; // [esp+8h] [ebp+4h]
  float v8; // [esp+8h] [ebp+4h]

  v2 = 0;
  if ( (*(this + 0x24) & 1) == 0 )
  {
    v4 = *a2;
    unknown_libname_14(dbl_A37650, v4);
    v7 = v4;
    v2 = (int)abs32(Double_To_SInt32(v7)) > 0x800;
    v5 = a2[1];
    unknown_libname_14(dbl_A37650, v5);
    v8 = v5;
    if ( (int)abs32(Double_To_SInt32(v8)) > 0x800 )
      v2 += 2;
  }
  return v2;
}
