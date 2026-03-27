char __thiscall sub_88B600(unsigned int *this, int a2)
{
  char v3; // bl
  _DWORD *v4; // eax
  int v5; // edi

  v3 = 0;
  v4 = (_DWORD *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this);
  if ( !v4 )
    return v3;
  v5 = a2;
  if ( !a2 )
    return v3;
  v3 = 1;
  if ( !*(this + 8) )
  {
    sub_8988F0(v4, &a2, a2);
    return v3;
  }
  if ( *(this + 0x11) >= 0xC8 )
  {
    sub_88A440(this);
    sub_88A3A0(this);
    sub_88A310((int *)this);
    sub_88A280(this);
  }
  if ( *(_WORD *)(v5 + 4) )
    ++*(_WORD *)(v5 + 6);
  *(_DWORD *)(*(this + 0x10) + 4 * (*(this + 0x11))++) = v5;
  return 1;
}
