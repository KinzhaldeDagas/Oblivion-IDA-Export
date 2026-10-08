const void *__thiscall sub_953680(const void **this, int a2, int a3, int a4)
{
  const void **v4; // esi
  _DWORD *v5; // eax
  const void *result; // eax

  v4 = this + 3; /*0x95368e*/
  if ( *(this + 4) == (const void *)((unsigned int)*(this + 5) & 0x3FFFFFFF) ) /*0x9536a0*/
    sub_8A6EE0(v4, 0xC); /*0x9536a5*/
  v5 = (char *)*v4 + 0xC * (_DWORD)v4[1]; /*0x9536b5*/
  *v5 = a2; /*0x9536b8*/
  v5[1] = a3; /*0x9536ba*/
  v5[2] = a4; /*0x9536bd*/
  result = (char *)v4[1] + 1; /*0x9536c4*/
  v4[1] = result; /*0x9536c5*/
  return result; /*0x9536c3*/
}
