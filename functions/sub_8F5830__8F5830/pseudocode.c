const void *__thiscall sub_8F5830(_DWORD *this, const void **a2)
{
  const void *result; // eax

  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x8f5845*/
    sub_8A6EE0(a2, 4); /*0x8f584a*/
  *((_DWORD *)*a2 + (_DWORD)a2[1]) = *(this + 6); /*0x8f585a*/
  result = (char *)a2[1] + 1; /*0x8f5860*/
  a2[1] = result; /*0x8f5862*/
  return result; /*0x8f5861*/
}
