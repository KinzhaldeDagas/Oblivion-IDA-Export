int __usercall _cftof2_l@<eax>(_DWORD *a1@<eax>, char *a2@<ecx>, int a3, int a4, char a5, struct localeinfo_struct *a6)
{
  int v8; // esi
  char *v10; // eax
  char *v11; // esi
  int v12; // eax
  char *v13; // esi
  int v14; // ebx
  const char *v15; // esi
  int v16; // ebx
  int v17; // [esp+Ch] [ebp-10h] BYREF
  int v18; // [esp+14h] [ebp-8h]
  char v19; // [esp+18h] [ebp-4h]

  v8 = a1[1] - 1;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v17, a6);
  if ( a2 && a3 )
  {
    if ( a5 )
    {
      if ( v8 == a4 )
      {
        v10 = &a2[v8 + (*a1 == 0x2D)];
        *v10 = 0x30;
        v10[1] = 0;
      }
    }
    v11 = a2;
    if ( *a1 == 0x2D )
    {
      *a2 = 0x2D;
      v11 = a2 + 1;
    }
    v12 = a1[1];
    if ( v12 > 0 )
    {
      v13 = &v11[v12];
    }
    else
    {
      _shift(v11, 1);
      *v11 = 0x30;
      v13 = v11 + 1;
    }
    if ( a4 > 0 )
    {
      _shift(v13, 1);
      *v13 = ***(_BYTE ***)(v17 + 0xBC);
      v14 = a1[1];
      v15 = v13 + 1;
      if ( v14 < 0 )
      {
        v16 = -v14;
        if ( a5 || a4 >= v16 )
          a4 = v16;
        _shift(v15, a4);
        _memset((int)v15, 0x30, a4);
      }
    }
    if ( v19 )
      *(_DWORD *)(v18 + 0x70) &= ~2u;
    return 0;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter((int)a1, (int)a2, 0x16);
    if ( v19 )
      *(_DWORD *)(v18 + 0x70) &= ~2u;
    return 0x16;
  }
}
