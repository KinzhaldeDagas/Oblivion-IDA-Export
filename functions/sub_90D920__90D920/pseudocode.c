const void *__thiscall sub_90D920(const void **this, int a2, int a3)
{
  int v4; // ecx
  _DWORD *v5; // edx
  const void *result; // eax

  if ( *(this + 1) == (const void *)((unsigned int)*(this + 2) & 0x3FFFFFFF) ) /*0x90d93a*/
    sub_8A6EE0(this, 8); /*0x90d93f*/
  v4 = (int)*(this + 1); /*0x90d947*/
  v5 = *this; /*0x90d94a*/
  v5[2 * v4] = a2; /*0x90d94c*/
  v5[2 * v4 + 1] = a3; /*0x90d94f*/
  result = (char *)*(this + 1) + 1; /*0x90d956*/
  *(this + 1) = result; /*0x90d958*/
  return result; /*0x90d957*/
}
