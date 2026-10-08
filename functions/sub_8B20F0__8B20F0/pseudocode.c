int *__thiscall sub_8B20F0(const void **this, int a2, int a3)
{
  const void **v3; // esi
  int *result; // eax
  int v5; // edx
  int i; // ecx
  int v7; // edx
  int j; // ecx

  v3 = this + 2; /*0x8b20f4*/
  if ( *(this + 3) == (const void *)((unsigned int)*(this + 4) & 0x3FFFFFFF) ) /*0x8b2101*/
    sub_8A6EE0(v3, 0x10); /*0x8b2106*/
  result = (int *)((char *)*v3 + 0x10 * (_DWORD)v3[1]); /*0x8b2118*/
  v3[1] = (char *)v3[1] + 1; /*0x8b211b*/
  v5 = *(_DWORD *)(a2 + 0xC); /*0x8b2122*/
  for ( i = a2; v5; v5 = *(_DWORD *)(v5 + 0xC) ) /*0x8b2129*/
    i = v5; /*0x8b2130*/
  *result = i; /*0x8b2139*/
  result[1] = *(_DWORD *)(a2 + 4); /*0x8b2142*/
  v7 = *(_DWORD *)(a3 + 0xC); /*0x8b2145*/
  for ( j = a3; v7; v7 = *(_DWORD *)(v7 + 0xC) ) /*0x8b214c*/
    j = v7; /*0x8b2150*/
  result[2] = j; /*0x8b2159*/
  result[3] = *(_DWORD *)(a3 + 4); /*0x8b215f*/
  return result; /*0x8b2162*/
}
