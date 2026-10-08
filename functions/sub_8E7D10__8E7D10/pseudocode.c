const void *__thiscall sub_8E7D10(_DWORD *this, const void **a2)
{
  char *v3; // eax
  unsigned int v4; // ecx
  const void *result; // eax

  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x8e7d25*/
    sub_8A6EE0(a2, 4); /*0x8e7d2a*/
  *((_DWORD *)*a2 + (_DWORD)a2[1]) = *(this + 6); /*0x8e7d3a*/
  v3 = (char *)a2[1] + 1; /*0x8e7d43*/
  v4 = (unsigned int)a2[2] & 0x3FFFFFFF; /*0x8e7d44*/
  a2[1] = v3; /*0x8e7d4c*/
  if ( v3 == (char *)v4 ) /*0x8e7d4f*/
    sub_8A6EE0(a2, 4); /*0x8e7d54*/
  *((_DWORD *)*a2 + (_DWORD)a2[1]) = *(this + 7); /*0x8e7d64*/
  result = (char *)a2[1] + 1; /*0x8e7d6a*/
  a2[1] = result; /*0x8e7d6c*/
  return result; /*0x8e7d6b*/
}
