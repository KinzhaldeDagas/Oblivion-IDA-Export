const void *__thiscall sub_953680(const void **this, int a2, int a3, int a4)
{
  const void **v4; // esi
  _DWORD *v5; // eax
  const void *result; // eax

  v4 = this + 3;
  if ( *(this + 4) == (const void *)((unsigned int)*(this + 5) & 0x3FFFFFFF) )
    sub_8A6EE0(v4, 0xC);
  v5 = (char *)*v4 + 0xC * (_DWORD)v4[1];
  *v5 = a2;
  v5[1] = a3;
  v5[2] = a4;
  result = (char *)v4[1] + 1;
  v4[1] = result;
  return result;
}
