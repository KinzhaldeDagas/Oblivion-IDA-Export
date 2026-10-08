int __thiscall sub_8B2190(const void **this, int a2, int a3)
{
  const void **v3; // esi
  const void *v4; // ecx
  int result; // eax
  int v6; // edx
  int i; // ecx

  v3 = this + 4; /*0x8b2194*/
  if ( *(this + 5) == (const void *)((unsigned int)*(this + 6) & 0x3FFFFFFF) ) /*0x8b21a1*/
    sub_8A6EE0(v3, 0x30); /*0x8b21a6*/
  v4 = v3[1]; /*0x8b21ae*/
  result = (int)*v3 + 0x30 * (_DWORD)v4; /*0x8b21b9*/
  v3[1] = (char *)v4 + 1; /*0x8b21bc*/
  *(_OWORD *)result = *(_OWORD *)a3; /*0x8b21c6*/
  *(_DWORD *)(result + 0x10) = *(_DWORD *)(a3 + 0x10); /*0x8b21cc*/
  v6 = a2; /*0x8b21d2*/
  *(_DWORD *)(result + 0x14) = *(_DWORD *)(a3 + 0x14); /*0x8b21d6*/
  for ( i = *(_DWORD *)(a2 + 0xC); i; i = *(_DWORD *)(i + 0xC) ) /*0x8b21df*/
    v6 = i; /*0x8b21e1*/
  *(_DWORD *)(result + 0x20) = v6; /*0x8b21ea*/
  return result; /*0x8b21de*/
}
