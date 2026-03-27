int __thiscall sub_91CB70(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 2;
  if ( *(this + 3) == (const void *)((unsigned int)*(this + 4) & 0x3FFFFFFF) )
    sub_8A6EE0(v2, 4);
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2;
  v2[1] = (char *)v2[1] + 1;
  return a2;
}
