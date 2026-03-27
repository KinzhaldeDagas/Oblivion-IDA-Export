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

  v2 = a1;
  result = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 4);
  v5 = 0;
  for ( i = 0; v5 < result; i = v5 )
  {
    v6 = *(_DWORD *)(v2 + 4);
    v7 = *(_DWORD *)(v6 + 8 * v5);
    v8 = *(unsigned __int16 *)(v6 + 8 * v5 + 4);
    if ( v5 < v8 )
    {
      v9 = *(unsigned __int16 *)(v4 + 8 * v8 + 4);
      if ( v5 < v9 )
      {
        v10 = *(_DWORD *)(a2 + 0x10);
        v17 = *(unsigned __int16 *)(v4 + 8 * v8);
        v11 = v10 + 1;
        v12 = *(_DWORD *)(a2 + 0x14) & 0x3FFFFFFF;
        v16 = *(unsigned __int16 *)(v4 + 8 * v9);
        if ( v12 < v10 + 1 )
        {
          v13 = 2 * v12;
          if ( v11 >= v13 )
            v13 = v10 + 1;
          sub_8A6E40((const void **)(a2 + 0xC), v13, 0xC);
          v5 = i;
        }
        v14 = (_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0xC * v10);
        *(_DWORD *)(a2 + 0x10) = v11;
        v2 = a1;
        *v14 = (unsigned __int16)v7;
        v14[1] = v16;
        v14[2] = v17;
      }
    }
    result = *(_DWORD *)(v2 + 8);
    ++v5;
  }
  return result;
}
