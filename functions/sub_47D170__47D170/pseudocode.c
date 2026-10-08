void __thiscall sub_47D170(float *this, int a2)
{
  double v2; // st7
  int v3; // edx
  double v4; // st6
  double v5; // st7
  int v6; // esi
  double v7; // st7
  double v8; // st7
  float v9; // [esp+Ch] [ebp+4h]

  v2 = 0.0; /*0x47d174*/
  v3 = a2 - *((_DWORD *)this + 5); /*0x47d176*/
  unk_B39DB4 = unk_B39DB0; /*0x47d181*/
  unk_B39DB0 = v3; /*0x47d186*/
  if ( !*(_BYTE *)this ) /*0x47d18c*/
  {
    if ( 0.0 == *(this + 1) ) /*0x47d19d*/
    {
      v6 = v3 - *((_DWORD *)this + 4); /*0x47d1f3*/
      if ( v3 == *((_DWORD *)this + 4) ) /*0x47d1f6*/
      {
        v6 = 1; /*0x47d1f8*/
      }
      else
      {
        v7 = (double)v6; /*0x47d207*/
        if ( v6 < 0 ) /*0x47d20b*/
          v7 = v7 + flt_A2FC78; /*0x47d20d*/
        if ( v7 > flt_A3D14C ) /*0x47d21e*/
          v6 = 0xA6; /*0x47d220*/
      }
      v5 = (double)v6; /*0x47d22b*/
      if ( v6 < 0 ) /*0x47d22f*/
        v5 = v5 + flt_A2FC78; /*0x47d231*/
    }
    else
    {
      v9 = *(this + 2) + *(this + 1); /*0x47d1a5*/
      v4 = (double)(int)(__int64)v9; /*0x47d1d5*/
      if ( (int)(__int64)v9 < 0 ) /*0x47d1d9*/
        v4 = v4 + flt_A2FC78; /*0x47d1db*/
      v3 = (__int64)v9 + *((_DWORD *)this + 4); /*0x47d1e6*/
      *(this + 2) = v9 - v4; /*0x47d1e8*/
      v5 = *(this + 1); /*0x47d1eb*/
    }
    v8 = v5 * dbl_A30E40; /*0x47d238*/
    *((_DWORD *)this + 4) = v3; /*0x47d23e*/
    *(this + 3) = v8; /*0x47d241*/
    v2 = *(this + 3) * flt_B06704; /*0x47d247*/
  }
  *(this + 3) = v2; /*0x47d24d*/
}
