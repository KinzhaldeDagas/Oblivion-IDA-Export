_DWORD *__cdecl sub_772630(_DWORD *a1)
{
  unsigned int *v1; // ecx
  _DWORD *v2; // esi
  int **v3; // edi
  _DWORD *v4; // ebx
  int *v5; // eax
  int v6; // ecx
  _DWORD *result; // eax

  v1 = (unsigned int *)dword_B4275C;
  v2 = (_DWORD *)(dword_B4275C + 8);
  v3 = (int **)dword_B4275C;
  if ( !*v2 )
  {
    v4 = v1 + 3;
    sub_772430(v1, v1[3]);
    *v4 *= 2;
  }
  v5 = *v3;
  v6 = **v3;
  *v5 = v5[--*v2];
  result = a1;
  *a1 = v6;
  if ( v6 )
  {
    ++*(_DWORD *)(v6 + 0x5C);
    *(_BYTE *)(v6 + 0x5B) = 1;
  }
  else
  {
    *(_BYTE *)0x5B = 1;
  }
  return result;
}
