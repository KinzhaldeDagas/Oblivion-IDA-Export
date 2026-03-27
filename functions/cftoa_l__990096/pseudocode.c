int __usercall _cftoa_l@<eax>(
        int a1@<ebx>,
        unsigned int *a2,
        _BYTE *a3,
        unsigned int a4,
        int a5,
        int a6,
        struct localeinfo_struct *a7)
{
  _BYTE *v7; // esi
  int *v8; // eax
  int result; // eax
  unsigned int v10; // eax
  bool v11; // zf
  _BYTE *v12; // esi
  char *v13; // eax
  _BYTE *v14; // esi
  _BYTE *v15; // esi
  _BYTE *v16; // esi
  _BYTE *v17; // eax
  _BYTE *v18; // esi
  unsigned int v19; // eax
  int v20; // ecx
  unsigned __int16 v21; // ax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  _BYTE *i; // eax
  _BYTE *v25; // esi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _BYTE *v29; // esi
  _BYTE *v30; // edi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // [esp-Ch] [ebp-38h]
  int v37; // [esp-4h] [ebp-30h]
  int v38; // [esp+8h] [ebp-24h] BYREF
  int v39; // [esp+10h] [ebp-1Ch]
  char v40; // [esp+14h] [ebp-18h]
  int v41; // [esp+18h] [ebp-14h]
  int v42; // [esp+1Ch] [ebp-10h]
  unsigned int v43; // [esp+20h] [ebp-Ch]
  int v44; // [esp+24h] [ebp-8h]
  int v45; // [esp+28h] [ebp-4h]
  _BYTE *v46; // [esp+38h] [ebp+Ch]

  v41 = 0x3FF;
  v45 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v38, a7);
  if ( a5 < 0 )
    a5 = 0;
  v7 = a3;
  if ( !a3 || !a4 )
  {
    v8 = _errno();
    v37 = 0x16;
LABEL_5:
    *v8 = v37;
    _invalid_parameter(a1, 0, v37);
    if ( v40 )
      *(_DWORD *)(v39 + 0x70) &= ~2u;
    return v37;
  }
  *a3 = 0;
  if ( a4 <= a5 + 0xB )
  {
    v8 = _errno();
    v37 = 0x22;
    goto LABEL_5;
  }
  v43 = *a2;
  if ( ((a2[1] >> 0x14) & 0x7FF) == 0x7FF )
  {
    v10 = a4;
    if ( a4 != 0xFFFFFFFF )
      v10 = a4 - 2;
    result = _cftoe(a2, a3 + 2, v10, a5, 0);
    if ( result )
    {
      v11 = v40 == 0;
      *a3 = 0;
      if ( !v11 )
        *(_DWORD *)(v39 + 0x70) &= ~2u;
      return result;
    }
    if ( a3[2] == 0x2D )
    {
      *a3 = 0x2D;
      v7 = a3 + 1;
    }
    *v7 = 0x30;
    v12 = v7 + 1;
    *v12 = a6 == 0 ? 0x78 : 0x58;
    v13 = strrchr(v12 + 1, 0x65);
    if ( v13 )
    {
      *v13 = a6 == 0 ? 0x70 : 0x50;
      v13[3] = 0;
    }
  }
  else
  {
    if ( (a2[1] & 0x80000000) != 0 )
    {
      *a3 = 0x2D;
      v7 = a3 + 1;
    }
    *v7 = 0x30;
    v14 = v7 + 1;
    *v14 = a6 == 0 ? 0x78 : 0x58;
    v15 = v14 + 1;
    if ( (a2[1] & 0x7FF00000) != 0 )
    {
      *v15 = 0x31;
      v16 = v15 + 1;
    }
    else
    {
      *v15 = 0x30;
      v16 = v15 + 1;
      if ( a2[1] & 0xFFFFF | *a2 )
        v41 = 0x3FE;
      else
        v41 = 0;
    }
    v17 = v16;
    v18 = v16 + 1;
    v46 = v17;
    if ( a5 )
      *v17 = ***(_BYTE ***)(v38 + 0xBC);
    else
      *v17 = 0;
    v19 = *a2;
    v20 = a2[1] & 0xFFFFF;
    v44 = v20;
    if ( v20 || v19 )
    {
      v43 = 0;
      v44 = 0xF0000;
      do
      {
        if ( a5 <= 0 )
          break;
        v21 = unknown_libname_200((__int16)v45, v44 & a2[1] & 0xFFFFF) + 0x30;
        if ( v21 > 0x39u )
          LOBYTE(v21) = (a6 != 0 ? 7 : 0x27) + v21;
        v22 = v44;
        v45 -= 4;
        *v18 = v21;
        v23 = __PAIR64__(v22, v43) >> 4;
        v20 = v22 >> 4;
        ++v18;
        --a5;
        v43 = v23;
        v44 = v20;
      }
      while ( (__int16)v45 >= 0 );
      if ( (__int16)v45 >= 0 && (unsigned __int16)unknown_libname_200((__int16)v45, v44 & a2[1] & 0xFFFFF) > 8u )
      {
        for ( i = v18 + 0xFFFFFFFF; *i == 0x66 || *i == 0x46; --i )
          *i = 0x30;
        if ( i == v46 )
        {
          ++i[0xFFFFFFFF];
        }
        else if ( *i == 0x39 )
        {
          *i = a6 != 0 ? 0x41 : 0x61;
        }
        else
        {
          ++*i;
        }
      }
    }
    if ( a5 > 0 )
    {
      _memset((int)v18, 0x30, a5);
      v18 += a5;
    }
    if ( !*v46 )
      v18 = v46;
    LOBYTE(v20) = 0x34;
    *v18 = a6 == 0 ? 0x70 : 0x50;
    v25 = v18 + 1;
    v26 = unknown_libname_200(v20, a2[1]) & 0x7FF;
    HIDWORD(v28) = 0;
    v27 = v26 - (unsigned int)v41;
    if ( v27 < 0 )
    {
      *v25 = 0x2D;
      v29 = v25 + 1;
      v27 = -v27;
    }
    else
    {
      *v25 = 0x2B;
      v29 = v25 + 1;
    }
    v30 = v29;
    *v29 = 0x30;
    if ( v27 >= 0 )
    {
      LODWORD(v28) = 0x3E8;
      if ( v27 >= 0x3E8 )
      {
        v36 = v28;
        v32 = v27 % v28;
        v31 = v27 / v36;
        *v29++ = v31 + 0x30;
        v42 = HIDWORD(v31);
        v27 = v32;
        if ( v29 != v30 )
          goto LABEL_60;
      }
    }
    if ( v27 >= 0x64 )
    {
LABEL_60:
      v34 = v27 % 0x64;
      v33 = v27 / 0x64;
      *v29 = v33 + 0x30;
      v42 = HIDWORD(v33);
      ++v29;
      v27 = v34;
    }
    if ( v29 != v30 || v27 >= 0xA )
    {
      v35 = v27 % 0xA;
      *v29++ = v27 / 0xA + 0x30;
      LOBYTE(v27) = v27 % 0xA;
      v42 = HIDWORD(v35);
    }
    *v29 = v27 + 0x30;
    v29[1] = 0;
  }
  if ( v40 )
    *(_DWORD *)(v39 + 0x70) &= ~2u;
  return 0;
}
