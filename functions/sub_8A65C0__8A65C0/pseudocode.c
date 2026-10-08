char *__thiscall sub_8A65C0(_DWORD *this, int a2)
{
  const void **v2; // esi
  int v3; // ecx
  char *result; // eax
  _DWORD *v5; // edx

  v2 = (const void **)(this + 0x28); /*0x8a65c1*/
  v3 = *(this + 0x29); /*0x8a65c7*/
  result = 0; /*0x8a65ca*/
  if ( v3 <= 0 ) /*0x8a65ce*/
    goto LABEL_5; /*0x8a65ce*/
  v5 = *v2; /*0x8a65d0*/
  while ( *v5 ) /*0x8a65d5*/
  {
    ++result; /*0x8a65d7*/
    ++v5; /*0x8a65d8*/
    if ( (int)result >= v3 ) /*0x8a65dd*/
      goto LABEL_5; /*0x8a65dd*/
  }
  if ( (int)result < 0 ) /*0x8a6612*/
  {
LABEL_5:
    if ( v2[1] == (const void *)((unsigned int)v2[2] & 0x3FFFFFFF) ) /*0x8a65ec*/
      sub_8A6EE0(v2, 4); /*0x8a65f1*/
    *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2; /*0x8a6602*/
    result = (char *)v2[1] + 1; /*0x8a6608*/
    v2[1] = result; /*0x8a6609*/
  }
  else
  {
    *((_DWORD *)*v2 + (_DWORD)result) = a2; /*0x8a661a*/
  }
  return result; /*0x8a660c*/
}
