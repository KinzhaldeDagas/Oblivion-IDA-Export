int __thiscall sub_67B6B0(int **this, int a2, _DWORD *a3)
{
  int *v3; // edx
  int result; // eax
  int v5; // esi
  int i; // edi
  int v7; // ecx
  int v8; // ecx

  v3 = *this; /*0x67b6b0*/
  result = 0; /*0x67b6b4*/
  v5 = 0; /*0x67b6b6*/
  for ( i = 0; v3; v3 = (int *)v3[1] ) /*0x67b6b0*/
  {
    v7 = *v3; /*0x67b6c3*/
    if ( !*v3 ) /*0x67b6c3*/
      break; /*0x67b6c3*/
    if ( *(_DWORD *)v7 == a2 ) /*0x67b6cb*/
    {
      result = *v3; /*0x67b6e3*/
      break; /*0x67b6e3*/
    }
    if ( *(_BYTE *)(v7 + 4) ) /*0x67b6cd*/
      ++i; /*0x67b6d2*/
    else
      ++v5; /*0x67b6d7*/
  }
  if ( a3 ) /*0x67b6ec*/
  {
    if ( result ) /*0x67b6f0*/
    {
      v8 = i; /*0x67b6f6*/
      if ( !*(_BYTE *)(result + 4) ) /*0x67b6f2*/
        v8 = v5; /*0x67b6fa*/
      *a3 = v8; /*0x67b6fc*/
    }
  }
  return result; /*0x67b6fe*/
}
