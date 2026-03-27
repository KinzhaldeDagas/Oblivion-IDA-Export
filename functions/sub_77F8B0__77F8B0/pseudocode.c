int __thiscall sub_77F8B0(_DWORD *this, int a2)
{
  void (__stdcall *v3)(int, int, _DWORD); // edx
  int v5; // [esp+0h] [ebp-8h]

  v3 = *(void (__stdcall **)(int, int, _DWORD))(*this + 0x64);
  if ( (*(_BYTE *)(a2 + 0x18) & 1) != 0 )
  {
    v3(0x1B, 1, 0);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(
      this,
      0x13,
      *(this + ((*(unsigned __int8 *)(a2 + 0x18) >> 1) & 0xF) + 8),
      0);
    (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*this + 0x64))(
      0x14,
      *(this + ((*(unsigned __int16 *)(a2 + 0x18) >> 5) & 0xF) + 8),
      0,
      v5);
  }
  else
  {
    ((void (__stdcall *)(int, _DWORD, _DWORD, int))v3)(0x1B, 0, 0, v5);
  }
  if ( (*(_WORD *)(a2 + 0x18) & 0x200) == 0 )
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 0x64))(this, 0xF, 0);
  (*(void (__thiscall **)(_DWORD *, int, int))(*this + 0x64))(this, 0xF, 1);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(
    this,
    0x19,
    *(this + ((*(unsigned __int16 *)(a2 + 0x18) >> 0xA) & 7) + 0x13),
    0);
  return (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(
           this,
           0x18,
           *(unsigned __int8 *)(a2 + 0x1A),
           0);
}
