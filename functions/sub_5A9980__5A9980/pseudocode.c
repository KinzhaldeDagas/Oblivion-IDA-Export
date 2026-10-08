double __userpurge sub_5A9980@<st0>(float *this@<ecx>, double result@<st0>, char *arg0, int *a4, int a5, float a6)
{
  double v7; // st7
  int v8; // eax
  double v9; // st7
  int v10; // kr00_4
  double v11; // st6
  float a2; // [esp+4h] [ebp-10h]
  float v13; // [esp+24h] [ebp+10h]
  float v14; // [esp+24h] [ebp+10h]

  if ( arg0 ) /*0x5a998a*/
  {
    if ( *((_DWORD *)this + 9) == 2 ) /*0x5a9996*/
    {
      sub_584820((int)this); /*0x5a99a4*/
    }
    else if ( *((_DWORD *)this + 9) == 4 ) /*0x5a999b*/
    {
      Menu::StartFadeIn(this); /*0x5a999d*/
    }
    if ( a5 == 2 ) /*0x5a99ae*/
    {
      sub_5A95C0((int)this, arg0, a6, 0, 0); /*0x5a99bf*/
      return a6; /*0x5a99b0*/
    }
    else
    {
      Tile_SetString(*((_DWORD **)this + 0xA), (_DWORD *)0xFDE, arg0); /*0x5a99d5*/
      v7 = fConstant_2; /*0x5a99da*/
      Tile_SetFloat(*((Tile **)this + 0xA), 0xFA1u, fConstant_2); /*0x5a99ec*/
      sub_5A47B0(v7); /*0x5a99f1*/
      a2 = (float)v8; /*0x5a9a02*/
      Tile_SetFloat(*((Tile **)this + 0xA), 0xFAFu, a2); /*0x5a9a0a*/
      v9 = fConstant_2; /*0x5a9a0f*/
      if ( a4 ) /*0x5a9a1b*/
      {
        if ( v9 >= a6 ) /*0x5a9a26*/
        {
          *(this + 0xF) = (double)(unsigned __int16)sub_6B7340(a4) / dbl_A2FC70; /*0x5a9a42*/
          v9 = fConstant_2; /*0x5a9a45*/
        }
      }
      if ( v9 > a6 && v9 > *(this + 0xF) ) /*0x5a9a5e*/
      {
        v10 = strlen(arg0); /*0x5a9a62*/
        v11 = (double)v10; /*0x5a9a76*/
        if ( v10 < 0 ) /*0x5a9a7a*/
          v11 = v11 + flt_A2FC78; /*0x5a9a7c*/
        v13 = v11 * unk_B394F8; /*0x5a9a88*/
        if ( unk_B394F0 >= (double)v13 ) /*0x5a9a9d*/
        {
          v13 = *GameSetting_GetSafeFloatPointer(&unk_B394F0); /*0x5a9ab5*/
          v9 = fConstant_2; /*0x5a9ab9*/
        }
        *(this + 0xF) = v13; /*0x5a9ac3*/
      }
      if ( v9 < *(this + 0xF) ) /*0x5a9ace*/
        v9 = *(this + 0xF); /*0x5a9ad2*/
      v14 = v9; /*0x5a9ad5*/
      *((_DWORD *)this + 0x10) = a4; /*0x5a9ad9*/
      *(this + 0xF) = v14; /*0x5a9ae2*/
      *((_BYTE *)this + 0x38) = 2; /*0x5a9ae5*/
      return v14; /*0x5a9adc*/
    }
  }
  return result; /*0x5a99c4*/
}
