char __thiscall sub_88B4E0(unsigned int *this, int a2)
{
  char v3; // bl
  _DWORD *v4; // eax
  int v5; // ecx
  char v6; // al
  int v8; // edx

  v3 = 0;
  v4 = (_DWORD *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this);
  if ( !v4 || !a2 )
    return v3;
  v3 = 1;
  if ( !*(this + 8) )
  {
    v8 = *(_DWORD *)(a2 + 0xC);
    if ( v8 )
    {
      if ( (*(_BYTE *)(v8 + 0x10) & 3) == 0 )
        sub_899B30(v4, (int (__stdcall ***)(signed int))a2);
    }
    return v3;
  }
  v5 = *(_DWORD *)(a2 + 0xC);
  if ( !v5 )
    return v3;
  v6 = *(_BYTE *)(v5 + 0x10);
  if ( (v6 & 3) != 0 )
    return v3;
  *(_BYTE *)(v5 + 0x10) = v6 | 2;
  if ( *(this + 0xD) >= 0xC8 )
  {
    sub_88A440(this);
    sub_88A3A0(this);
    sub_88A310((int *)this);
    sub_88A280(this);
  }
  sub_8BC720((_WORD *)a2);
  *(_DWORD *)(*(this + 0xC) + 4 * (*(this + 0xD))++) = a2;
  return 1;
}
