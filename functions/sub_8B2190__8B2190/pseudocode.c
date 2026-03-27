int __thiscall sub_8B2190(const void **this, int a2, int a3)
{
  const void **v3; // esi
  const void *v4; // ecx
  int result; // eax
  int v6; // edx
  int i; // ecx

  v3 = this + 4;
  if ( *(this + 5) == (const void *)((unsigned int)*(this + 6) & 0x3FFFFFFF) )
    sub_8A6EE0(v3, 0x30);
  v4 = v3[1];
  result = (int)*v3 + 0x30 * (_DWORD)v4;
  v3[1] = (char *)v4 + 1;
  *(_OWORD *)result = *(_OWORD *)a3;
  *(_DWORD *)(result + 0x10) = *(_DWORD *)(a3 + 0x10);
  v6 = a2;
  *(_DWORD *)(result + 0x14) = *(_DWORD *)(a3 + 0x14);
  for ( i = *(_DWORD *)(a2 + 0xC); i; i = *(_DWORD *)(i + 0xC) )
    v6 = i;
  *(_DWORD *)(result + 0x20) = v6;
  return result;
}
