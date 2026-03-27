char *__thiscall sub_72CF50(_WORD *this, _DWORD *a2, unsigned __int16 *a3)
{
  unsigned int v3; // esi
  char *v4; // ebp
  char *v5; // edi
  int i; // ecx
  unsigned int v7; // esi
  unsigned int j; // edi
  unsigned int k; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int m; // eax
  unsigned __int16 v13; // cx
  unsigned int v16; // [esp+14h] [ebp-14h]
  char v17[2]; // [esp+1Ch] [ebp-Ch] BYREF
  char v18[2]; // [esp+1Eh] [ebp-Ah] BYREF
  char v19[4]; // [esp+20h] [ebp-8h] BYREF

  v3 = a3[4];
  v16 = v3;
  v4 = (char *)FormHeapAlloc((unsigned __int64)a3[4] >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v3);
  if ( v3 )
  {
    memset(v4, 0xFFu, 4 * (v3 >> 1));
    v5 = &v4[4 * (v3 >> 1)];
    for ( i = v3 & 1; i; --i )
    {
      *(_WORD *)v5 = 0xFFFF;
      v5 += 2;
    }
  }
  v7 = 0;
  for ( j = 0; j < (unsigned __int16)*(this + 0xF); ++j )
  {
    (*(void (__thiscall **)(unsigned __int16 *, _DWORD, char *, char *, char *))(*(_DWORD *)a3 + 0x60))(
      a3,
      *(unsigned __int16 *)(*a2 + 2 * j),
      v17,
      v18,
      v19);
    for ( k = 0; k < 3; ++k )
    {
      v10 = *(unsigned __int16 *)&v17[2 * k];
      if ( *(_WORD *)&v4[2 * v10] == 0xFFFF )
        *(_WORD *)&v4[2 * v10] = v7++;
    }
  }
  v11 = FormHeapAlloc((unsigned __int64)v7 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v7);
  *(this + 0xE) = v7;
  *((_DWORD *)this + 3) = v11;
  for ( m = 0; m < v16; ++m )
  {
    v13 = *(_WORD *)&v4[2 * m];
    if ( v13 != 0xFFFF )
      *(_WORD *)(*((_DWORD *)this + 3) + 2 * v13) = m;
  }
  return v4;
}
