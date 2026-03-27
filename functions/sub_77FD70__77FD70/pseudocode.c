int __thiscall sub_77FD70(_DWORD *this, int a2)
{
  if ( (*(_BYTE *)(a2 + 0x18) & 1) != 0 )
  {
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 0x64))(this, 7, 1, 0);
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(*this + 0x64))(
      0x17,
      *(this + ((*(unsigned __int8 *)(a2 + 0x18) >> 2) & 0xF) + 0x40),
      0);
  }
  else
  {
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(*this + 0x64))(7, 0, 0);
  }
  return (*(int (__thiscall **)(_DWORD *, int, bool, _DWORD))(*this + 0x64))(
           this,
           0xE,
           (*(_BYTE *)(a2 + 0x18) & 2) != 0,
           0);
}
