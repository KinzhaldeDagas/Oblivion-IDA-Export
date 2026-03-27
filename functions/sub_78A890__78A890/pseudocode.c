int __thiscall sub_78A890(_DWORD *this, int *a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  bool v4; // cf
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // esi
  unsigned int i; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  unsigned int j; // edi
  int v18; // esi
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int result; // eax
  int v27; // [esp+0h] [ebp-60h] BYREF
  _DWORD *v28; // [esp+4Ch] [ebp-14h]
  int *v29; // [esp+50h] [ebp-10h]
  int v30; // [esp+5Ch] [ebp-4h]

  v29 = &v27;
  v2 = this;
  v28 = this;
  v3 = *this + 0x24;
  v4 = *(_DWORD *)(*this + 0x3C) < 0x10u;
  v30 = 0;
  if ( v4 )
    v5 = v3 + 4;
  else
    v5 = *(_DWORD *)(v3 + 4);
  *a2 = v5;
  v6 = *(_DWORD *)(*this + 0x98);
  v7 = (_DWORD *)(*this + 0x94);
  if ( v6 )
    v6 = (*(_DWORD *)(*this + 0x9C) - v6) / 0x54;
  a2[1] = v6;
  if ( v6 )
  {
    a2[2] = FormHeapAlloc((unsigned __int64)(unsigned int)v6 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v6);
    for ( i = 0; i < sub_7876A0(v7); ++i )
    {
      v9 = v7[1];
      if ( !v9 || i >= (v7[2] - v9) / 0x54 )
        _invalid_parameter_noinfo();
      v10 = v7[1];
      if ( *(_DWORD *)(0x54 * i + v10 + 0x2C) < 0x10u )
      {
        v12 = a2[2];
        v11 = 0x54 * i + v10 + 0x18;
      }
      else
      {
        v11 = *(_DWORD *)(0x54 * i + v10 + 0x18);
        v12 = a2[2];
      }
      *(_DWORD *)(v12 + 4 * i) = v11;
    }
    v2 = v28;
  }
  else
  {
    a2[2] = 0;
  }
  v13 = v2[0x17];
  v14 = *(_DWORD *)(v13 + 0x44);
  v15 = v13 + 0x40;
  if ( v14 )
    v16 = (*(_DWORD *)(v15 + 8) - v14) / 0x2C;
  else
    v16 = 0;
  a2[3] = v16;
  if ( v16 )
  {
    a2[4] = FormHeapAlloc((unsigned __int64)(unsigned int)v16 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v16);
    for ( j = 0; j < a2[3]; ++j )
    {
      v18 = v28[0x17];
      v19 = *(_DWORD *)(v18 + 0x44);
      v20 = v18 + 0x40;
      if ( !v19 || j >= (*(_DWORD *)(v20 + 8) - v19) / 0x2C )
        _invalid_parameter_noinfo();
      v21 = *(_DWORD *)(v20 + 4) + 0x2C * j;
      if ( *(_DWORD *)(v21 + 0x18) < 0x10u )
      {
        v23 = a2[4];
        v22 = v21 + 4;
      }
      else
      {
        v22 = *(_DWORD *)(v21 + 4);
        v23 = a2[4];
      }
      *(_DWORD *)(v23 + 4 * j) = v22;
    }
    v2 = v28;
  }
  else
  {
    a2[4] = 0;
  }
  v24 = v2[0x14];
  if ( v24 )
  {
    if ( *(_DWORD *)(v24 + 0x3C) < 0x10u )
      v25 = v24 + 0x28;
    else
      v25 = *(_DWORD *)(v24 + 0x28);
    a2[6] = v25;
  }
  result = v2[0x13];
  if ( result )
  {
    if ( *(_DWORD *)(result + 0x30) < 0x10u )
      result += 0x1C;
    else
      result = *(_DWORD *)(result + 0x1C);
    a2[5] = result;
  }
  return result;
}
