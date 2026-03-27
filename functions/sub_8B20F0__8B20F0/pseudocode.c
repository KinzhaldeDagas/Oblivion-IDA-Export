int *__thiscall sub_8B20F0(const void **this, int a2, int a3)
{
  const void **v3; // esi
  int *result; // eax
  int v5; // edx
  int i; // ecx
  int v7; // edx
  int j; // ecx

  v3 = this + 2;
  if ( *(this + 3) == (const void *)((unsigned int)*(this + 4) & 0x3FFFFFFF) )
    sub_8A6EE0(v3, 0x10);
  result = (int *)((char *)*v3 + 0x10 * (_DWORD)v3[1]);
  v3[1] = (char *)v3[1] + 1;
  v5 = *(_DWORD *)(a2 + 0xC);
  for ( i = a2; v5; v5 = *(_DWORD *)(v5 + 0xC) )
    i = v5;
  *result = i;
  result[1] = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)(a3 + 0xC);
  for ( j = a3; v7; v7 = *(_DWORD *)(v7 + 0xC) )
    j = v7;
  result[2] = j;
  result[3] = *(_DWORD *)(a3 + 4);
  return result;
}
