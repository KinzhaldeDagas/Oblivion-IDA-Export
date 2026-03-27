int __thiscall sub_8AF6D0(const void **this, int a2)
{
  const void **v2; // esi
  const void *v3; // ecx
  int result; // eax
  int v5; // ecx
  int i; // edx
  int v7; // edx
  int j; // ecx

  v2 = this + 4;
  if ( *(this + 5) == (const void *)((unsigned int)*(this + 6) & 0x3FFFFFFF) )
    sub_8A6EE0(v2, 0x30);
  v3 = v2[1];
  result = (int)*v2 + 0x30 * (_DWORD)v3;
  v2[1] = (char *)v3 + 1;
  *(_OWORD *)result = *(_OWORD *)a2;
  *(_OWORD *)(result + 0x10) = *(_OWORD *)(a2 + 0x10);
  v5 = *(_DWORD *)(a2 + 0x20);
  for ( i = *(_DWORD *)(v5 + 0xC); i; i = *(_DWORD *)(i + 0xC) )
    v5 = i;
  *(_DWORD *)(result + 0x20) = v5;
  *(_DWORD *)(result + 0x24) = *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4);
  v7 = *(_DWORD *)(a2 + 0x24);
  for ( j = *(_DWORD *)(v7 + 0xC); j; j = *(_DWORD *)(j + 0xC) )
    v7 = j;
  *(_DWORD *)(result + 0x28) = v7;
  *(_DWORD *)(result + 0x2C) = *(_DWORD *)(*(_DWORD *)(a2 + 0x24) + 4);
  return result;
}
