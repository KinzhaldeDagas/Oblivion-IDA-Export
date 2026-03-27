__int16 __thiscall sub_8F7FF0(_WORD *this)
{
  _WORD *v2; // esi
  int v3; // ebx
  int v4; // eax

  v2 = this + 0xE;
  v3 = 8;
  do
  {
    v4 = (unsigned __int16)*v2;
    if ( *v2 != 0xFFFF )
      LOWORD(v4) = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v4);
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( this )
    LOWORD(v4) = (**(__int16 (__thiscall ***)(_WORD *, int))this)(this, 1);
  return v4;
}
