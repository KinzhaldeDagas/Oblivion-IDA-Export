void __thiscall sub_72EBA0(
        _DWORD *this,
        unsigned __int16 *a2,
        int a3,
        unsigned __int8 a4,
        int a5,
        unsigned int *a6,
        int *a7)
{
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int j; // ebx
  signed int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edi
  unsigned int k; // eax
  unsigned int v14; // [esp+10h] [ebp-1Ch]
  unsigned int i; // [esp+14h] [ebp-18h]
  __int16 v17; // [esp+20h] [ebp-Ch] BYREF
  __int16 v18; // [esp+22h] [ebp-Ah] BYREF
  __int16 v19; // [esp+24h] [ebp-8h] BYREF

  v14 = a2[0x20];
  sub_72E960((int)a2, a5, a6);
  sub_72DE70(a4, a6);
  *a7 = FormHeapAlloc((unsigned __int64)v14 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v14);
  v7 = FormHeapAlloc(a6[2]);
  v8 = 0;
  for ( i = v7; v8 < a6[2]; ++v8 )
    *(_BYTE *)(v8 + v7) = 0;
  for ( j = 0; j < v14; ++j )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned int, __int16 *, __int16 *, __int16 *))(*(_DWORD *)a2 + 0x60))(
      a2,
      j,
      &v17,
      &v18,
      &v19);
    if ( v17 == v18 || v18 == v19 || v19 == v17 )
    {
      *(_DWORD *)(*a7 + 4 * j) = 0xFFFFFFFF;
    }
    else
    {
      v10 = sub_72DFB0(a6, (int)&v17, a5, i, 1);
      if ( v10 < 0 )
        v10 = sub_72DFB0(a6, (int)&v17, a5, i, 0);
      *(_DWORD *)(*a7 + 4 * j) = v10;
    }
  }
  v11 = 0;
  while ( v11 < a6[2] )
  {
    if ( *(_BYTE *)(v11 + i) )
    {
      ++v11;
    }
    else
    {
      --a6[2];
      *(_DWORD *)(*a6 + 4 * v11) = *(_DWORD *)(*a6 + 4 * a6[2]);
      v12 = a6[2];
      for ( k = 0; k < v14; ++k )
      {
        if ( *(_DWORD *)(*a7 + 4 * k) == v12 )
          *(_DWORD *)(*a7 + 4 * k) = v11;
      }
    }
  }
  *(this + 2) = a6[2];
  FormHeapFree(i);
}
