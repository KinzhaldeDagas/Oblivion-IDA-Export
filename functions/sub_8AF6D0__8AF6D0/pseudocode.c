int __thiscall sub_8AF6D0(const void **this, int a2)
{
  const void **v2; // esi
  const void *v3; // ecx
  int result; // eax
  int v5; // ecx
  int i; // edx
  int v7; // edx
  int j; // ecx

  v2 = this + 4; /*0x8af6d4*/
  if ( *(this + 5) == (const void *)((unsigned int)*(this + 6) & 0x3FFFFFFF) ) /*0x8af6e1*/
    sub_8A6EE0(v2, 0x30); /*0x8af6e6*/
  v3 = v2[1]; /*0x8af6ee*/
  result = (int)*v2 + 0x30 * (_DWORD)v3; /*0x8af6f9*/
  v2[1] = (char *)v3 + 1; /*0x8af6fc*/
  *(_OWORD *)result = *(_OWORD *)a2; /*0x8af706*/
  *(_OWORD *)(result + 0x10) = *(_OWORD *)(a2 + 0x10); /*0x8af70d*/
  v5 = *(_DWORD *)(a2 + 0x20); /*0x8af711*/
  for ( i = *(_DWORD *)(v5 + 0xC); i; i = *(_DWORD *)(i + 0xC) ) /*0x8af719*/
    v5 = i; /*0x8af720*/
  *(_DWORD *)(result + 0x20) = v5; /*0x8af729*/
  *(_DWORD *)(result + 0x24) = *(_DWORD *)(*(_DWORD *)(a2 + 0x20) + 4); /*0x8af732*/
  v7 = *(_DWORD *)(a2 + 0x24); /*0x8af735*/
  for ( j = *(_DWORD *)(v7 + 0xC); j; j = *(_DWORD *)(j + 0xC) ) /*0x8af73d*/
    v7 = j; /*0x8af740*/
  *(_DWORD *)(result + 0x28) = v7; /*0x8af749*/
  *(_DWORD *)(result + 0x2C) = *(_DWORD *)(*(_DWORD *)(a2 + 0x24) + 4); /*0x8af752*/
  return result; /*0x8af755*/
}
