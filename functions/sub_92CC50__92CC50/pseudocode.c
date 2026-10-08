int __cdecl sub_92CC50(int a1, int a2, int a3, int (__cdecl *a4)(char *, int, int *))
{
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int i; // eax
  int j; // eax
  int v10; // eax
  int v11; // ecx
  int result; // eax
  char v13; // [esp+1Ah] [ebp-16h] BYREF
  char v14; // [esp+1Bh] [ebp-15h] BYREF
  int v15; // [esp+1Ch] [ebp-14h]
  _DWORD v16[4]; // [esp+20h] [ebp-10h] BYREF

  while ( 1 ) /*0x92cc60*/
  {
    v4 = a3; /*0x92cc60*/
    v5 = a2; /*0x92cc63*/
    v6 = (a2 + a3) >> 1; /*0x92cc69*/
    v7 = *(_DWORD *)(a1 + 8 * v6 + 4); /*0x92cc6e*/
    v16[0] = *(_DWORD *)(a1 + 8 * v6); /*0x92cc72*/
    v16[1] = v7; /*0x92cc76*/
    do /*0x92cd2a*/
    {
      if ( *(_BYTE *)a4(&v13, a1 + 8 * v5, v16) ) /*0x92cc91*/
      {
        for ( i = a1 + 8 * v5; ; i = v15 ) /*0x92cc9a*/
        {
          ++v5; /*0x92ccb1*/
          v15 = i + 8; /*0x92ccb2*/
          if ( !*(_BYTE *)a4(&v13, i + 8, v16) ) /*0x92ccb9*/
            break; /*0x92ccb9*/
        }
      }
      if ( *(_BYTE *)a4(&v14, (int)v16, (int *)(a1 + 8 * v4)) ) /*0x92ccd3*/
      {
        for ( j = a1 + 8 * v4; ; j = v15 ) /*0x92ccdc*/
        {
          v15 = j - 8; /*0x92cced*/
          --v4; /*0x92ccf7*/
          if ( !*(_BYTE *)a4(&v14, (int)v16, (int *)(j - 8)) ) /*0x92ccfb*/
            break; /*0x92ccfb*/
        }
      }
      if ( v4 < v5 ) /*0x92cd06*/
        break; /*0x92cd06*/
      if ( v4 != v5 ) /*0x92cd08*/
      {
        v10 = *(_DWORD *)(a1 + 8 * v4); /*0x92cd0d*/
        v11 = *(_DWORD *)(a1 + 8 * v4 + 4); /*0x92cd10*/
        *(_DWORD *)(a1 + 8 * v4) = *(_DWORD *)(a1 + 8 * v5); /*0x92cd14*/
        *(_DWORD *)(a1 + 8 * v4 + 4) = *(_DWORD *)(a1 + 8 * v5 + 4); /*0x92cd1b*/
        *(_DWORD *)(a1 + 8 * v5) = v10; /*0x92cd1f*/
        *(_DWORD *)(a1 + 8 * v5 + 4) = v11; /*0x92cd22*/
      }
      --v4; /*0x92cd26*/
      ++v5; /*0x92cd27*/
    }
    while ( v5 <= v4 ); /*0x92cd2a*/
    result = a2; /*0x92cd30*/
    if ( a2 < v4 ) /*0x92cd35*/
      result = sub_92CC50(a1, a2, v4, a4); /*0x92cd3e*/
    if ( v5 >= a3 ) /*0x92cd49*/
      break; /*0x92cd49*/
    a2 = v5; /*0x92cd4b*/
  }
  return result; /*0x92cd53*/
}
