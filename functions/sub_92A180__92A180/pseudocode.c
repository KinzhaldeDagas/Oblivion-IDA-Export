_DWORD *__thiscall sub_92A180(const void **this, const void *a2)
{
  const void **v2; // esi
  const void *v3; // ecx
  _DWORD *result; // eax

  v2 = this + 9;
  if ( *(this + 0xA) == (const void *)((unsigned int)*(this + 0xB) & 0x3FFFFFFF) )
    sub_8A6EE0(v2, 0x30);
  v3 = v2[1];
  result = (char *)*v2 + 0x30 * (_DWORD)v3;
  v2[1] = (char *)v3 + 1;
  qmemcpy(result, a2, 0x30u);
  if ( !result[7] )
  {
    result[0xB] = 1;
    result[9] = &stru_BA7A40;
    result[7] = &stru_BA7A40;
  }
  return result;
}
