int __thiscall sub_4CD2D0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // eax
  _DWORD *v5; // esi
  int result; // eax

  if ( this )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x58))(this);
    if ( v3 )
      sub_899CA0(v3, a2);
  }
  v4 = *(this + 0x1A);
  v5 = this + 0x18;
  result = v4 & 0x3FFFFFFF;
  if ( v5[1] == result )
    result = sub_8A6EE0((int)v5, 4);
  *(_DWORD *)(*v5 + 4 * v5[1]++) = a2;
  return result;
}
