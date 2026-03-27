char __thiscall sub_88B580(unsigned int *this, int a2)
{
  char v3; // bl
  _DWORD *v4; // eax

  v3 = 0;
  v4 = (_DWORD *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this);
  if ( !v4 || !a2 )
    return v3;
  v3 = 1;
  if ( !*(this + 8) )
  {
    sub_89CCC0(v4, a2);
    return v3;
  }
  if ( *(this + 0xF) >= 0x64 )
  {
    sub_88A440(this);
    sub_88A3A0(this);
    sub_88A310((int *)this);
    sub_88A280(this);
  }
  if ( *(_WORD *)(a2 + 4) )
    ++*(_WORD *)(a2 + 6);
  *(_DWORD *)(*(this + 0xE) + 4 * (*(this + 0xF))++) = a2;
  return 1;
}
