const void *__thiscall sub_90D920(const void **this, int a2, int a3)
{
  int v4; // ecx
  _DWORD *v5; // edx
  const void *result; // eax

  if ( *(this + 1) == (const void *)((unsigned int)*(this + 2) & 0x3FFFFFFF) )
    sub_8A6EE0(this, 8);
  v4 = (int)*(this + 1);
  v5 = *this;
  v5[2 * v4] = a2;
  v5[2 * v4 + 1] = a3;
  result = (char *)*(this + 1) + 1;
  *(this + 1) = result;
  return result;
}
