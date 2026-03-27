int __cdecl sub_931140(int a1, int a2, int a3, const void **a4)
{
  int v5; // esi
  const void *v6; // edi
  int v7; // eax
  int v8; // eax
  int result; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // ecx
  __int16 v14; // ax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // [esp+1Ch] [ebp+Ch]
  int v19; // [esp+20h] [ebp+10h]

  v5 = a1;
  v6 = *(const void **)(a1 + 8);
  v7 = (unsigned int)a4[2] & 0x3FFFFFFF;
  if ( v7 < (int)v6 )
  {
    v8 = 2 * v7;
    if ( (int)v6 >= v8 )
      v8 = *(_DWORD *)(a1 + 8);
    sub_8A6E40(a4, v8, 2);
  }
  a4[1] = v6;
  result = *(_DWORD *)(a1 + 8);
  v11 = *(_DWORD *)(a3 + 8);
  v12 = 0;
  v18 = v11;
  if ( result > 0 )
  {
    do
    {
      v13 = *(_DWORD *)(v5 + 4) + 8 * v12;
      v14 = *(_WORD *)(v13 + 6);
      v19 = v13;
      if ( v14 == 1 || v14 == 2 )
      {
        *((_WORD *)*a4 + v12) = *(_WORD *)(a3 + 8);
        if ( *(_DWORD *)(a3 + 8) == (*(_DWORD *)(a3 + 0xC) & 0x3FFFFFFF) )
        {
          sub_8A6EE0((const void **)(a3 + 4), 8);
          v13 = v19;
        }
        v15 = *(_DWORD *)(a3 + 8);
        v16 = *(_DWORD *)(a3 + 4);
        *(_DWORD *)(v16 + 8 * v15) = *(_DWORD *)v13;
        *(_DWORD *)(v16 + 8 * v15 + 4) = *(_DWORD *)(v19 + 4);
        ++*(_DWORD *)(a3 + 8);
        v5 = a1;
      }
      else
      {
        *((_WORD *)*a4 + v12) = 0xFFFF;
      }
      result = *(_DWORD *)(v5 + 8);
      ++v12;
    }
    while ( v12 < result );
    v11 = v18;
  }
  if ( v11 < *(_DWORD *)(a3 + 8) )
  {
    do
    {
      v17 = *(_DWORD *)(a3 + 4) + 8 * v11;
      *(_WORD *)(v17 + 2) = *((_WORD *)*a4 + *(unsigned __int16 *)(v17 + 2));
      *(_WORD *)(v17 + 4) = *((_WORD *)*a4 + *(unsigned __int16 *)(v17 + 4));
      result = *(_DWORD *)(a3 + 8);
      ++v11;
    }
    while ( v11 < result );
  }
  return result;
}
