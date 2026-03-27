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

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v23, a7);
  if ( !a1 || !a2 )
  {
    v8 = _errno();
    v22 = 0x16;
LABEL_3:
    *v8 = v22;
    _invalid_parameter((int)a1, v22, 0);
    if ( v25 )
      *(_DWORD *)(v24 + 0x70) &= ~2u;
    return v22;
  }
  if ( a3 <= 0 )
    v10 = 0;
  else
    v10 = a3;
  if ( a2 <= v10 + 9 )
  {
    v8 = _errno();
    v22 = 0x22;
    goto LABEL_3;
  }
  if ( a6 )
    _shift(&a1[*(_DWORD *)a5 == 0x2D], a3 > 0);
  v11 = a1;
  if ( *(_DWORD *)a5 == 0x2D )
  {
    *a1 = 0x2D;
    v11 = a1 + 1;
  }
  if ( a3 > 0 )
  {
    *v11 = v11[1];
    *++v11 = ***(_BYTE ***)(v23 + 0xBC);
  }
  v12 = &v11[a3 + (a6 == 0)];
  if ( a2 == 0xFFFFFFFF )
    v13 = 0xFFFFFFFF;
  else
    v13 = a2 + a1 - v12;
  v14 = strcpy_s(v12, v13, "e+000");
  if ( v14 )
    _invoke_watson(v14, v15, v16, 0, a5, (int)v12);
  v17 = v12 + 2;
  if ( a4 )
    *v12 = 0x45;
  v18 = v12 + 1;
  if ( **(_BYTE **)(a5 + 0xC) != 0x30 )
  {
    v19 = *(_DWORD *)(a5 + 4) - 1;
    if ( v19 < 0 )
    {
      v19 = 1 - *(_DWORD *)(a5 + 4);
      *v18 = 0x2D;
    }
    v20 = v18 + 1;
    if ( v19 >= 0x64 )
    {
      *v20 += v19 / 0x64;
      v19 %= 0x64;
    }
    v21 = v20 + 1;
    if ( v19 >= 0xA )
    {
      *v21 += v19 / 0xA;
      LOBYTE(v19) = v19 % 0xA;
    }
    v21[1] += v19;
  }
  if ( (byte_BAA7BC & 1) != 0 && *v17 == 0x30 )
    unknown_libname_16((unsigned int)v17, (unsigned int)(v17 + 1), 3);
  if ( v25 )
    *(_DWORD *)(v24 + 0x70) &= ~2u;
  return 0;
}
