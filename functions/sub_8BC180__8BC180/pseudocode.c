signed int __thiscall sub_8BC180(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  int i; // eax
  _DWORD *v12; // [esp+4h] [ebp-4h]

  v3 = *(this + 3); /*0x8bc189*/
  v12 = this; /*0x8bc18c*/
  if ( a3 ) /*0x8bc190*/
  {
    if ( a3 == 1 ) /*0x8bc193*/
    {
      v3 += a2; /*0x8bc1a8*/
    }
    else if ( a3 == 2 ) /*0x8bc196*/
    {
      v3 = *(_DWORD *)(*(this + 2) + 4) - a2; /*0x8bc19e*/
    }
  }
  else
  {
    v3 = a2; /*0x8bc1ac*/
  }
  if ( v3 < 0 ) /*0x8bc1b2*/
    return 1; /*0x8bc215*/
  v4 = *(this + 2); /*0x8bc1b5*/
  v5 = *(_DWORD *)(v4 + 4); /*0x8bc1b8*/
  if ( v3 > v5 ) /*0x8bc1bd*/
  {
    v6 = v3 + 1; /*0x8bc1c1*/
    v7 = *(_DWORD *)(v4 + 4); /*0x8bc1c4*/
    if ( v3 + 1 > v5 ) /*0x8bc1c8*/
    {
      v8 = *(_DWORD *)(v4 + 8) & 0x3FFFFFFF; /*0x8bc1cd*/
      if ( v8 < v6 ) /*0x8bc1d4*/
      {
        v9 = 2 * v8; /*0x8bc1d6*/
        if ( v6 >= v9 ) /*0x8bc1da*/
          v9 = v3 + 1; /*0x8bc1dc*/
        sub_8A6E40((const void **)v4, v9, 1); /*0x8bc1e2*/
        this = v12; /*0x8bc1e7*/
      }
      for ( i = v7; i < v6; ++i ) /*0x8bc1f2*/
        *(_BYTE *)(i + *(_DWORD *)v4) = 0; /*0x8bc1f6*/
    }
    *(_DWORD *)(v4 + 4) = v6; /*0x8bc1ff*/
    *(_DWORD *)(*(this + 2) + 4) = v3; /*0x8bc206*/
  }
  *(this + 3) = v3; /*0x8bc20b*/
  return 0; /*0x8bc210*/
}
