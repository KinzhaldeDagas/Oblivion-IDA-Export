int __fastcall sub_8E1310(int a1, int a2, __int16 a3, int a4, const void **a5)
{
  int v5; // eax
  const void *v7; // eax
  _DWORD *v8; // ecx
  int result; // eax
  unsigned int v10; // eax
  int v11; // edx
  int v12; // eax
  signed int v13; // ecx
  _WORD *v14; // esi
  int v15; // edx

  v5 = *(_DWORD *)(a4 + 0xC);
  if ( (v5 & 1) != 0 )
  {
    v10 = v5 & 0xFFFFFFFE;
    v11 = *(_DWORD *)(v10 + a1 + 8);
    v12 = a1 + v10;
    v13 = 0;
    if ( v11 <= 0 )
    {
LABEL_9:
      v13 = 0xFFFFFFFF;
    }
    else
    {
      v14 = *(_WORD **)(v12 + 4);
      while ( *v14 != a3 )
      {
        ++v13;
        ++v14;
        if ( v13 >= v11 )
          goto LABEL_9;
      }
    }
    v15 = *(_DWORD *)(v12 + 8) - 1;
    *(_DWORD *)(v12 + 8) = v15;
    result = *(_DWORD *)(v12 + 4);
    *(_WORD *)(result + 2 * v13) = *(_WORD *)(result + 2 * v15);
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
