int __thiscall sub_8DE710(const void **this, int a2)
{
  const void **v2; // esi

  v2 = this + 0x17;
  if ( *(this + 0x18) == (const void *)((unsigned int)*(this + 0x19) & 0x3FFFFFFF) )
    sub_8A6EE0(v2, 4);
  *((_DWORD *)*v2 + (_DWORD)v2[1]) = a2;
  v2[1] = (char *)v2[1] + 1;
  return a2;
}
