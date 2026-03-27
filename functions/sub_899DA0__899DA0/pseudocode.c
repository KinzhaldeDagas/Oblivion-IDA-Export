int __thiscall sub_899DA0(_DWORD *this, int a2)
{
  _DWORD *v2; // esi

  v2 = this + 0x3D;
  if ( *(this + 0x3E) == (*(this + 0x3F) & 0x3FFFFFFF) )
    sub_8A6EE0((int)v2, 4);
  *(_DWORD *)(*v2 + 4 * v2[1]++) = a2;
  return a2;
}
