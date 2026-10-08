int __usercall _cftoe2_l@<eax>(
        _BYTE *a1@<eax>,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        struct localeinfo_struct *a7)
{
  int *v8; // eax
  int v10; // eax
  _BYTE *v11; // esi
  char *v12; // esi
  UInt32 v13; // ebx
  errno_t v14; // eax
  int v15; // edx
  int v16; // ecx
  _BYTE *v17; // ecx
  _BYTE *v18; // esi
  int v19; // eax
  _BYTE *v20; // esi
  _BYTE *v21; // esi
  int v22; // [esp-4h] [ebp-20h]
  int v23; // [esp+Ch] [ebp-10h] BYREF
  int v24; // [esp+14h] [ebp-8h]
  char v25; // [esp+18h] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v23, a7); /*0x98fe4e*/
  if ( !a1 || !a2 ) /*0x98fe87*/
  {
    v8 = _errno(); /*0x98fe59*/
    v22 = 0x16; /*0x98fe5e*/
LABEL_3:
    *v8 = v22; /*0x98fe60*/
    _invalid_parameter((int)a1, v22, 0); /*0x98fe68*/
    if ( v25 ) /*0x98fe74*/
      *(_DWORD *)(v24 + 0x70) &= ~2u; /*0x98fe79*/
    return v22; /*0x98fe7f*/
  }
  if ( a3 <= 0 ) /*0x98fe8c*/
    v10 = 0; /*0x98fe93*/
  else
    v10 = a3; /*0x98fe8e*/
  if ( a2 <= v10 + 9 ) /*0x98fe9b*/
  {
    v8 = _errno(); /*0x98fe9d*/
    v22 = 0x22; /*0x98fea2*/
    goto LABEL_3; /*0x98fea4*/
  }
  if ( a6 ) /*0x98feaa*/
    _shift(&a1[*(_DWORD *)a5 == 0x2D], a3 > 0); /*0x98fec5*/
  v11 = a1; /*0x98fed0*/
  if ( *(_DWORD *)a5 == 0x2D ) /*0x98fed2*/
  {
    *a1 = 0x2D; /*0x98fed4*/
    v11 = a1 + 1; /*0x98fed7*/
  }
  if ( a3 > 0 ) /*0x98fede*/
  {
    *v11 = v11[1]; /*0x98fee5*/
    *++v11 = ***(_BYTE ***)(v23 + 0xBC); /*0x98fef6*/
  }
  v12 = &v11[a3 + (a6 == 0)]; /*0x98ff03*/
  if ( a2 == 0xFFFFFFFF ) /*0x98ff09*/
    v13 = 0xFFFFFFFF; /*0x98ff0b*/
  else
    v13 = a2 + a1 - v12; /*0x98ff12*/
  v14 = strcpy_s(v12, v13, "e+000"); /*0x98ff1c*/
  if ( v14 ) /*0x98ff28*/
    _invoke_watson(v14, v15, v16, 0, a5, (int)v12); /*0x98ff2f*/
  v17 = v12 + 2; /*0x98ff3a*/
  if ( a4 ) /*0x98ff3d*/
    *v12 = 0x45; /*0x98ff3f*/
  v18 = v12 + 1; /*0x98ff45*/
  if ( **(_BYTE **)(a5 + 0xC) != 0x30 ) /*0x98ff49*/
  {
    v19 = *(_DWORD *)(a5 + 4) - 1; /*0x98ff4e*/
    if ( v19 < 0 ) /*0x98ff4f*/
    {
      v19 = 1 - *(_DWORD *)(a5 + 4); /*0x98ff51*/
      *v18 = 0x2D; /*0x98ff53*/
    }
    v20 = v18 + 1; /*0x98ff56*/
    if ( v19 >= 0x64 ) /*0x98ff5a*/
    {
      *v20 += v19 / 0x64; /*0x98ff62*/
      v19 %= 0x64; /*0x98ff64*/
    }
    v21 = v20 + 1; /*0x98ff66*/
    if ( v19 >= 0xA ) /*0x98ff6a*/
    {
      *v21 += v19 / 0xA; /*0x98ff72*/
      LOBYTE(v19) = v19 % 0xA; /*0x98ff74*/
    }
    v21[1] += v19; /*0x98ff76*/
  }
  if ( (dword_BA9E10[0x26B] & 1) != 0 && *v17 == 0x30 ) /*0x98ff85*/
    unknown_libname_16((unsigned int)v17, (unsigned int)(v17 + 1), 3u); /*0x98ff8e*/
  if ( v25 ) /*0x98ff9a*/
    *(_DWORD *)(v24 + 0x70) &= ~2u; /*0x98ff9f*/
  return 0; /*0x98ffa5*/
}
