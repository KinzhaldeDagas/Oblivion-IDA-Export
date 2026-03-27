bool __thiscall sub_88B430(unsigned int *this, int a2)
{
  char v3; // bl
  _DWORD *v4; // eax
  _WORD *v5; // edi
  int v6; // ecx
  int v7; // eax

  v3 = 0;
  v4 = (_DWORD *)(*(int (__thiscall **)(unsigned int *))(*this + 0x58))(this);
  if ( !v4 )
    return v3;
  v5 = (_WORD *)a2;
  if ( !a2 )
    return v3;
  v6 = *(_DWORD *)(a2 + 0xC);
  if ( !*(this + 8) )
  {
    if ( !v6 || (*(_BYTE *)(v6 + 0x18) & 0x30) != 0 )
      return 1;
    return *sub_8996C0(v4, &a2, (int (__stdcall ***)(signed int))a2) != 0;
  }
  if ( !v6 )
    return 1;
  v7 = *(_DWORD *)(v6 + 0x18);
  if ( (v7 & 0x30) != 0 )
    return 1;
  *(_DWORD *)(v6 + 0x18) = v7 | 0x20;
  if ( *(this + 0x13) >= 0xBB8 )
  {
    sub_88A440(this);
    sub_88A3A0(this);
    sub_88A310((int *)this);
    sub_88A280(this);
  }
  sub_8BC720(v5);
  *(_DWORD *)(*(this + 0x12) + 4 * (*(this + 0x13))++) = v5;
  return 1;
}
