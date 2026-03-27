int __fastcall sub_8E1280(int a1, int a2, __int16 a3, int a4, const void **a5)
{
  int v5; // eax
  const void *v7; // eax
  _DWORD *v8; // ecx
  int result; // eax
  unsigned int v10; // esi

  v5 = *(_DWORD *)(a4 + 0xC);
  if ( (v5 & 1) != 0 )
  {
    v10 = (v5 & 0xFFFFFFFE) + a1 + 4;
    if ( *(_DWORD *)((v5 & 0xFFFFFFFE) + a1 + 8) == (*(_DWORD *)((v5 & 0xFFFFFFFE) + a1 + 0xC) & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)v10, 2);
    *(_WORD *)(*(_DWORD *)v10 + 2 * *(_DWORD *)(v10 + 4)) = a3;
    result = *(_DWORD *)(v10 + 4) + 1;
    *(_DWORD *)(v10 + 4) = result;
  }
  else
  {
    if ( a5[1] == (const void *)((unsigned int)a5[2] & 0x3FFFFFFF) )
      sub_8A6EE0(a5, 8);
    v7 = a5[1];
    v8 = (char *)*a5 + 8 * (_DWORD)v7;
    a5[1] = (char *)v7 + 1;
    *v8 = *(_DWORD *)(a2 + 0xC);
    result = *(_DWORD *)(a4 + 0xC);
    v8[1] = result;
  }
  return result;
}
