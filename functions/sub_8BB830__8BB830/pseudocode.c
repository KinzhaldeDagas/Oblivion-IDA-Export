int __thiscall sub_8BB830(const void **this, int a2, int a3)
{
  const void **v3; // esi

  v3 = this + 5;
  if ( *(this + 6) == (const void *)((unsigned int)*(this + 7) & 0x3FFFFFFF) )
    sub_8A6EE0(v3, 4);
  *((_DWORD *)*v3 + (_DWORD)v3[1]) = a2;
  v3[1] = (char *)v3[1] + 1;
  return a2;
}
