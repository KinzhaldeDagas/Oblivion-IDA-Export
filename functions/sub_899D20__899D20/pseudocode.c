int __thiscall sub_899D20(_DWORD *this, int a2)
{
  _DWORD *v2; // esi

  v2 = this + 0x43;
  if ( *(this + 0x44) == (*(this + 0x45) & 0x3FFFFFFF) )
    sub_8A6EE0((int)v2, 4);
  *(_DWORD *)(*v2 + 4 * v2[1]++) = a2;
  return a2;
}
