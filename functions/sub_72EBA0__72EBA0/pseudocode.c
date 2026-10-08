void __thiscall sub_72EBA0(
        _DWORD *this,
        unsigned __int16 *a2,
        int a3,
        unsigned __int8 a4,
        unsigned int a5,
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

  v14 = a2[0x20]; /*0x72ebca*/
  sub_72E960(a5, (int)a2, a5, a6); /*0x72ebd9*/
  sub_72DE70(a4, a6); /*0x72ebe6*/
  *a7 = FormHeapAlloc((unsigned __int64)v14 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v14);
  v7 = FormHeapAlloc(a6[2]); /*0x72ec14*/
  v8 = 0; /*0x72ec16*/
  for ( i = v7; v8 < a6[2]; ++v8 ) /*0x72ec1b*/
    *(_BYTE *)(v8 + v7) = 0; /*0x72ec24*/
  for ( j = 0; j < v14; ++j ) /*0x72ec36*/
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned int, __int16 *, __int16 *, __int16 *))(*(_DWORD *)a2 + 0x60))( /*0x72ec58*/
      a2,
      j,
      &v17,
      &v18,
      &v19);
    if ( v17 == v18 || v18 == v19 || v19 == v17 ) /*0x72ec76*/
    {
      *(_DWORD *)(*a7 + 4 * j) = 0xFFFFFFFF; /*0x72ec7e*/
    }
    else
    {
      v10 = sub_72DFB0(a6, (int)&v17, a5, i, 1); /*0x72ec95*/
      if ( v10 < 0 ) /*0x72ec9f*/
        v10 = sub_72DFB0(a6, (int)&v17, a5, i, 0); /*0x72ecaf*/
      *(_DWORD *)(*a7 + 4 * j) = v10; /*0x72ecbd*/
    }
  }
  v11 = 0; /*0x72eccd*/
  while ( v11 < a6[2] ) /*0x72eccf*/
  {
    if ( *(_BYTE *)(v11 + i) ) /*0x72ecd8*/
    {
      ++v11; /*0x72ecde*/
    }
    else
    {
      --a6[2]; /*0x72ece3*/
      *(_DWORD *)(*a6 + 4 * v11) = *(_DWORD *)(*a6 + 4 * a6[2]); /*0x72ecef*/
      v12 = a6[2]; /*0x72ecf2*/
      for ( k = 0; k < v14; ++k ) /*0x72ecfb*/
      {
        if ( *(_DWORD *)(*a7 + 4 * k) == v12 ) /*0x72ed0c*/
          *(_DWORD *)(*a7 + 4 * k) = v11; /*0x72ed0e*/
      }
    }
  }
  *(this + 2) = a6[2]; /*0x72ed2a*/
  FormHeapFree(i); /*0x72ed2d*/
}
