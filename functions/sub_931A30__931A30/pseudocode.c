int __cdecl sub_931A30(int a1, int a2)
{
  int v2; // edi
  int result; // eax
  int v4; // ebp
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int i; // [esp+8h] [ebp-10h]
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v2 = a1; /*0x931a35*/
  result = *(_DWORD *)(a1 + 8); /*0x931a39*/
  v4 = *(_DWORD *)(a1 + 4); /*0x931a3c*/
  v5 = 0; /*0x931a3f*/
  for ( i = 0; v5 < result; i = v5 ) /*0x931a47*/
  {
    v6 = *(_DWORD *)(v2 + 4); /*0x931a50*/
    v7 = *(_DWORD *)(v6 + 8 * v5); /*0x931a53*/
    v8 = *(unsigned __int16 *)(v6 + 8 * v5 + 4); /*0x931a56*/
    if ( v5 < v8 ) /*0x931a5d*/
    {
      v9 = *(unsigned __int16 *)(v4 + 8 * v8 + 4); /*0x931a5f*/
      if ( v5 < v9 ) /*0x931a66*/
      {
        v10 = *(_DWORD *)(a2 + 0x10); /*0x931a7d*/
        v17 = *(unsigned __int16 *)(v4 + 8 * v8); /*0x931a83*/
        v11 = v10 + 1; /*0x931a8a*/
        v12 = *(_DWORD *)(a2 + 0x14) & 0x3FFFFFFF; /*0x931a8d*/
        v16 = *(unsigned __int16 *)(v4 + 8 * v9); /*0x931a94*/
        if ( v12 < v10 + 1 ) /*0x931a98*/
        {
          v13 = 2 * v12; /*0x931a9a*/
          if ( v11 >= v13 ) /*0x931a9e*/
            v13 = v10 + 1; /*0x931aa0*/
          sub_8A6E40((const void **)(a2 + 0xC), v13, 0xC); /*0x931aa6*/
          v5 = i; /*0x931aab*/
        }
        v14 = (_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0xC * v10); /*0x931ab7*/
        *(_DWORD *)(a2 + 0x10) = v11; /*0x931abe*/
        v2 = a1; /*0x931ac1*/
        *v14 = (unsigned __int16)v7; /*0x931ac5*/
        v14[1] = v16; /*0x931acb*/
        v14[2] = v17; /*0x931ad2*/
      }
    }
    result = *(_DWORD *)(v2 + 8); /*0x931ad5*/
    ++v5; /*0x931ad8*/
  }
  return result; /*0x931ae7*/
}
