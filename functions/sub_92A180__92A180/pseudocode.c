_DWORD *__thiscall sub_92A180(const void **this, const void *a2)
{
  const void **v2; // esi
  const void *v3; // ecx
  _DWORD *result; // eax

  v2 = this + 9; /*0x92a184*/
  if ( *(this + 0xA) == (const void *)((unsigned int)*(this + 0xB) & 0x3FFFFFFF) ) /*0x92a192*/
    sub_8A6EE0(v2, 0x30); /*0x92a197*/
  v3 = v2[1]; /*0x92a19f*/
  result = (char *)*v2 + 0x30 * (_DWORD)v3; /*0x92a1aa*/
  v2[1] = (char *)v3 + 1; /*0x92a1ad*/
  qmemcpy(result, a2, 0x30u); /*0x92a1bb*/
  if ( !result[7] ) /*0x92a1bd*/
  {
    result[0xB] = 1; /*0x92a1cb*/
    result[9] = &unk_BA7A40; /*0x92a1d2*/
    result[7] = &unk_BA7A40; /*0x92a1d5*/
  }
  return result; /*0x92a1c2*/
}
